
/* AI ship +0x80 damage handler */

void AiShip_OnDamage(SpED *param_1)

{
  int *piVar1;
  Desc *pDVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((0 < (int)param_1[1].preRender) &&
     (iVar3 = AiShip_CanBeDamagedBy(param_1,DAT_005653f4), iVar3 != 0)) {
    piVar1 = &param_1[1].pos.y;
    uVar4 = Shield_ApplyDamage(DAT_005653e0,DAT_005653e4,DAT_005653e8,DAT_005653ec,piVar1,
                               &param_1->desc[1].getText);
    if ((int)param_1[1].preRender < 1) {
      Mission_PostAttackedByPlayer(param_1[1].prev,&param_1[1].next,DAT_005653f4,param_1->quadrant);
      Sped_Destroy(param_1);
      return;
    }
    pDVar2 = param_1->desc;
    Mission_PostObjDamage
              (*(undefined4 *)&(param_1[1].prev)->field_0x20,param_1[1].preRender,
               pDVar2[1].clientCollideVeto,param_1->quadrant);
    uVar5 = Shield_GetMax(piVar1,&pDVar2[1].getText,param_1->quadrant);
    Mission_PostObjDamage2
              (*(undefined4 *)&(param_1[1].prev)->field_0x20,*(undefined4 *)&param_1[1].field_0x40,
               uVar5);
    DAT_005653fc = ShieldFx_PickVariant(param_1->desc[10].field_1c == 2,DAT_005653e4);
    Weapon_PlayImpact(DAT_005653dc,0,uVar4,0,1);
    iVar3 = Ai_ShouldEvadeHit(param_1,DAT_005653f4);
    if (iVar3 != 0) {
      Ai_BreakOff(param_1,2);
    }
    if (DAT_005653f4 != 0) {
      if (*(int *)&param_1[3].field_0xb8 == DAT_005653f4) {
        param_1[3].qPrev2 = (SpED *)((int)&(param_1[3].qPrev2)->pool + 1);
      }
      else {
        param_1[3].qPrev2 = (SpED *)0x0;
      }
      iVar3 = DAT_005653f4;
      *(int *)&param_1[3].field_0xb8 = DAT_005653f4;
      if (0xf < (int)param_1[3].qPrev2) {
        Ai_CallForHelp(param_1,iVar3);
      }
      Mission_PostAttackedByPlayer(param_1[1].prev,&param_1[1].next,DAT_005653f4,param_1->quadrant);
      if (*(int *)&(param_1[1].prev)->field_0x44 != -1) {
        handle_hit_for_voiceline(param_1,DAT_005653f4);
      }
    }
    if (*(int *)&param_1[1].field_0x60 == 0) {
      Dcb_InitAiShip(param_1);
    }
  }
  return;
}

