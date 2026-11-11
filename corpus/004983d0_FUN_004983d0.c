
SpED * FUN_004983d0(SpED *param_1,undefined4 *param_2,int *param_3,int param_4,undefined4 param_5,
                   int param_6)

{
  SpED *ent;
  Pool *pPVar1;
  undefined4 uVar2;
  
  if (param_6 == 0) {
    uVar2 = *(undefined4 *)(param_4 + 100);
    pPVar1 = &g_PoolCommon;
  }
  else {
    uVar2 = *(undefined4 *)(param_4 + 100);
    pPVar1 = (Pool *)&DAT_005b32b0;
  }
  ent = (SpED *)DcbPool_Alloc(pPVar1,3,uVar2);
  if (ent == (SpED *)0x0) {
    return (SpED *)0x0;
  }
  ent[1].next = param_1;
  *(undefined4 *)&ent[1].field_0x28 = *param_2;
  *(undefined4 *)&ent[1].field_0x2c = param_2[1];
  *(undefined4 *)&ent[1].field_0x30 = param_2[2];
  ent[1].pos.x = *param_3;
  ent[1].pos.y = param_3[1];
  ent[1].pos.z = param_3[2];
  *(int *)&ent[1].field_0x20 = param_4;
  *(undefined4 *)&ent[1].field_0x40 = param_5;
  *(undefined4 *)&ent->field_0xc8 = DAT_00565420;
  ent[1].pool = *(Pool **)&param_1[1].field_0x24;
  *(undefined4 *)&ent->field_0x58 = **(undefined4 **)&param_1->field_0x74;
  ent->field_0x7e = *(undefined1 *)(*(int *)&param_1->field_0x74 + 4);
  if (param_6 == 1) {
    ent->think = &Sapper_ThinkPredicted;
    ent->render = param_1->qNext2;
    Model_SelectState(&ent->field_0x18,0);
    Quad_LinkDynamic(ent);
    return ent;
  }
  ent->netFlags = 1;
  ent->think = Sapper_ThinkServer;
  Quad_LinkDynamic(ent);
  return ent;
}

