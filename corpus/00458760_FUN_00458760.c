
undefined4 FUN_00458760(SpED *param_1,Desc *param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  SpED *ent;
  
  uVar1 = Sped_GetDefList(param_1,param_3);
  iVar2 = Sped_AliasCanSpawn(uVar1,param_1->preRender);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x2c != 0) {
    return 0;
  }
  ent = (SpED *)DcbPool_Alloc(&g_PoolAI,0x15,param_3);
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
  ent->onDamage = FUN_00445720;
  ent->think = FUN_00445720;
  *(SpED **)&param_1->field_0x28 = ent;
  *(undefined4 *)&param_1->field_0x2c = 1;
  ent[1].next = param_1;
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
  FUN_0045cbf0(ent,&ent->quadrant->staticSectorMap);
  return 1;
}

