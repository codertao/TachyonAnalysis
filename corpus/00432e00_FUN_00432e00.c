
void FUN_00432e00(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_80 [128];
  
  uVar2 = DAT_006022f4;
  iVar1 = DAT_00564ae4;
  if (DAT_00562bcc == 0) {
    if ((DAT_005b8f48 != 0) && ((g_FlightStateFlags & 4) != 0)) {
      str_sprintf(local_80,s__s___s__0053f360,param_1,param_2);
      FUN_0045d9d0(local_80,0);
      return;
    }
    if (DAT_00564ae4 == 0) {
      FUN_004a4bb0(0x280,0x1e0,1);
    }
    else {
      FUN_004adcb0();
    }
    MessageBoxA(DAT_0060395c,param_1,param_2,0);
    DAT_00564ae4 = iVar1;
    if (iVar1 != 0) {
      FUN_004adc70();
      return;
    }
    FUN_004a4bb0(0x280,0x1e0,uVar2);
  }
  return;
}

