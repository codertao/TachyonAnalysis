
void FUN_0042e680(void)

{
  SpED *ent;
  
  ent = (SpED *)DcbPool_Alloc(&DAT_005b32b0,0xe,&DAT_005b31c0);
  if (ent != (SpED *)0x0) {
    FUN_0042e5c0(ent);
    (ent->ang).x = 0;
    (ent->ang).y = 0;
    (ent->ang).z = 0;
    ent->think = &LAB_0042e650;
    ent->postThink = (void *)0x0;
    *(undefined4 *)&ent->field_0x58 = DAT_005b0098;
    *(undefined4 *)&ent->field_0x18 = 0x10;
    ent->render = FUN_00496a90;
    Quad_LinkDynamic(ent);
  }
  return;
}

