"""Native, threaded per-track replay measurements. Private states are inputs.

Screenshots must be captured separately: --frames-dir selects the synchronous
renderer and would measure a different execution mode. No game data is exported.
"""
from pathlib import Path
import argparse,csv,hashlib,json,os,re,statistics,subprocess,time
p=argparse.ArgumentParser(description=__doc__)
for name in ['exe','states','memcard','out']:p.add_argument('--'+name,type=Path,required=True)
p.add_argument('--tracks',nargs='+');p.add_argument('--frames',type=int,default=600)
p.add_argument('--repeat',type=int,default=1);p.add_argument('--maneuvers',action='store_true')
p.add_argument('--env',action='append',default=[])
a=p.parse_args();a.out.mkdir(parents=True,exist_ok=True)
order=['Thunderhead','Onuris','Fuji','Aurora','Grand-Prix','Skorost']
states=[a.states/f'{g}-{t}.state' for g in order for t in range(6)]
if a.tracks:states=[s for s in states if s.stem in a.tracks]
if not states or any(not s.is_file() for s in states):p.error('selected checkpoints are missing')
digest=lambda path:hashlib.sha256(path.read_bytes()).hexdigest()
sha=digest(a.exe);rows=[]
def quantiles(values):
 v=sorted(values)
 return {k:v[int((len(v)-1)*q)] for k,q in [('p50',.5),('p95',.95),('p99',.99)]} if v else {}
for repeat in range(a.repeat):
 for state in states:
    name=f'{state.stem}-r{repeat+1}';out=a.out/name;out.mkdir(exist_ok=True)
    env={k:v for k,v in os.environ.items() if not k.startswith(('PS2_','SDL_'))}
    env['PATH']='C:/msys64/mingw64/bin;'+env['PATH'];env['SDL_AUDIODRIVER']='wasapi'
    for k in ['SDL_JOYSTICK_HIDAPI','SDL_XINPUT_ENABLED','SDL_DIRECTINPUT_ENABLED','SDL_JOYSTICK_WGI','SDL_JOYSTICK_RAWINPUT']:env[k]='0'
    env['APPDATA']=str(out.resolve()/'prefs');env['LOCALAPPDATA']=str(out.resolve()/'local')
    env['PS2_SIM_CSV']=str(out.resolve()/'sim.csv');env['PS2_FRAME_CSV']=str(out.resolve()/'present.csv');env['PS2_GS_AUDIT']='1'
    for setting in a.env:
        key,separator,value=setting.partition('=')
        if not separator:p.error('--env expects KEY=VALUE')
        env[key]=value
    start_frame=10600;end_frame=start_frame+a.frames
    cmd=[str(a.exe.resolve()),'--load-state',str(state.resolve()),'--frames',str(end_frame),'--memcard',str(a.memcard.resolve()),
         '--press',f'{start_frame+1}:r2:{a.frames}','--press',f'{start_frame+180}:l2:120','--press',f'{start_frame+300}:circle:12']
    if a.maneuvers:cmd+=['--press',f'{start_frame+210}:rright:16']
    row={'track':state.stem,'repeat':repeat+1,'exe_sha256':sha,'state_sha256':digest(state),'command':cmd,'env_overrides':a.env,'maneuvers':a.maneuvers}
    started=time.perf_counter()
    try:
        with (out/'run.log').open('w') as log:result=subprocess.run(cmd,env=env,stdout=log,stderr=log,timeout=300)
        row['exit']=result.returncode
    except subprocess.TimeoutExpired:row['exit']='timeout'
    row['wall_total_s']=time.perf_counter()-started
    sim=list(csv.DictReader((out/'sim.csv').open())) if (out/'sim.csv').exists() else []
    present=list(csv.DictReader((out/'present.csv').open())) if (out/'present.csv').exists() else []
    row['frames_recorded']=len(sim)
    if len(sim)>70:
        sim=sim[60:];first,last=sim[0],sim[-1];wall=float(last['wall_s'])-float(first['wall_s']);cycles=int(last['ee_cycles'])-int(first['ee_cycles'])
        row.update(simulation_fps=(int(last['emulated_frame'])-int(first['emulated_frame']))/wall,simulation_speed_percent=cycles/294912000/wall*100,
            measured_wall_s=wall,nominal_hz=int(last['nominal_hz']),interval_ms=quantiles([float(x['interval_ms']) for x in sim]),
            post_wait_ms_mean=statistics.mean(float(x['post_wait_ms']) for x in sim),pace_wait_ms_mean=statistics.mean(float(x['pace_wait_ms']) for x in sim))
    if len(present)>70:
        present=present[60:];v=[float(x['interval_ms']) for x in present]
        row.update(present_callback_fps=1000/statistics.mean(v),present_interval_ms=quantiles(v),stutter_over_33ms=sum(x>33.3333 for x in v),
            audio_queue_mean_ms=statistics.mean(float(x['audio_ms']) for x in present),zero_audio_queue_samples=sum(float(x['audio_ms'])==0 for x in present))
    text=(out/'run.log').read_text(errors='replace')
    row['stats']=[line for line in text.splitlines() if line.startswith(('[gpu]','[vu-cont]','[gs-audit]','[display-audit]'))]
    (out/'metrics.json').write_text(json.dumps(row,indent=2));rows.append(row);(a.out/'summary.json').write_text(json.dumps(rows,indent=2))
    print(name,'exit',row['exit'],'sim FPS',round(row.get('simulation_fps',0),2),'p95',row.get('interval_ms',{}).get('p95'),flush=True)
