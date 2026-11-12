
/* sweep */

undefined4 Sys_Shutdown(int param_1)

{
  if (DAT_00563ea0 == 0) {
    DAT_00563ea0 = 1;
    if ((param_1 != 0) && (DAT_006039a4 != 0)) {
      Sys_DumpException(param_1,DAT_006039a8);
    }
    if (DAT_00603990 != 0) {
      Sys_WaitKey();
    }
    Vid_SetRes(0x280,0x1e0,1);
    Cursor_ShowOnce();
    Timer_Stop();
    Sys_CallShutdown();
  }
  return 0;
}

