
/* server player DCB think: ease to client pose, every 16 frames Power_Regen(shields, forced) with
   client-sent rate, sapper drain, hazard damage */

void TachSrv_PlayerThink(SpED *param_1)

{
  int iVar1;
  int iVar2;
  SpED *pSVar3;
  int iVar4;
  SpED *pSVar5;
  SpED *pSVar6;
  void *pvVar7;
  void *pvVar8;
  Desc *pDVar9;
  
  pvVar7 = param_1[1].next[2].preRender;
  if (pvVar7 != (void *)0x0) {
    param_1[1].next[2].preRender = (void *)((int)pvVar7 + -1);
  }
  iVar1 = (param_1->vel).x;
  pvVar7 = (void *)((int)param_1[1].onCollide + (param_1->vel).y);
  param_1[1].onCollide = pvVar7;
  iVar2 = (param_1->vel).z;
  pvVar8 = (void *)((int)param_1[1].aux + iVar1);
  param_1[1].aux = pvVar8;
  pDVar9 = (Desc *)((int)&(param_1[1].desc)->descType + iVar2);
  param_1[1].desc = pDVar9;
  iVar1 = (param_1->pos).x;
  (param_1->pos).x = ((int)pvVar8 - iVar1 >> 4) + iVar1;
  iVar1 = (param_1->pos).y;
  iVar2 = (param_1->pos).z;
  (param_1->pos).y = ((int)pvVar7 - iVar1 >> 4) + iVar1;
  pSVar3 = param_1[1].target;
  iVar1 = (param_1->ang).x;
  iVar4 = (param_1->ang).y;
  (param_1->pos).z = ((int)pDVar9 - iVar2 >> 4) + iVar2;
  pSVar5 = param_1[1].qNext2;
  (param_1->ang).x = (((int)pSVar3 - iVar1) * 0x80 >> 10) + iVar1 & 0x1ffffff;
  pSVar3 = param_1[1].qPrev2;
  iVar1 = (param_1->ang).z;
  pSVar6 = param_1->target;
  (param_1->ang).y = (((int)pSVar5 - iVar4) * 0x80 >> 10) + iVar4 & 0x1ffffff;
  (param_1->ang).z = (((int)pSVar3 - iVar1) * 0x80 >> 10) + iVar1 & 0x1ffffff;
  if ((pSVar6 != (SpED *)0x0) && (pSVar6->poolType == 1)) {
    Ship_GetCloakFlags(pSVar6);
  }
  if (((param_1[1].pos.y ^ DAT_005897e4) & 0xf) == 0) {
    Power_Regen(&param_1[1].field_0x48,&param_1->desc[1].getText,0x12,
                *(undefined4 *)&param_1[1].field_0x28);
    if (param_1[1].netId != 0) {
      Power_SapperDrain(&param_1[1].field_0x48,param_1[1].netId,2);
    }
  }
  Srv_MineBurnOffTick(param_1);
  Dcb_SetRangeFlags((PowerBlock *)&param_1[1].field_0x48,&param_1->desc[1].getText,param_1);
  if (param_1->target != (SpED *)0x0) {
    Srv_PlayerProximityTick(param_1,param_1->target);
  }
  Sector_RadiationTick(param_1);
  if (param_1[1].pos.z != 0) {
    Srv_CallAttachedReader(param_1);
  }
  return;
}

