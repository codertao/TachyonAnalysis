
/* sweep */

void ScreenZoom_UpdateAll(void)

{
  int iVar1;
  
  for (iVar1 = DAT_005a4b48; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xd0)) {
    if (*(int *)(iVar1 + 0x7c) == 0) {
      ScreenZoom_FreeFinished(iVar1);
    }
    else {
      ScreenZoom_Step();
    }
  }
  return;
}

