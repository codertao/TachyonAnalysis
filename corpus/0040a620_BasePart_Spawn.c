
/* sweep: "BASE REMOVED PART LIST" */

SpED * BasePart_Spawn(SpED *param_1,SpED *param_2,undefined4 param_3,Desc *param_4,int param_5,
                     int param_6,undefined4 param_7)

{
  SpED *pSVar1;
  byte bVar2;
  int iVar3;
  SpED *ent;
  uint uVar4;
  Pool *pPVar5;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pSVar1 = param_1;
  bVar2 = (byte)(param_1->pos).y;
  if (bVar2 == 0) {
    param_1 = (SpED *)param_4[2].otherNameCount;
  }
  else {
    param_1 = (SpED *)(bVar2 - 1);
  }
  if ((*(code **)(g_ActiveRules + 0x68) != (code *)0x0) && (param_6 != 0)) {
    iVar3 = (**(code **)(g_ActiveRules + 0x68))(param_2,param_1);
    if (iVar3 == 0) {
      *(undefined4 *)&param_2->snapStamp = 0;
      BaseRemovedList_Add(param_5,*(undefined4 *)&param_2->field_0x44);
      return (SpED *)0x0;
    }
  }
  if (((param_2->pos).x & 6) == 0) {
    pPVar5 = &g_PoolBase;
  }
  else {
    pPVar5 = &g_PoolAI;
  }
  ent = (SpED *)DcbPool_Alloc(pPVar5,0xc,param_3);
  if (ent == (SpED *)0x0) {
    *(undefined4 *)&param_2->snapStamp = 0;
    return (SpED *)0x0;
  }
  if (param_5 == 0) {
    NetId_Reserve(&g_PoolAI,ent->netId,param_7);
  }
  else {
    uVar4 = ShortArray_At(*(undefined4 *)(param_5 + 0x78),*(undefined4 *)&param_2->field_0x44);
    ent->netId = uVar4;
  }
  ent->desc = param_4;
  *(int *)&ent[1].linked = param_5;
  ent[1].next = param_2;
  *(undefined4 *)&ent->field_0xd0 = 4;
  *(SpED **)&param_2->snapStamp = ent;
  ent[1].prev = pSVar1;
  ent->render = (void *)0x0;
  ent->preRender = (void *)0x0;
  *(Pool **)&ent->field_0x58 = param_2->pool;
  ent->field_0x7e = *(undefined1 *)&param_2->prev;
  *(undefined4 *)&ent->field_0x18 = 0x10;
  ent->scale = (int)param_2->pendingNext;
  ent->team = (byte)param_1;
  iStack_c = *(int *)&pSVar1->linked << 0x10;
  iStack_8 = *(int *)&pSVar1->field_0x18 << 0x10;
  iStack_4 = pSVar1->scale << 0x10;
  Part_SetTransform(ent,param_2,&pSVar1->next,&iStack_c);
  ent->onCollide = (void *)0x0;
  if (param_2->scale == 0) {
    ent->stateFlags = 4;
    ent->netFlags = 3;
    *(SpED **)&pSVar1->field_0x28 = ent;
    *(undefined2 *)&ent[1].field_0x28 = 1;
    bVar2 = Sped_GetCollFlags(pSVar1);
    ent->stateFlags = ent->stateFlags | bVar2;
    Mem_AllocZeroTagged(&ent[1].field_0x18,**(int **)&param_4[1].field_0x10 << 2,4,
                        s_BASE_REMOVED_PART_LIST_00532d88,0xd530);
    *(undefined4 *)&ent[1].field_0x24 = 0x118;
  }
  else {
    ent->stateFlags = 0;
    ent->netFlags = 1;
  }
  if (((param_2->pos).x & 6) == 0) {
    if (((*(uint *)&pSVar1->field_0x24 & 0x200) == 0) || (param_2->scale != 0)) {
      BasePart_InitDamageable(ent);
    }
    else {
      ent->think = &LAB_0040a570;
      ent->onDamage = &LAB_00460f30;
      Quad_LinkDynamic(ent);
      *(undefined4 *)&ent->field_0xb8 = 0;
    }
  }
  else {
    Dcb_InitMissile(ent,pSVar1);
    Quad_LinkDynamic(ent);
  }
  if (((param_2->pos).x & 6) == 0) {
    SectorMap_LinkObject(ent,&ent->quadrant->staticSectorMap);
  }
  return ent;
}

