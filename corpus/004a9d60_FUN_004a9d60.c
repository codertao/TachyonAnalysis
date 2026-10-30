
undefined4 FUN_004a9d60(void)

{
  int iVar1;
  HRESULT HVar2;
  
  if (DAT_0055e3e0 != 0) {
    return 0;
  }
  CoInitialize((LPVOID)0x0);
  DAT_005b9cb0 = (int *)0x0;
  iVar1 = Ordinal_4(0,&DAT_005b9cb0,0,0,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)*DAT_005b9cb0)(DAT_005b9cb0,&DAT_0052eec8,&DAT_005b9c00);
    if (iVar1 == 0) {
      HVar2 = CoCreateInstance((IID *)&DAT_0052eeb8,(LPUNKNOWN)0x0,1,(IID *)&DAT_0052ee98,
                               &DAT_005b9af4);
      if (HVar2 == 0) {
        DAT_00564910 = FUN_0049c7d0(0x8000,s_Net_Message_Buffer_0055e8b0);
        if (DAT_00564910 != 0) {
          DAT_0055e3e0 = 1;
          return 0;
        }
        (**(code **)(*DAT_005b9af4 + 8))(DAT_005b9af4);
        DAT_005b9af4 = (int *)0x0;
        (**(code **)(*DAT_005b9c00 + 8))(DAT_005b9c00);
        DAT_005b9c00 = (int *)0x0;
        (**(code **)(*DAT_005b9cb0 + 8))(DAT_005b9cb0);
        DAT_005b9cb0 = (int *)0x0;
        return 1;
      }
      (**(code **)(*DAT_005b9c00 + 8))(DAT_005b9c00);
      DAT_005b9c00 = (int *)0x0;
    }
    (**(code **)(*DAT_005b9cb0 + 8))(DAT_005b9cb0);
    DAT_005b9cb0 = (int *)0x0;
  }
  return 1;
}

