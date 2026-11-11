
undefined4 FUN_00413ad0(SpED *param_1,Desc *param_2,undefined4 param_3,int *param_4,int param_5)

{
  SpED *pSVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  SpED *ent;
  
  pSVar1 = param_1;
  uVar4 = Sped_GetDefList(param_1,param_3);
  iVar5 = Sped_AliasCanSpawn(uVar4,param_1->preRender);
  if (iVar5 == 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x2c != 0) {
    return 0;
  }
  ent = (SpED *)DcbPool_Alloc(&g_PoolAI,0x14,param_3);
  if (ent == (SpED *)0x0) {
    return 0;
  }
  Quad_LinkDynamic(ent);
  ent->desc = param_2;
  *(undefined4 *)&ent->field_0xd0 = 0x80;
  *(void **)&ent->field_0x58 = param_2[2].clientMessage;
  ent->field_0x7e = *(undefined1 *)&param_2[2].construct;
  *(undefined4 *)&ent->field_0x18 = 0;
  ent->scale = 0x10000;
  ent->onDamage = &LAB_00413cf0;
  ent->think = &LAB_00413a20;
  *(SpED **)&param_1->field_0x28 = ent;
  *(undefined4 *)&param_1->field_0x2c = 1;
  ent[1].prev = param_1;
  if (param_4 == (int *)0x0) {
    (ent->pos).x = (int)param_1->next;
    (ent->pos).y = (int)param_1->pendingNext;
    (ent->pos).z = param_1->poolSerial;
    (ent->ang).x = *(int *)&param_1->linked << 0x10;
    (ent->ang).y = *(int *)&param_1->field_0x18 << 0x10;
    (ent->ang).z = param_1->scale << 0x10;
  }
  else {
    (ent->pos).x = *param_4;
    (ent->pos).y = param_4[1];
    (ent->pos).z = param_4[2];
    (ent->ang).x = param_4[3];
    (ent->ang).y = param_4[4];
    (ent->ang).z = param_4[5];
  }
  param_1 = (SpED *)&ent->pos;
  *(void **)&ent->field_0xbc = param_2[1].clientCollideVeto;
  uVar2 = FUN_00434530(pSVar1);
  ent[1].field_0x22 = uVar2;
  ent->netFlags = 0;
  ent->stateFlags = 5;
  *(undefined4 *)&ent->field_0xb8 = 0x28000;
  bVar3 = FUN_004344f0(pSVar1);
  ent->stateFlags = ent->stateFlags | bVar3;
  iVar5 = (pSVar1->ang).z;
  if (iVar5 != -1) {
    FUN_00434a00(ent,&ent[1].next,iVar5);
    FUN_00457df0(param_3,(pSVar1->ang).z,param_2->field_1c);
  }
  FUN_0045cff0(ent,&ent->quadrant->staticSectorMap);
  uVar4 = FUN_00434850(ent);
  Nav_InitRoute(ent,pSVar1,&ent[1].next,param_3,&pSVar1->field_0x48,uVar4);
  if (param_5 != 0) {
    SrvSend_EntityDestroyed(param_1,9,0,0,0,0,9,ent->quadrant);
  }
  return 1;
}

