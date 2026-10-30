
undefined4 FUN_004aa330(void)

{
  HRESULT HVar1;
  
  if (DAT_0055e3e0 == 0) {
    return 1;
  }
  if (DAT_0055e3e4 != 0) {
    if (DAT_005b9af4 != (int *)0x0) {
      (**(code **)(*DAT_005b9af4 + 8))(DAT_005b9af4);
      DAT_005b9af4 = (int *)0x0;
    }
    HVar1 = CoCreateInstance((IID *)&DAT_0052eeb8,(LPUNKNOWN)0x0,1,(IID *)&DAT_0052ee98,
                             &DAT_005b9af4);
    if (HVar1 != 0) {
      FUN_004a9e50();
      return 1;
    }
    DAT_0055e3e4 = 0;
  }
  return 0;
}

