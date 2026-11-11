
/* +0x68 for SPED ships: run +0x304 AI think, Dcb_Think_Ship, fire if +0x326, shields, range flags
    */

void Dcb_Think_AiFighter(SpED *param_1)

{
  int *pw;
  Desc *pDVar1;
  code *pcVar2;
  SpED *pSVar3;
  Desc *pDVar4;
  undefined4 uVar5;
  
  pDVar1 = param_1->desc;
  if (param_1 == g_Wingman) {
    if (DAT_0058f1c0 != 0) goto LAB_00403a0d;
    pcVar2 = param_1[3].onCollide;
  }
  else {
    if (*(short *)&param_1[4].pool != 0) goto LAB_00403a0d;
    pcVar2 = param_1[3].onCollide;
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1);
  }
  Dcb_Think_Ship(param_1);
LAB_00403a0d:
  if (((param_1[3].vel.y ^ DAT_005897e4) & 0x1f) == 0) {
    Dcb_UpdateEngineAudio(param_1,param_1[1].prev);
  }
  pSVar3 = param_1->target;
  if ((pSVar3 != (SpED *)0x0) && (pSVar3->poolType == 1)) {
    FUN_00460d70(pSVar3);
  }
  pDVar4 = param_1->desc;
  if ((*(char *)((int)&param_1[3].vel.z + 2) != '\0') &&
     ((*(int *)((int)(&param_1[1].think)[(int)param_1[3].qNext3 * 0xe] + 4) != 2 ||
      ((pSVar3 = param_1->target, pSVar3 != (SpED *)0x0 &&
       (pSVar3->engageCount < pSVar3->engageLimit)))))) {
    Weapon_TryFire(param_1,&param_1[1].think + (int)param_1[3].qNext3 * 0xe,&param_1[1].pos.y,
                   0x10000,pDVar1[10].construct);
  }
  if (((param_1[3].vel.y ^ DAT_005897e4) & 0xf) == 0) {
    uVar5 = 0x16;
    if ((param_1->throttle != 0xff) || (*(int *)&pDVar4[2].field_0x10 <= param_1[1].ang.y)) {
      uVar5 = 0x1e;
    }
    Power_Regen(&param_1[1].pos.y,&param_1->desc[1].getText,uVar5,1);
  }
  pw = &param_1[1].pos.y;
  Power_SapperDrain(pw,*(undefined4 *)&param_1[3].field_0xbc,0xe);
  Dcb_SetRangeFlags((PowerBlock *)pw,&param_1->desc[1].getText,param_1);
  if (((param_1[3].vel.y ^ DAT_005897e4) & 0x7f) == 0) {
    Ai_ManageShields(param_1);
  }
  if (((((param_1[3].vel.y ^ DAT_005897e4) & 0x3f) == 0) && (param_1->engageCount != 0)) &&
     (((uint)pDVar1[10].construct & 0x1000) != 0)) {
    FUN_00498810(param_1,&param_1[3].onDamage,&pDVar1[0xb].name,0);
  }
  if (((param_1[3].vel.y ^ DAT_005897e4) & 0x1f) == 0) {
    if ((*(int *)&param_1[3].field_0xbc != 0) && (((uint)pDVar1[10].construct & 0x10000) != 0)) {
      FUN_004277c0(param_1,1);
    }
    *(undefined4 *)&param_1[3].field_0xbc = 0;
  }
  return;
}

