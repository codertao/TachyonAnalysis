
/* build live entity from a SPED def: pos+0x34 (def+8/c/10), ORIENTATION euler angles +0x4c
   (def+0x14/18/1c<<16, NOT velocity), vtable/update+0x68/+0x6c/+0x80, def+0x8c, world+0xd8 */

undefined4 Sped_ConstructEntity(SpED *param_1,Desc *param_2,int param_3,int *param_4)

{
  SpED **ppSVar1;
  int *piVar2;
  char cVar3;
  void *pvVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  SpED *ent;
  undefined4 uVar9;
  uint uVar10;
  
  uVar7 = Sped_GetDefList(param_1,param_3);
  iVar8 = Sped_AliasCanSpawn(uVar7,param_1->preRender);
  if (iVar8 == 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x2c != 0) {
    return 0;
  }
  if ((*(uint *)&param_1->field_0x24 & 0x1000) != 0) {
    return 0;
  }
  if (((*(uint *)&param_1->field_0x24 & 1) != 0) && (DAT_005b1f0c != (Desc *)0x0)) {
    param_2 = DAT_005b1f0c;
  }
  ent = (SpED *)DcbPool_Alloc(&g_PoolDrone,2,param_3);
  if (ent != (SpED *)0x0) {
    Quad_LinkDynamic(ent);
    ent->desc = param_2;
    ent[1].prev = param_1;
    *(void **)&ent->field_0xd0 = param_2[10].clientInit;
    *(SpED **)&param_1->field_0x28 = ent;
    *(undefined4 *)&param_1->field_0x2c = 1;
    if (param_1->think == (void *)0x0) {
      *(undefined **)&ent[3].stateFlags = &g_AiStatesDefault;
    }
    else {
      *(undefined **)&ent[3].stateFlags = &g_AiStatesWingman;
    }
    uVar5 = FUN_00434530(param_1);
    ent[1].field_0x22 = uVar5;
    uVar7 = Sped_GetDefList(param_1,param_3);
    cVar3 = (char)(param_1->pos).y;
    if (cVar3 == '\0') {
      bVar6 = (byte)param_2[10].field_1c;
    }
    else {
      bVar6 = cVar3 - 1;
    }
    ent->team = bVar6;
    bVar6 = *(byte *)((int)&(param_1->pos).y + 1);
    if (bVar6 == 0) {
      *(undefined2 *)&ent[3].qNext2 = *(undefined2 *)&param_2[10].onMessage;
    }
    else {
      *(ushort *)&ent[3].qNext2 = bVar6 - 1;
    }
    iVar8 = FUN_004344a0(ent);
    if (iVar8 != 0) {
      *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
      *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
    }
    *(undefined4 *)&ent->field_0x58 = *(undefined4 *)&ent->desc[4].field_0x80;
    ent->field_0x7e = (char)ent->desc[5].descType;
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
    ppSVar1 = &ent[1].next;
    *ppSVar1 = (SpED *)(ent->ang).x;
    iVar8 = (ent->ang).z;
    ent[1].pendingNext = (SpED *)(ent->ang).y;
    ent[1].poolSerial = iVar8;
    if ((GLBL_spacesav[0x2f] == 2) &&
       (*(short *)&ent[3].qNext2 = *(short *)&ent[3].qNext2 + 1, 3 < *(ushort *)&ent[3].qNext2)) {
      *(undefined2 *)&ent[3].qNext2 = 3;
    }
    ent->think = Dcb_Think_AiFighter;
    ent->postThink = Ai_CollisionLookahead;
    ent->onDamage = AiShip_OnDamage;
    if ((param_1->think == (void *)0x0) && ((param_1->field_0x24 & 0x10) == 0)) {
      Ai_ReturnToDefault(ent);
      FUN_00423e80(ent,(float)ent->desc[1].clientMessage * *(float *)&ent[1].field_0x58);
    }
    else {
      Ai_SetState(ent,0xb);
      ent->postThink = (void *)0x0;
    }
    ent[3].vel.y = DAT_005a5540;
    *(undefined2 *)((int)&ent[3].qNext2 + 2) = 0x300;
    ent->target = (SpED *)0x0;
    ent->throttle = 0x60;
    ent->netFlags = 0;
    ent->stateFlags = 5;
    *(undefined4 *)&ent->field_0xb8 = 0x28000;
    bVar6 = FUN_004344f0(param_1);
    ent->stateFlags = ent->stateFlags | bVar6;
    pvVar4 = ent->desc[5].radarColour;
    if (pvVar4 != (void *)0x0) {
      FUN_004935c0(&ent[1].think,&ent->desc[9].spawnAtLoad,pvVar4,0,0xd500,param_2[10].construct,1);
    }
    uVar9 = Systems_ToPowerUpgradeFlags(param_2[10].construct);
    piVar2 = &ent[1].pos.y;
    Power_Init(piVar2,&ent->desc[1].getText,1,uVar9,1);
    Sped_SyncAliasPower(uVar7,param_1->preRender,piVar2);
    FUN_0045cff0(ent,&ent->quadrant->staticSectorMap);
    Sped_BindLabel(ent,param_1);
    Nav_InitRoute(ent,param_1,ppSVar1,param_3,&param_1->field_0x48,uVar7);
    if (param_4 == (int *)0x0) {
      iVar8 = (param_1->ang).z;
      uVar10 = *(uint *)&param_1->field_0x24 & 0x20;
    }
    else {
      iVar8 = (param_1->ang).z;
      uVar10 = 1;
    }
    Sped_JoinGroup(ent,ppSVar1,iVar8,uVar10);
    FUN_00457df0(param_3,(param_1->ang).z,param_2->field_1c);
    if ((param_1->field_0x24 & 0x20) == 0) {
      Ent_SetEngageLimits(ent,3,2);
    }
    else {
      ent->stateFlags = ent->stateFlags & 0xfe;
    }
    if (((uint)param_2[10].construct & 0x1000) != 0) {
      FUN_004986a0(&ent[3].onDamage);
    }
    return 1;
  }
  return 0;
}

