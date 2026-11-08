
void FUN_00494200(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041b790(&DAT_005b32b0,3,&DAT_005b31c0);
  if (iVar1 != 0) {
    FUN_0041b8b0(iVar1);
    *(undefined4 *)(iVar1 + 0x114) = 0;
    *(undefined2 *)(iVar1 + 0x74) = 2;
    *(undefined4 *)(iVar1 + 0x58) = DAT_00565668;
    *(code **)(iVar1 + 0x70) = FUN_00492d30;
    *(undefined4 *)(iVar1 + 0x34) = *param_1;
    *(undefined4 *)(iVar1 + 0x38) = param_1[1];
    *(undefined4 *)(iVar1 + 0x3c) = param_1[2];
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined2 *)(iVar1 + 0x30) = 0;
    uVar2 = WeaponDef_Get(param_2);
    *(undefined4 *)(iVar1 + 0xdc) = uVar2;
    FUN_00494160(iVar1);
    FUN_00423590(param_1);
    FUN_004666e0(6,6,0,iVar1,0x10000);
  }
  return;
}

