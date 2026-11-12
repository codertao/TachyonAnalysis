
/* refine: slot 0x30: release + CoCreateInstance(CLSID_DirectPlay, IID_IDirectPlay3A) when flagged
    */

undefined4 DPlay_RecreateInstance(void)

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
      DPlay_Shutdown();
      return 1;
    }
    DAT_0055e3e4 = 0;
  }
  return 0;
}

