
/* 50Hz/0x14ms; drives mode +4 update / +8 render */

void ModeLoop_FixedStep50Hz(int param_1)

{
  bool bVar1;
  DWORD DVar2;
  
  DAT_00562cd0 = 0;
  GLBL_loopTime = timeGetTime();
  if (DAT_00562cd0 == 0) {
    while (DAT_00590e38 == 0) {
      bVar1 = false;
      DVar2 = timeGetTime();
      if (GLBL_loopTime < DVar2) {
        do {
          if (DAT_00562cd0 != 0) {
            if (!bVar1) goto LAB_0044eb56;
            break;
          }
          MessagePump_IdleTick();
          if (DAT_00590e38 != 0) goto LAB_0044ebf4;
          DAT_00562cd0 = (**(code **)(param_1 + 4))();
          GLBL_loopTime = GLBL_loopTime + 0x14;
          bVar1 = true;
          DVar2 = timeGetTime();
        } while (GLBL_loopTime < DVar2);
      }
      else {
LAB_0044eb56:
        Sleep(1);
      }
      if (DAT_00590e48 != (int *)0x0) {
        if (*DAT_00590e48 != DAT_00590e4c) {
          do {
            if ((DAT_00562cd0 != 0) ||
               (DAT_00562cd0 = (**(code **)(param_1 + 4))(), DAT_00590e48 == (int *)0x0)) break;
          } while (*DAT_00590e48 != DAT_00590e4c);
        }
        GLBL_loopTime = timeGetTime();
        bVar1 = false;
        DAT_00590e48 = (int *)0x0;
        if (GLBL_run_once_func_cb != (code *)0x0) {
          (*GLBL_run_once_func_cb)();
          GLBL_run_once_func_cb = (code *)0x0;
        }
      }
      if (DAT_00562cd0 == 0) {
        if (bVar1) {
          if ((DAT_00603964 == 0) || (DAT_00603968 == 0)) goto LAB_0044ebda;
          (**(code **)(param_1 + 8))();
        }
LAB_0044ebde:
        MessagePump_IdleTick();
      }
      else {
LAB_0044ebda:
        if (!bVar1) goto LAB_0044ebde;
      }
      if (DAT_00562cd0 != 0) {
        return;
      }
    }
LAB_0044ebf4:
    g_NextMode = 0;
    DAT_00590e20 = 1;
  }
  return;
}

