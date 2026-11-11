
void FUN_00425fe0(Pool *param_1,Desc *param_2)

{
  SpED *ent;
  
  ent = (SpED *)DcbPool_Alloc(&DAT_005b32b0,10,&DAT_005b31c0);
  if (ent != (SpED *)0x0) {
    Quad_LinkDynamic(ent);
    ent->desc = param_2;
    *(undefined4 *)&ent->field_0xd0 = 0;
    ent->render = FUN_00425d10;
    ent->preRender = FUN_00425c70;
    *(SpED **)&ent->field_0x60 = ent;
    *(void **)&ent->field_0x58 = param_2[2].spawnAtLoad;
    *(undefined4 *)&ent->field_0x2c = 0xff;
    ent->field_0x7e = (char)param_2[2].otherNameCount;
    (ent->pos).x = (int)param_1[1].killList;
    (ent->pos).y = param_1[1].count;
    (ent->pos).z = param_1[1].elemSize;
    (ent->ang).x = (int)param_1[2].freeHead;
    (ent->ang).y = *(int *)&param_1[2].field_0x8;
    (ent->ang).z = (int)param_1[2].pending;
    ent->think = (void *)0x0;
    ent->postThink = (void *)0x0;
    ent->onCollide = (void *)0x0;
    *(undefined4 *)&ent->field_0x18 = 0x90;
    ent->scale = 0x10000;
    *(undefined4 *)&ent->field_0x2c = 0xff;
    ent->onDamage = (void *)0x0;
    ent[1].pool = param_1;
    param_1[6].mem = ent;
    Model_SelectState(&ent->field_0x18,0);
  }
  return;
}

