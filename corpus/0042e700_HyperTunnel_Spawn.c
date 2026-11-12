
/* sweep */

SpED * HyperTunnel_Spawn(int param_1,undefined4 param_2)

{
  SpED *ent;
  
  ent = (SpED *)DcbPool_Alloc(&DAT_005b32b0,0xe,&DAT_005b31c0);
  if (ent == (SpED *)0x0) {
    return (SpED *)0x0;
  }
  (ent->pos).x = 0x6d600000;
  (ent->pos).y = 0x6d600000;
  (ent->pos).z = param_1;
  (ent->ang).x = 0;
  (ent->ang).y = 0;
  (ent->ang).z = 0;
  ent->think = &LAB_0042e6f0;
  ent->postThink = (void *)0x0;
  *(undefined4 *)&ent->field_0x58 = param_2;
  *(undefined4 *)&ent->field_0x18 = 0x10;
  ent->scale = 0x40000;
  ent->render = HyperFx_Render;
  Model_SelectState(&ent->field_0x18,0);
  Quad_LinkDynamic(ent);
  return ent;
}

