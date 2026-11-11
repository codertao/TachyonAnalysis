
/* root part -> Dcb_InitMultiPart; attached -> CapShip_InitChildPart; TYPE 2/3 -> Dcb_InitTurret */

SpED * CapShip_SpawnPart(int param_1,undefined4 *param_2,undefined4 param_3,Desc *param_4,
                        int param_5,undefined4 param_6)

{
  int iVar1;
  SpED *ent;
  void *pvVar2;
  int local_c;
  int local_8;
  int local_4;
  
  ent = (SpED *)DcbPool_Alloc(&g_PoolAI,0xd,param_3);
  if (ent == (SpED *)0x0) {
    return (SpED *)0x0;
  }
  Quad_LinkDynamic(ent);
  ent->desc = param_4;
  *(undefined4 *)&ent->field_0xd0 = 4;
  param_2[0x1f] = ent;
  ent->render = (void *)0x0;
  ent->preRender = (void *)0x0;
  ent[1].poolSerial = (int)param_2;
  *(undefined4 *)&ent->field_0x58 = *param_2;
  ent->field_0x7e = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)&ent->field_0x18 = 0x10;
  ent->scale = param_2[3];
  local_c = *(int *)(param_1 + 0x14) << 0x10;
  local_8 = *(int *)(param_1 + 0x18) << 0x10;
  local_4 = *(int *)(param_1 + 0x1c) << 0x10;
  FUN_00409e80(ent,param_2,param_1 + 8,&local_c);
  if (param_2[7] == 0) {
    Dcb_InitMultiPart(ent,param_1,param_3);
  }
  else {
    CapShip_InitChildPart(ent,param_1,param_6);
  }
  ent->target = (SpED *)0x0;
  param_4[1].getText = (void *)0x9c40;
  param_4[1].getName = (void *)0x9c40;
  if (*(char *)(param_1 + 0x38) == '\0') {
    ent->team = *(byte *)&param_4[2].getName;
  }
  else {
    ent->team = *(char *)(param_1 + 0x38) - 1;
  }
  if ((*(byte *)(param_2 + 0xd) & 6) == 0) {
    *(undefined4 *)&ent->field_0xb8 = 0;
    *(int *)&ent[1].field_0x18 = (ent->ang).x;
    iVar1 = (ent->ang).z;
    ent[1].scale = (ent->ang).y;
    *(int *)&ent[1].field_0x20 = iVar1;
    *(int *)&ent[1].field_0x48 = (ent->ang).x;
    iVar1 = (ent->ang).z;
    ent[1].ang.x = (ent->ang).y;
    ent[1].ang.y = iVar1;
    FUN_0045cbd0(ent,&ent->quadrant->staticSectorMap);
    Dcb_SetRangeFlags((PowerBlock *)&ent[1].render,&ent->desc[1].getText,ent);
    if (param_2[7] != 0) {
      Power_Init(&ent[1].render,&ent->desc[1].getText,1,0,1);
    }
  }
  else {
    Dcb_InitTurret(ent,param_4[2].targetFilter);
  }
  pvVar2 = (void *)FUN_00412200(param_2[0xd]);
  ent->postThink = pvVar2;
  if (((param_2[0xd] & 0x20) == 0) && ((param_2[0xd] & 0x118) == 0)) {
    Ent_SetEngageLimits(ent,8,7);
  }
  if (param_5 != 0) {
    *(SpED **)(param_5 + 0xe0) = ent;
  }
  return ent;
}

