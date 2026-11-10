
/* spawn AI DCB from Server AI pool (0x58af9c): +0x68=0x40a570, +0x80=no-op */

undefined4 Ent_SpawnAiDcb(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = Sped_GetDefList(param_1,param_3);
  iVar3 = Sped_AliasCanSpawn(uVar2,*(undefined4 *)(param_1 + 0x5c));
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  iVar3 = DcbPool_Alloc(&DAT_0058af9c,0x16,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0041b850(iVar3);
  *(int *)(iVar3 + 0x8c) = param_2;
  *(undefined4 *)(iVar3 + 0xd0) = 0x100;
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined1 *)(iVar3 + 0x7e) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0x10000;
  *(code **)(iVar3 + 0x80) = FUN_00445720;
  *(undefined1 **)(iVar3 + 0x68) = &LAB_0040a570;
  *(int *)(param_1 + 0x28) = iVar3;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(int *)(iVar3 + 0xd8) = param_1;
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
  *(undefined1 *)(iVar3 + 0xc3) = 3;
  *(undefined1 *)(iVar3 + 0xc0) = 4;
  *(undefined4 *)(iVar3 + 0xb8) = 0x28000;
  if ((*(byte *)(param_1 + 0x24) & 0x10) == 0) {
    *(undefined4 *)(iVar3 + 0x10c) = 1;
    *(undefined1 *)(iVar3 + 0xc0) = 5;
  }
  bVar1 = FUN_004344f0(param_1);
  *(byte *)(iVar3 + 0xc0) = *(byte *)(iVar3 + 0xc0) | bVar1;
  FUN_0045cbf0(iVar3,*(int *)(iVar3 + 100) + 0x14);
  return 1;
}

