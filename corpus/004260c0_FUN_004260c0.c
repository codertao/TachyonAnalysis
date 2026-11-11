
void FUN_004260c0(Pool *param_1,Desc *param_2,undefined4 param_3,char *param_4,int param_5,
                 int param_6)

{
  char cVar1;
  SpED *ent;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  ent = (SpED *)DcbPool_Alloc(&DAT_005b32b0,10,&DAT_005b31c0);
  if (ent != (SpED *)0x0) {
    Quad_LinkDynamic(ent);
    ent->desc = param_2;
    *(undefined4 *)&ent->field_0xd0 = 0;
    ent->render = FUN_00425d60;
    ent->preRender = FUN_00425c10;
    *(SpED **)&ent->field_0x60 = ent;
    *(void **)&ent->field_0x58 = param_2[2].clientInit;
    ent->field_0x7e = (char)param_2[2].otherNameCount;
    (ent->pos).x = (int)param_1[1].killList;
    (ent->pos).y = param_1[1].count;
    (ent->pos).z = param_1[1].elemSize;
    (ent->ang).x = (int)param_1[2].freeHead;
    (ent->ang).y = *(int *)&param_1[2].field_0x8;
    (ent->ang).z = (int)param_1[2].pending;
    *(undefined4 *)&ent->field_0x2c = 0xff;
    ent->think = (void *)0x0;
    ent->postThink = (void *)0x0;
    ent->onCollide = (void *)0x0;
    *(undefined4 *)&ent->field_0x18 = 0x90;
    ent->scale = 0x10000;
    ent->onDamage = (void *)0x0;
    ent[1].pool = param_1;
    param_1[6].mem = ent;
    *(undefined4 *)&ent->field_0xb8 = 0;
    *(undefined4 *)&ent->field_0xbc = 0;
    FUN_0045cda0(ent,&DAT_005b31d4);
    ent[1].pos.z = param_5;
    uVar2 = 0xffffffff;
    *(undefined4 *)&ent[1].linked = param_3;
    ent[1].poolSerial = param_6;
    do {
      pcVar4 = param_4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4 = param_4 + 1;
      cVar1 = *param_4;
      param_4 = pcVar4;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar4 + -uVar2;
    pcVar5 = &ent[1].field_0x24;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_00425fe0(ent,param_2);
    Model_SelectState(&ent->field_0x18,0);
  }
  return;
}

