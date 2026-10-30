
int FUN_0040a620(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5,
                int param_6,undefined4 param_7)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = param_1;
  if (*(byte *)(param_1 + 0x38) == 0) {
    param_1 = *(int *)(param_4 + 0x120);
  }
  else {
    param_1 = *(byte *)(param_1 + 0x38) - 1;
  }
  if ((*(code **)(DAT_005b1dc4 + 0x68) != (code *)0x0) && (param_6 != 0)) {
    iVar3 = (**(code **)(DAT_005b1dc4 + 0x68))(param_2,param_1);
    if (iVar3 == 0) {
      param_2[0x1f] = 0;
      FUN_0040a0b0(param_5,param_2[0x11]);
      return 0;
    }
  }
  if ((*(byte *)(param_2 + 0xd) & 6) == 0) {
    puVar5 = &DAT_0058afec;
  }
  else {
    puVar5 = &DAT_0058af9c;
  }
  iVar3 = DcbPool_Alloc(puVar5,0xc,param_3);
  if (iVar3 == 0) {
    param_2[0x1f] = 0;
    return 0;
  }
  if (param_5 == 0) {
    FUN_0041b760(&DAT_0058af9c,*(undefined4 *)(iVar3 + 0x78),param_7);
  }
  else {
    uVar4 = FUN_0040a610(*(undefined4 *)(param_5 + 0x78),param_2[0x11]);
    *(undefined4 *)(iVar3 + 0x78) = uVar4;
  }
  *(int *)(iVar3 + 0x8c) = param_4;
  *(int *)(iVar3 + 0xe8) = param_5;
  *(undefined4 **)(iVar3 + 0xdc) = param_2;
  *(undefined4 *)(iVar3 + 0xd0) = 4;
  param_2[0x1f] = iVar3;
  *(int *)(iVar3 + 0xd8) = iVar1;
  *(undefined4 *)(iVar3 + 0x70) = 0;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  *(undefined4 *)(iVar3 + 0x58) = *param_2;
  *(undefined1 *)(iVar3 + 0x7e) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(iVar3 + 0x18) = 0x10;
  *(undefined4 *)(iVar3 + 0x1c) = param_2[3];
  *(undefined1 *)(iVar3 + 0xc2) = (undefined1)param_1;
  iStack_c = *(int *)(iVar1 + 0x14) << 0x10;
  iStack_8 = *(int *)(iVar1 + 0x18) << 0x10;
  iStack_4 = *(int *)(iVar1 + 0x1c) << 0x10;
  FUN_00409e80(iVar3,param_2,iVar1 + 8,&iStack_c);
  *(undefined4 *)(iVar3 + 0x88) = 0;
  if (param_2[7] == 0) {
    *(undefined1 *)(iVar3 + 0xc0) = 4;
    *(undefined1 *)(iVar3 + 0xc3) = 3;
    *(int *)(iVar1 + 0x28) = iVar3;
    *(undefined2 *)(iVar3 + 0xfc) = 1;
    bVar2 = FUN_004344f0(iVar1);
    *(byte *)(iVar3 + 0xc0) = *(byte *)(iVar3 + 0xc0) | bVar2;
    FUN_0048e3d0(iVar3 + 0xec,**(int **)(param_4 + 0x94) << 2,4,s_BASE_REMOVED_PART_LIST_00532d88,
                 0xd530);
    *(undefined4 *)(iVar3 + 0xf8) = 0x118;
  }
  else {
    *(undefined1 *)(iVar3 + 0xc0) = 0;
    *(undefined1 *)(iVar3 + 0xc3) = 1;
  }
  if ((*(byte *)(param_2 + 0xd) & 6) == 0) {
    if (((*(uint *)(iVar1 + 0x24) & 0x200) == 0) || (param_2[7] != 0)) {
      FUN_0040a590(iVar3);
    }
    else {
      *(undefined1 **)(iVar3 + 0x68) = &LAB_0040a570;
      *(undefined1 **)(iVar3 + 0x80) = &LAB_00460f30;
      FUN_0041b850(iVar3);
      *(undefined4 *)(iVar3 + 0xb8) = 0;
    }
  }
  else {
    Dcb_InitMissile(iVar3,iVar1);
    FUN_0041b850(iVar3);
  }
  if ((*(byte *)(param_2 + 0xd) & 6) == 0) {
    FUN_0045cda0(iVar3,*(int *)(iVar3 + 100) + 0x14);
  }
  return iVar3;
}

