
/* client debris chunk DCB (pool 0x5b32b0): damage 0x421dc0, +0x88 Debris_OnPlayerCollide */

int Debris_Spawn(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DcbPool_Alloc(&DAT_005b32b0,0x1a,&DAT_005b31c0);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0041b8b0(iVar2);
  *(undefined4 *)(iVar2 + 0x58) = param_2;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  *(code **)(iVar2 + 0x70) = FUN_00421230;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  piVar1 = (int *)(iVar2 + 0x34);
  *piVar1 = *param_1;
  *(int *)(iVar2 + 0x38) = param_1[1];
  *(int *)(iVar2 + 0x3c) = param_1[2];
  *(undefined4 *)(iVar2 + 0x1c) = param_5;
  *(undefined4 *)(iVar2 + 0x6c) = param_6;
  *(code **)(iVar2 + 0x68) = FUN_00421370;
  *(undefined4 *)(iVar2 + 0x18) = 0x10;
  *(undefined2 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0xd4) = param_7;
  *(int *)(iVar2 + 0xd8) = *param_3;
  *(int *)(iVar2 + 0xdc) = param_3[1];
  *(int *)(iVar2 + 0xe0) = param_3[2];
  *(code **)(iVar2 + 0x80) = FUN_00421dc0;
  *(undefined1 **)(iVar2 + 0x88) = &Debris_OnPlayerCollide;
  *(undefined4 *)(iVar2 + 0xbc) = param_4;
  uVar3 = global_bad_shift_rng();
  if ((uVar3 & 1) == 0) {
    uVar3 = global_bad_shift_rng();
    iVar4 = (uVar3 & 0x1fffff) - 0x100000;
    *(int *)(iVar2 + 0xe4) = iVar4;
    if (iVar4 < 0) {
      if (-0x80000 < iVar4) {
        *(undefined4 *)(iVar2 + 0xe4) = 0xfff80000;
      }
    }
    else if (iVar4 < 0x80000) {
      *(undefined4 *)(iVar2 + 0xe4) = 0x80000;
    }
    *(undefined4 *)(iVar2 + 0xe8) = 0;
  }
  else {
    uVar3 = global_bad_shift_rng();
    iVar4 = (uVar3 & 0x1fffff) - 0x100000;
    *(int *)(iVar2 + 0xe8) = iVar4;
    if (iVar4 < 0) {
      if (-0x80000 < iVar4) {
        *(undefined4 *)(iVar2 + 0xe8) = 0xfff80000;
        *(undefined4 *)(iVar2 + 0xe4) = 0;
        goto LAB_00422079;
      }
    }
    else if (iVar4 < 0x80000) {
      *(undefined4 *)(iVar2 + 0xe8) = 0x80000;
    }
    *(undefined4 *)(iVar2 + 0xe4) = 0;
  }
LAB_00422079:
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  uVar3 = global_bad_shift_rng();
  *(uint *)(iVar2 + 0x54) = uVar3 & 0x1ffffff;
  *(int *)(iVar2 + 0xf8) = *piVar1;
  *(undefined4 *)(iVar2 + 0xfc) = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(iVar2 + 0x100) = *(undefined4 *)(iVar2 + 0x3c);
  *(int *)(iVar2 + 0xf4) = DAT_00562b1c;
  DAT_00562b1c = DAT_00562b1c + 1;
  if (*(int *)(iVar2 + 0xbc) == 0) {
    *(undefined4 *)(iVar2 + 0x9c) = 0;
    *(undefined4 *)(iVar2 + 0x104) = 0;
  }
  else {
    FUN_0045d200(iVar2,&DAT_005b31d4);
    FUN_00421e40(iVar2);
  }
  if (0 < param_8) {
    *piVar1 = *piVar1 + *(int *)(iVar2 + 0xd8) * param_8;
    *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + *(int *)(iVar2 + 0xdc) * param_8;
    *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) + *(int *)(iVar2 + 0xe0) * param_8;
  }
  return iVar2;
}

