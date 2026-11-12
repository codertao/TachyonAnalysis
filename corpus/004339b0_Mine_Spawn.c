
/* sweep */

undefined4 Mine_Spawn(SpED *param_1,Desc *param_2,int param_3,int *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  SpED *ent;
  uint uVar5;
  
  uVar3 = Sped_GetDefList(param_1,param_3);
  iVar4 = Sped_AliasCanSpawn(uVar3,param_1->preRender);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x2c != 0) {
    return 0;
  }
  iVar4 = Team_IsHostileToPlayer(param_2[2].hudHook);
  if (iVar4 != 0) {
    *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
    *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
  }
  ent = (SpED *)DcbPool_Alloc(&g_PoolAI,0x10,param_3);
  if (ent == (SpED *)0x0) {
    return 0;
  }
  Quad_LinkDynamic(ent);
  ent->desc = param_2;
  *(undefined4 *)&ent->field_0xd0 = 0x40;
  *(void **)&ent->field_0x58 = param_2[2].clientMessage;
  ent->field_0x7e = *(undefined1 *)&param_2[2].construct;
  *(undefined4 *)&ent->field_0x18 = 0;
  ent->scale = 0x10000;
  ent->onDamage = &LAB_004336f0;
  ent->think = Mine_ProximityThink;
  *(SpED **)&param_1->field_0x28 = ent;
  *(undefined4 *)&param_1->field_0x2c = 1;
  ent[1].prev = param_1;
  iVar4 = Ent_IsHostileToPlayer(ent);
  if (iVar4 != 0) {
    *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
    *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
  }
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
  cVar1 = (char)(param_1->pos).y;
  if (cVar1 == '\0') {
    ent->team = *(byte *)&param_2[2].hudHook;
  }
  else {
    ent->team = cVar1 - 1;
  }
  *(void **)&ent->field_0xbc = param_2[1].clientCollideVeto;
  uVar5 = global_bad_shift_rng();
  ent[1].pos.y = uVar5 & 0xff;
  uVar2 = Sped_IsFlag40(param_1);
  ent[1].field_0x22 = uVar2;
  ent->netFlags = 3;
  ent->stateFlags = 4;
  *(undefined4 *)&ent->field_0xb8 = 0x28000;
  if ((param_1->field_0x24 & 0x10) == 0) {
    ent->stateFlags = 5;
  }
  iVar4 = (param_1->ang).z;
  if (iVar4 != -1) {
    Sped_InitGroupSlot(ent,&ent[1].next,iVar4);
    Quad_GroupSlotAddMember(param_3,(param_1->ang).z,param_2->field_1c);
  }
  if (*(int *)&param_2[2].field_0x80 != 0x26) {
    Mine_InitWeapon(ent,*(int *)&param_2[2].field_0x80);
  }
  SectorMap_LinkStatic(ent,&ent->quadrant->staticSectorMap);
  return 1;
}

