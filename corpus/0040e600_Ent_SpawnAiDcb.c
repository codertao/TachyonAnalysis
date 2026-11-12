
/* spawn AI DCB from Server AI pool (0x58af9c): +0x68=0x40a570, +0x80=no-op */

undefined4 Ent_SpawnAiDcb(SpED *param_1,Desc *param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  SpED *ent;
  
  uVar2 = Sped_GetDefList(param_1,param_3);
  iVar3 = Sped_AliasCanSpawn(uVar2,param_1->preRender);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x2c != 0) {
    return 0;
  }
  ent = (SpED *)DcbPool_Alloc(&g_PoolAI,0x16,param_3);
  if (ent == (SpED *)0x0) {
    return 0;
  }
  Quad_LinkDynamic(ent);
  ent->desc = param_2;
  *(undefined4 *)&ent->field_0xd0 = 0x100;
  *(void **)&ent->field_0x58 = param_2[1].clientInit;
  ent->field_0x7e = *(undefined1 *)&param_2[1].m24;
  *(undefined4 *)&ent->field_0x18 = 0;
  ent->scale = 0x10000;
  ent->onDamage = Nop;
  ent->think = &LAB_0040a570;
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
  ent->netFlags = 3;
  ent->stateFlags = 4;
  *(undefined4 *)&ent->field_0xb8 = 0x28000;
  if ((param_1->field_0x24 & 0x10) == 0) {
    ent[1].pos.y = 1;
    ent->stateFlags = 5;
  }
  bVar1 = Sped_GetCollFlags(param_1);
  ent->stateFlags = ent->stateFlags | bVar1;
  SectorMap_LinkStatic(ent,&ent->quadrant->staticSectorMap);
  return 1;
}

