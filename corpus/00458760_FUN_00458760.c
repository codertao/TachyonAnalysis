
undefined4 FUN_00458760(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Sped_GetDefList(param_1,param_3);
  iVar2 = Sped_AliasCanSpawn(uVar1,*(undefined4 *)(param_1 + 0x5c));
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  iVar2 = DcbPool_Alloc(&DAT_0058af9c,0x15,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0041b850(iVar2);
  *(int *)(iVar2 + 0x8c) = param_2;
  *(undefined4 *)(iVar2 + 0xd0) = 0x100;
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined1 *)(iVar2 + 0x7e) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0x10000;
  *(code **)(iVar2 + 0x80) = FUN_00445720;
  *(code **)(iVar2 + 0x68) = FUN_00445720;
  *(int *)(param_1 + 0x28) = iVar2;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(int *)(iVar2 + 0xdc) = param_1;
  if (param_4 == (undefined4 *)0x0) {
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x10);
    *(int *)(iVar2 + 0x4c) = *(int *)(param_1 + 0x14) << 0x10;
    *(int *)(iVar2 + 0x50) = *(int *)(param_1 + 0x18) << 0x10;
    *(int *)(iVar2 + 0x54) = *(int *)(param_1 + 0x1c) << 0x10;
  }
  else {
    *(undefined4 *)(iVar2 + 0x34) = *param_4;
    *(undefined4 *)(iVar2 + 0x38) = param_4[1];
    *(undefined4 *)(iVar2 + 0x3c) = param_4[2];
    *(undefined4 *)(iVar2 + 0x4c) = param_4[3];
    *(undefined4 *)(iVar2 + 0x50) = param_4[4];
    *(undefined4 *)(iVar2 + 0x54) = param_4[5];
  }
  *(undefined1 *)(iVar2 + 0xc3) = 3;
  *(undefined1 *)(iVar2 + 0xc0) = 4;
  *(undefined4 *)(iVar2 + 0xb8) = 0x28000;
  FUN_0045cbf0(iVar2,*(int *)(iVar2 + 100) + 0x14);
  return 1;
}

