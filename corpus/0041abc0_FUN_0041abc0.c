
int FUN_0041abc0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DcbPool_Alloc(&DAT_0058b03c,0x18,DAT_005b29cc);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0041b850(iVar2);
  *(undefined4 *)(iVar2 + 0x34) = *param_1;
  *(undefined4 *)(iVar2 + 0x38) = param_1[1];
  *(undefined4 *)(iVar2 + 0x3c) = param_1[2];
  *(undefined4 *)(iVar2 + 0x4c) = *param_2;
  *(undefined4 *)(iVar2 + 0x50) = param_2[1];
  *(undefined4 *)(iVar2 + 0x54) = param_2[2];
  *(undefined4 *)(iVar2 + 0x1c) = 0x10000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x10000;
  *(undefined1 **)(iVar2 + 0x68) = &LAB_0041a710;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0x10;
  *(undefined4 *)(iVar2 + 0x28) = 0x18;
  iVar1 = DAT_005b29c8;
  *(int *)(iVar2 + 0xd8) = param_6;
  *(int *)(iVar2 + 0x8c) = iVar1;
  *(undefined1 *)(iVar2 + 0xc3) = 3;
  *(undefined1 *)(iVar2 + 0xc0) = 4;
  *(undefined4 *)(iVar2 + 0xd4) = 1;
  if (param_6 == 0) {
    uVar3 = *(undefined4 *)(DAT_005b29c8 + 0xa4);
    *(undefined4 *)(iVar2 + 0xdc) = uVar3;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(DAT_005b29c8 + 0xa4);
    *(undefined1 *)(iVar2 + 0x7e) = *(undefined1 *)(DAT_005b29c8 + 0xa8);
  }
  else if (param_6 == 1) {
    uVar3 = *(undefined4 *)(DAT_005b29c8 + 0xd0);
    *(undefined4 *)(iVar2 + 0xdc) = uVar3;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(DAT_005b29c8 + 0xd0);
    *(undefined1 *)(iVar2 + 0x7e) = *(undefined1 *)(DAT_005b29c8 + 0xd4);
  }
  else if (param_6 == 2) {
    uVar3 = *(undefined4 *)(DAT_005b29c8 + 0xa4);
    *(undefined4 *)(iVar2 + 0xdc) = uVar3;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(DAT_005b29c8 + 0xa4);
    *(undefined1 *)(iVar2 + 0x7e) = *(undefined1 *)(DAT_005b29c8 + 0xa8);
    uVar3 = FUN_0041aa30(iVar2);
    *(undefined4 *)(iVar2 + 0xf4) = uVar3;
  }
  FUN_0045cbf0(iVar2,*(int *)(iVar2 + 100) + 0x14);
  FUN_0041a830(param_1,param_2,param_3,param_4,param_5);
  return iVar2;
}

