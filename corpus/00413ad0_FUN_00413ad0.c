
undefined4 FUN_00413ad0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = param_1;
  uVar4 = Sped_GetDefList(param_1,param_3);
  iVar5 = Sped_AliasCanSpawn(uVar4,*(undefined4 *)(param_1 + 0x5c));
  if (iVar5 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  iVar5 = DcbPool_Alloc(&DAT_0058af9c,0x14,param_3);
  if (iVar5 == 0) {
    return 0;
  }
  FUN_0041b850(iVar5);
  *(int *)(iVar5 + 0x8c) = param_2;
  *(undefined4 *)(iVar5 + 0xd0) = 0x80;
  *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(param_2 + 0x140);
  *(undefined1 *)(iVar5 + 0x7e) = *(undefined1 *)(param_2 + 0x144);
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0x10000;
  *(undefined1 **)(iVar5 + 0x80) = &LAB_00413cf0;
  *(undefined1 **)(iVar5 + 0x68) = &LAB_00413a20;
  *(int *)(param_1 + 0x28) = iVar5;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(int *)(iVar5 + 0xd8) = param_1;
  if (param_4 == (undefined4 *)0x0) {
    *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(param_1 + 0x10);
    *(int *)(iVar5 + 0x4c) = *(int *)(param_1 + 0x14) << 0x10;
    *(int *)(iVar5 + 0x50) = *(int *)(param_1 + 0x18) << 0x10;
    *(int *)(iVar5 + 0x54) = *(int *)(param_1 + 0x1c) << 0x10;
  }
  else {
    *(undefined4 *)(iVar5 + 0x34) = *param_4;
    *(undefined4 *)(iVar5 + 0x38) = param_4[1];
    *(undefined4 *)(iVar5 + 0x3c) = param_4[2];
    *(undefined4 *)(iVar5 + 0x4c) = param_4[3];
    *(undefined4 *)(iVar5 + 0x50) = param_4[4];
    *(undefined4 *)(iVar5 + 0x54) = param_4[5];
  }
  param_1 = iVar5 + 0x34;
  *(undefined4 *)(iVar5 + 0xbc) = *(undefined4 *)(param_2 + 0xf0);
  uVar2 = FUN_00434530(iVar1);
  *(undefined1 *)(iVar5 + 0xf6) = uVar2;
  *(undefined1 *)(iVar5 + 0xc3) = 0;
  *(undefined1 *)(iVar5 + 0xc0) = 5;
  *(undefined4 *)(iVar5 + 0xb8) = 0x28000;
  bVar3 = FUN_004344f0(iVar1);
  *(byte *)(iVar5 + 0xc0) = *(byte *)(iVar5 + 0xc0) | bVar3;
  if (*(int *)(iVar1 + 0x54) != -1) {
    FUN_00434a00(iVar5,iVar5 + 0xdc,*(int *)(iVar1 + 0x54));
    FUN_00457df0(param_3,*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(param_2 + 0x1c));
  }
  FUN_0045cff0(iVar5,*(int *)(iVar5 + 100) + 0x14);
  uVar4 = FUN_00434850(iVar5);
  Nav_InitRoute(iVar5,iVar1,iVar5 + 0xdc,param_3,iVar1 + 0x48,uVar4);
  if (param_5 != 0) {
    SrvSend_EntityDestroyed(param_1,9,0,0,0,0,9,*(undefined4 *)(iVar5 + 100));
  }
  return 1;
}

