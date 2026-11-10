
/* placement +0x38 respawn seconds (x50, MP-scaled for type 10), +0x3c position jitter */

undefined4 Powerup_Spawn(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_2 + 0xb0) != 10) && (DAT_00590d6c == 0)) {
    return 0;
  }
  iVar1 = DcbPool_Alloc(&DAT_0058afec,0x19,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0041b850(iVar1);
  *(int *)(iVar1 + 0x8c) = param_2;
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined1 *)(iVar1 + 0x7e) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0x10000;
  *(int *)(iVar1 + 0xd8) = param_1;
  if (param_4 == (undefined4 *)0x0) {
    Powerup_PickPosition(iVar1);
    *(int *)(iVar1 + 0x4c) = *(int *)(param_1 + 0x14) << 0x10;
    *(int *)(iVar1 + 0x50) = *(int *)(param_1 + 0x18) << 0x10;
    *(int *)(iVar1 + 0x54) = *(int *)(param_1 + 0x1c) << 0x10;
  }
  else {
    *(undefined4 *)(iVar1 + 0x34) = *param_4;
    *(undefined4 *)(iVar1 + 0x38) = param_4[1];
    *(undefined4 *)(iVar1 + 0x3c) = param_4[2];
    *(undefined4 *)(iVar1 + 0x4c) = param_4[3];
    *(undefined4 *)(iVar1 + 0x50) = param_4[4];
    *(undefined4 *)(iVar1 + 0x54) = param_4[5];
  }
  *(undefined1 *)(iVar1 + 0xc3) = 3;
  *(undefined1 *)(iVar1 + 0xc0) = 4;
  *(undefined4 *)(iVar1 + 0xb8) = 0x28000;
  uVar2 = FUN_00456650(*(int *)(param_1 + 0x38) * 0x32,*(undefined4 *)(param_2 + 0xb0));
  *(undefined4 *)(iVar1 + 0xe0) = uVar2;
  FUN_0045cbf0(iVar1,*(int *)(iVar1 + 100) + 0x14);
  return 1;
}

