
void FUN_00415d90(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005b31c0;
  if ((g_CutsceneActive == 0) && (DAT_005b332c != 0)) {
    g_CutsceneActive = 0;
    iVar1 = DAT_005b3280;
    while (iVar2 = iVar1, iVar1 = DAT_005b31c0, iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      if (*(code **)(iVar2 + 0x68) != (code *)0x0) {
        (**(code **)(iVar2 + 0x68))(iVar2);
      }
    }
    while (iVar2 = iVar1, iVar1 = DAT_005b31c0, iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      if (*(code **)(iVar2 + 0x68) != (code *)0x0) {
        (**(code **)(iVar2 + 0x68))(iVar2);
      }
    }
    while (iVar2 = iVar1, iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      if (*(code **)(iVar2 + 0x6c) != (code *)0x0) {
        (**(code **)(iVar2 + 0x6c))(iVar2);
      }
    }
    FUN_00415d10();
    return;
  }
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if ((*(short *)(iVar1 + 0x76) == 6) && (*(code **)(iVar1 + 0x68) != (code *)0x0)) {
      (**(code **)(iVar1 + 0x68))(iVar1);
    }
  }
  return;
}

