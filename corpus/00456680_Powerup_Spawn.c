
/* placement +0x38 respawn seconds (x50, MP-scaled for type 10), +0x3c position jitter */

undefined4 Powerup_Spawn(SpED *param_1,Desc *param_2,undefined4 param_3,int *param_4)

{
  SpED *ent;
  SpED *pSVar1;
  
  if ((param_2[1].spawnAtLoad != (void *)0xa) && (DAT_00590d6c == 0)) {
    return 0;
  }
  ent = (SpED *)DcbPool_Alloc(&g_PoolBase,0x19,param_3);
  if (ent == (SpED *)0x0) {
    return 0;
  }
  Quad_LinkDynamic(ent);
  ent->desc = param_2;
  *(void **)&ent->field_0x58 = param_2[1].clientInit;
  ent->field_0x7e = *(undefined1 *)&param_2[1].m24;
  *(undefined4 *)&ent->field_0x18 = 0;
  ent->scale = 0x10000;
  ent[1].prev = param_1;
  if (param_4 == (int *)0x0) {
    Powerup_PickPosition(ent);
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
  pSVar1 = (SpED *)Powerup_IsAllowed((param_1->pos).y * 0x32,param_2[1].spawnAtLoad);
  ent[1].pendingNext = pSVar1;
  SectorMap_LinkStatic(ent,&ent->quadrant->staticSectorMap);
  return 1;
}

