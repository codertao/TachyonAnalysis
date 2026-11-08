
/* escalating secondary explosions; at 0 posts {OBJ, code 16} and removes */

void CapShip_DeathThink(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  Dcb_SetRangeFlags(param_1 + 0x144,*(int *)(param_1 + 0x8c) + 0xd0,param_1);
  uVar1 = *(int *)(param_1 + 300) - 1;
  *(uint *)(param_1 + 300) = uVar1;
  if (uVar1 == 0) {
    FUN_00410a30(param_1);
    SrvSend_EntityDestroyed(param_1 + 0x34,4,2,0,0,0xffffffff,0,*(undefined4 *)(param_1 + 100));
    uStack_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
    uStack_18 = 1;
    uStack_10 = 0x10;
    uStack_c = 0;
    uStack_8 = 0xffffffff;
    uStack_4 = 0xffffffff;
    Mission_PostEvent(&uStack_18,*(undefined4 *)(param_1 + 100));
    return;
  }
  if (uVar1 < 0x32) {
    uVar1 = 8;
    uVar5 = 0;
  }
  else if (uVar1 < 0x96) {
    uVar1 = 8;
    uVar5 = 7;
  }
  else {
    if (uVar1 < 300) {
      uVar1 = 4;
    }
    else {
      if (uVar1 < 500) {
        uVar1 = 0;
        uVar5 = 3;
        goto LAB_00410cb1;
      }
      if (uVar1 < 0x4e2) {
        uVar1 = 0;
        uVar5 = 7;
        goto LAB_00410cb1;
      }
      uVar1 = 0;
    }
    uVar5 = 0xf;
  }
LAB_00410cb1:
  iVar2 = FUN_00412da0(param_1,*(undefined4 *)(param_1 + 0x8c),0);
  uVar3 = iVar2 >> 0xd;
  if (uVar3 < 0xfa1) {
    if (uVar3 < 0xbb9) {
      if (uVar3 < 0x7d1) {
        iVar2 = (1000 < uVar3) + 1;
      }
      else {
        iVar2 = 3;
        uVar1 = uVar1 | 0x20;
      }
    }
    else {
      iVar2 = 4;
      uVar1 = uVar1 | 0x20;
    }
  }
  else {
    iVar2 = 5;
    uVar1 = uVar1 | 0x20;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar3 = global_bad_shift_rng();
    if ((uVar5 & uVar3 >> 8) == 0) {
      uVar4 = FUN_00410b80(param_1,auStack_24);
      FUN_00410910(uVar4);
      SrvSend_EntityDestroyed(auStack_24,4,uVar1,0,0,0xffffffff,0,*(undefined4 *)(param_1 + 100));
    }
  }
  if (*(int *)(param_1 + 300) == 0x32) {
    if ((uVar1 & 0x20) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 100);
      uVar6 = 0x10;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 100);
      uVar6 = 0x30;
    }
    SrvSend_EntityDestroyed(param_1 + 0x34,4,uVar6,0,0,0xffffffff,0,uVar4);
  }
  return;
}

