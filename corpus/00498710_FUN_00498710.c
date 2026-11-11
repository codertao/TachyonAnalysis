
void FUN_00498710(int *param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  SpED *ent;
  Pool *pPVar2;
  
  if (param_2 == 0) {
    pPVar2 = &g_PoolCommon;
  }
  else {
    param_3 = &DAT_005b31c0;
    pPVar2 = (Pool *)&DAT_005b32b0;
  }
  ent = (SpED *)DcbPool_Alloc(pPVar2,0x17,param_3);
  if (ent != (SpED *)0x0) {
    *(undefined2 *)&ent->field_0x74 = 2;
    *(undefined4 *)&ent->field_0x58 = DAT_005656b0;
    ent->render = FUN_00492d30;
    (ent->pos).x = *param_1;
    (ent->pos).y = param_1[1];
    (ent->pos).z = param_1[2];
    puVar1 = &ent->field_0x18;
    ent->think = FUN_004986c0;
    *(undefined4 *)puVar1 = 0;
    *(undefined2 *)&ent->field_0x30 = 0;
    ent->preRender = (void *)0x0;
    *(undefined4 *)&ent->field_0x2c = 0xff;
    ent->scale = 0x10000;
    *(undefined4 *)&ent->field_0xc8 = 0xfa;
    ent->engageCount = (undefined2)param_2;
    ent->engageLimit = param_2._2_2_;
    Quad_LinkDynamic(ent);
    if (param_2 == 0) {
      FUN_0045d060(ent,&ent->quadrant->staticSectorMap);
      Model_SelectState(puVar1,0);
      return;
    }
    FUN_00466770(1,1,0x1e,param_1,0x10000,0xff,0);
    Model_SelectState(puVar1,0);
  }
  return;
}

