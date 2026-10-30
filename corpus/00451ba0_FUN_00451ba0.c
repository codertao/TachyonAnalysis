
undefined4 * FUN_00451ba0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (DAT_005b2adc == 1) {
    iVar1 = FUN_004adb70(DAT_00603960,DAT_0060395c,s_hw_3dfx_dll_00548784);
    if (iVar1 != 0) {
      return (undefined4 *)0x0;
    }
  }
  else {
    iVar1 = FUN_004adb70(DAT_00603960,DAT_0060395c,s_hw_d3d_dll_00548778);
    if (iVar1 != 0) {
      return (undefined4 *)0x0;
    }
    iVar1 = FUN_004ad3c0(DAT_005b2ae4 + 0x20);
    if (iVar1 != 0) {
      FUN_004ad3c0(0x20);
    }
  }
  FUN_004adc70();
  puVar2 = (undefined4 *)FUN_00451b60(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    (*DAT_00604510)(*puVar2,puVar2[1],puVar2[2],1);
    FUN_004a5510(puVar2[2]);
    FUN_004ad4e0(puVar2[2]);
    FUN_004ad4b0(0);
    DAT_005a67e8 = puVar2[2];
    FUN_004ad3d0(6,1);
    FUN_004ad3c0(0x42);
    FUN_004ad3c0(0x31);
    DAT_00562cd8 = FUN_004ad3c0(7);
    FUN_004ad410(0xfffffc00);
    uVar3 = FUN_004ad3c0(3);
    DAT_0058f418 = uVar3 & 0xfffffffd;
    DAT_005a6818 = 0x80;
    DAT_005a681c = FUN_004ad3c0(7);
    if (DAT_005b2ad0 != 0) {
      FUN_004ad3d0(4,1);
    }
    return puVar2;
  }
  FUN_004adcb0();
  FUN_004adc30();
  DAT_00564ae4 = puVar2;
  return (undefined4 *)0x0;
}

