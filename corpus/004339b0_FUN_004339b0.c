
undefined4 FUN_004339b0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Sped_GetDefList(param_1,param_3);
  iVar3 = Sped_AliasCanSpawn(uVar2,*(undefined4 *)(param_1 + 0x5c));
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  iVar3 = FUN_004344d0(*(undefined4 *)(param_2 + 0x14c));
  if (iVar3 != 0) {
    *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
    *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
  }
  iVar3 = DcbPool_Alloc(&DAT_0058af9c,0x10,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0041b850(iVar3);
  *(int *)(iVar3 + 0x8c) = param_2;
  *(undefined4 *)(iVar3 + 0xd0) = 0x40;
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_2 + 0x140);
  *(undefined1 *)(iVar3 + 0x7e) = *(undefined1 *)(param_2 + 0x144);
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0x10000;
  *(undefined1 **)(iVar3 + 0x80) = &LAB_004336f0;
  *(code **)(iVar3 + 0x68) = FUN_00433760;
  *(int *)(param_1 + 0x28) = iVar3;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(int *)(iVar3 + 0xd8) = param_1;
  iVar4 = FUN_004344a0(iVar3);
  if (iVar4 != 0) {
    *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
    *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
  }
  if (param_4 == (undefined4 *)0x0) {
    *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(param_1 + 0x10);
    *(int *)(iVar3 + 0x4c) = *(int *)(param_1 + 0x14) << 0x10;
    *(int *)(iVar3 + 0x50) = *(int *)(param_1 + 0x18) << 0x10;
    *(int *)(iVar3 + 0x54) = *(int *)(param_1 + 0x1c) << 0x10;
  }
  else {
    *(undefined4 *)(iVar3 + 0x34) = *param_4;
    *(undefined4 *)(iVar3 + 0x38) = param_4[1];
    *(undefined4 *)(iVar3 + 0x3c) = param_4[2];
    *(undefined4 *)(iVar3 + 0x4c) = param_4[3];
    *(undefined4 *)(iVar3 + 0x50) = param_4[4];
    *(undefined4 *)(iVar3 + 0x54) = param_4[5];
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined1 *)(iVar3 + 0xc2) = *(undefined1 *)(param_2 + 0x14c);
  }
  else {
    *(char *)(iVar3 + 0xc2) = *(char *)(param_1 + 0x38) + -1;
  }
  *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(param_2 + 0xf0);
  uVar5 = global_bad_shift_rng();
  *(uint *)(iVar3 + 0x10c) = uVar5 & 0xff;
  uVar1 = FUN_00434530(param_1);
  *(undefined1 *)(iVar3 + 0xf6) = uVar1;
  *(undefined1 *)(iVar3 + 0xc3) = 3;
  *(undefined1 *)(iVar3 + 0xc0) = 4;
  *(undefined4 *)(iVar3 + 0xb8) = 0x28000;
  if ((*(byte *)(param_1 + 0x24) & 0x10) == 0) {
    *(undefined1 *)(iVar3 + 0xc0) = 5;
  }
  if (*(int *)(param_1 + 0x54) != -1) {
    FUN_00434a00(iVar3,iVar3 + 0xdc,*(int *)(param_1 + 0x54));
    FUN_00457df0(param_3,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_2 + 0x1c));
  }
  if (*(int *)(param_2 + 0x188) != 0x26) {
    FUN_00433910(iVar3,*(int *)(param_2 + 0x188));
  }
  FUN_0045cbf0(iVar3,*(int *)(iVar3 + 100) + 0x14);
  return 1;
}

