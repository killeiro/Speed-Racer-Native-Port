from pathlib import Path
import argparse,subprocess,os,time,csv,json,statistics,re
p=argparse.ArgumentParser();p.add_argument('--exe',type=Path,required=True);p.add_argument('--state',type=Path,required=True);p.add_argument('--memcard',type=Path,required=True);p.add_argument('--out',type=Path,required=True);p.add_argument('--end-frame',type=int,default=4560);p.add_argument('--gs-audit',action='store_true');p.add_argument('--dll-dir',type=Path);p.add_argument('--cases',nargs='+',default=['threaded','single','no-vu','scale2','scale3']);a=p.parse_args();a.out.mkdir(parents=True,exist_ok=True)
def percentiles(v):
    v=sorted(v)
    return {key:v[int((len(v)-1)*q)] for key,q in [('p50',.5),('p95',.95),('p99',.99)]} if v else {}
summary=[]
for name in a.cases:
    env=os.environ.copy()
    for k in list(env):
        if k.startswith(('PS2_','SDL_')):del env[k]
    env['PATH']=(str(a.dll_dir.resolve())+';' if a.dll_dir else '')+env.get('PATH','');env['SDL_AUDIODRIVER']='wasapi';env['APPDATA']=str(a.out.resolve()/'prefs');env['LOCALAPPDATA']=str(a.out.resolve()/'local')
    for k in ['SDL_JOYSTICK_HIDAPI','SDL_XINPUT_ENABLED','SDL_DIRECTINPUT_ENABLED','SDL_JOYSTICK_WGI','SDL_JOYSTICK_RAWINPUT']:env[k]='0'
    changes={'single':{'PS2_ONE_THREAD':'1'},'no-vu':{'PS2_NO_VU_THREAD':'1'},'scale2':{'PS2_SCALE':'2'},'scale3':{'PS2_SCALE':'3'},'sdl':{'PS2_SDL_RENDERER':'1'}}.get(name,{})
    env.update(changes)
    if a.gs_audit:env['PS2_GS_AUDIT']='1'
    env['PS2_SIM_CSV']=str(a.out.resolve()/(name+'-sim.csv'));env['PS2_FRAME_CSV']=str(a.out.resolve()/(name+'-present.csv'))
    cmd=[str(a.exe.resolve()),'--load-state',str(a.state.resolve()),'--frames',str(a.end_frame),'--memcard',str(a.memcard.resolve())]
    started=time.perf_counter()
    with (a.out/(name+'.log')).open('w') as f:
        result=subprocess.run(cmd,env=env,stdout=f,stderr=f,timeout=150)
    row={'case':name,'exit':result.returncode,'wall_total_s':time.perf_counter()-started,'settings':changes,'command':cmd}
    sim=list(csv.DictReader(open(env['PS2_SIM_CSV']))) if Path(env['PS2_SIM_CSV']).exists() else []
    present=list(csv.DictReader(open(env['PS2_FRAME_CSV']))) if Path(env['PS2_FRAME_CSV']).exists() else []
    if len(sim)>70:
        sim=sim[60:];first,last=sim[0],sim[-1];wall=float(last['wall_s'])-float(first['wall_s']);cycles=int(last['ee_cycles'])-int(first['ee_cycles']);frames=int(last['emulated_frame'])-int(first['emulated_frame'])
        row.update(simulation_fps=frames/wall,simulation_speed_percent=cycles/294912000/wall*100,simulated_s=cycles/294912000,measured_wall_s=wall,interval_ms=percentiles([float(x['interval_ms']) for x in sim]),post_wait_ms_mean=statistics.mean(float(x['post_wait_ms']) for x in sim),pace_wait_ms_mean=statistics.mean(float(x['pace_wait_ms']) for x in sim),nominal_hz=int(last['nominal_hz']))
    if len(present)>70:
        present=present[60:];times=[float(x['interval_ms']) for x in present];row.update(present_callback_fps=1000/statistics.mean(times),present_interval_ms=percentiles(times),stutter_over_33ms=sum(x>33.3333 for x in times),audio_queue_mean_ms=statistics.mean(float(x['audio_ms']) for x in present),vu_interpreted_calls=int(present[-1]['vu_interpreted_calls']))
    text=(a.out/(name+'.log')).read_text(errors='replace');row['gpu_stats']=[line for line in text.splitlines() if line.startswith(('[gpu] raster batches','[gpu] ','[window] ','[gs-audit]','[display-audit]'))]
    summary.append(row);(a.out/'summary.json').write_text(json.dumps(summary,indent=2));print(json.dumps(row),flush=True)
