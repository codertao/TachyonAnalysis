
/* root part -> Dcb_InitMultiPart; attached -> CapShip_InitChildPart; TYPE 2/3 -> Dcb_InitTurret */

int CapShip_SpawnPart(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5,
                     undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = DcbPool_Alloc(&DAT_0058af9c,0xd,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0041b850(iVar1);
  *(int *)(iVar1 + 0x8c) = param_4;
  *(undefined4 *)(iVar1 + 0xd0) = 4;
  param_2[0x1f] = iVar1;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 **)(iVar1 + 0xe4) = param_2;
  *(undefined4 *)(iVar1 + 0x58) = *param_2;
  *(undefined1 *)(iVar1 + 0x7e) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(iVar1 + 0x18) = 0x10;
  *(undefined4 *)(iVar1 + 0x1c) = param_2[3];
  local_c = *(int *)(param_1 + 0x14) << 0x10;
  local_8 = *(int *)(param_1 + 0x18) << 0x10;
  local_4 = *(int *)(param_1 + 0x1c) << 0x10;
  FUN_00409e80(iVar1,param_2,param_1 + 8,&local_c);
  if (param_2[7] == 0) {
    Dcb_InitMultiPart(iVar1,param_1,param_3);
  }
  else {
    CapShip_InitChildPart(iVar1,param_1,param_6);
  }
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(param_4 + 0xd0) = 40000;
  *(undefined4 *)(param_4 + 0xd4) = 40000;
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined1 *)(iVar1 + 0xc2) = *(undefined1 *)(param_4 + 0x158);
  }
  else {
    *(char *)(iVar1 + 0xc2) = *(char *)(param_1 + 0x38) + -1;
  }
  if ((*(byte *)(param_2 + 0xd) & 6) == 0) {
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xec) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(iVar1 + 0xf0) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(iVar1 + 0x11c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x120) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(iVar1 + 0x124) = *(undefined4 *)(iVar1 + 0x54);
    FUN_0045cbd0(iVar1,*(int *)(iVar1 + 100) + 0x14);
    Dcb_SetRangeFlags(iVar1 + 0x144,*(int *)(iVar1 + 0x8c) + 0xd0,iVar1);
    if (param_2[7] != 0) {
      FUN_004560a0(iVar1 + 0x144,*(int *)(iVar1 + 0x8c) + 0xd0,1,0,1);
    }
  }
  else {
    Dcb_InitTurret(iVar1,*(undefined4 *)(param_4 + 0x170));
  }
  uVar2 = FUN_00412200(param_2[0xd]);
  *(undefined4 *)(iVar1 + 0x6c) = uVar2;
  if (((param_2[0xd] & 0x20) == 0) && ((param_2[0xd] & 0x118) == 0)) {
    FUN_0048b090(iVar1,8,7);
  }
  if (param_5 != 0) {
    *(int *)(param_5 + 0xe0) = iVar1;
  }
  return iVar1;
}

