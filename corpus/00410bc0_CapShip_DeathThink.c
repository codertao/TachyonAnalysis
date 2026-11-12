
/* escalating secondary explosions; at 0 posts {OBJ, code 16} and removes */

void CapShip_DeathThink(SpED *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  Quadrant *pQVar6;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  Dcb_SetRangeFlags((PowerBlock *)&param_1[1].render,&param_1->desc[1].getText,param_1);
  uVar1 = *(int *)&param_1[1].field_0x58 - 1;
  *(uint *)&param_1[1].field_0x58 = uVar1;
  if (uVar1 == 0) {
    CapShip_RemoveAllParts(param_1);
    SrvSend_EntityDestroyed(&param_1->pos,4,2,0,0,0xffffffff,0,param_1->quadrant);
    uStack_14 = *(undefined4 *)&(param_1[1].prev)->field_0x20;
    uStack_18 = 1;
    uStack_10 = 0x10;
    uStack_c = 0;
    uStack_8 = 0xffffffff;
    uStack_4 = 0xffffffff;
    Mission_PostEvent(&uStack_18,param_1->quadrant);
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
  iVar2 = CapShip_GetRadius(param_1,param_1->desc,0);
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
      uVar4 = PartChain_PickRandom(param_1,auStack_24);
      CapShip_DeathBlastPos(uVar4);
      SrvSend_EntityDestroyed(auStack_24,4,uVar1,0,0,0xffffffff,0,param_1->quadrant);
    }
  }
  if (*(int *)&param_1[1].field_0x58 == 0x32) {
    if ((uVar1 & 0x20) == 0) {
      pQVar6 = param_1->quadrant;
      uVar4 = 0x10;
    }
    else {
      pQVar6 = param_1->quadrant;
      uVar4 = 0x30;
    }
    SrvSend_EntityDestroyed(&param_1->pos,4,uVar4,0,0,0xffffffff,0,pQVar6);
  }
  return;
}

