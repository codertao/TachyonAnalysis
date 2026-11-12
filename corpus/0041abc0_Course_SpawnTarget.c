
/* sweep */

SpED * Course_SpawnTarget(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                         undefined4 param_5,SpED *param_6)

{
  SpED *pSVar1;
  Desc *pDVar2;
  SpED *ent;
  undefined4 uVar3;
  
  ent = (SpED *)DcbPool_Alloc(&g_PoolCommon,0x18,DAT_005b29cc);
  if (ent == (SpED *)0x0) {
    return (SpED *)0x0;
  }
  Quad_LinkDynamic(ent);
  (ent->pos).x = *param_1;
  (ent->pos).y = param_1[1];
  (ent->pos).z = param_1[2];
  (ent->ang).x = *param_2;
  (ent->ang).y = param_2[1];
  (ent->ang).z = param_2[2];
  ent->scale = 0x10000;
  *(undefined4 *)&ent->field_0xb8 = 0x10000;
  ent->think = &LAB_0041a710;
  ent->postThink = (void *)0x0;
  ent->onCollide = (void *)0x0;
  *(undefined4 *)&ent->field_0x18 = 0x10;
  *(undefined4 *)&ent->field_0x28 = 0x18;
  pDVar2 = DAT_005b29c8;
  ent[1].prev = param_6;
  ent->desc = pDVar2;
  ent->netFlags = 3;
  ent->stateFlags = 4;
  ent[1].pool = (Pool *)0x1;
  if (param_6 == (SpED *)0x0) {
    pSVar1 = DAT_005b29c8[1].clientInit;
    ent[1].next = pSVar1;
    *(SpED **)&ent->field_0x58 = pSVar1;
    ent[1].pendingNext = DAT_005b29c8[1].clientInit;
    ent->field_0x7e = *(undefined1 *)&DAT_005b29c8[1].m24;
  }
  else if (param_6 == (SpED *)0x1) {
    pSVar1 = DAT_005b29c8[1].getText;
    ent[1].next = pSVar1;
    *(SpED **)&ent->field_0x58 = pSVar1;
    ent[1].pendingNext = DAT_005b29c8[1].getText;
    ent->field_0x7e = *(undefined1 *)&DAT_005b29c8[1].getName;
  }
  else if (param_6 == (SpED *)0x2) {
    pSVar1 = DAT_005b29c8[1].clientInit;
    ent[1].next = pSVar1;
    *(SpED **)&ent->field_0x58 = pSVar1;
    ent[1].pendingNext = DAT_005b29c8[1].clientInit;
    ent->field_0x7e = *(undefined1 *)&DAT_005b29c8[1].m24;
    uVar3 = TargetDrone_Spawn(ent);
    *(undefined4 *)&ent[1].field_0x20 = uVar3;
  }
  SectorMap_LinkStatic(ent,&ent->quadrant->staticSectorMap);
  Course_OffsetAlongDir(param_1,param_2,param_3,param_4,param_5);
  return ent;
}

