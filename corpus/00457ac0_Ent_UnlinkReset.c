
/* sweep */

void Ent_UnlinkReset(SpED *param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)&param_1->field_0xc8 = 0;
  param_1->engageCount = 0;
  param_1->target = (SpED *)0x0;
  param_1[4].prev = (SpED *)0x0;
  iVar1 = Quad_UnlinkDynamicHead(param_1,param_2 + 0x14);
  if (iVar1 != 0) {
    param_1->netFlags = 1;
    Ent_ClearTargetedBy(param_1);
    Ent_RemoveFromTargets(param_1);
    Quad_UnlinkDynamic(param_1);
    Quad_UnlinkDynamicList(param_1,param_2 + 0x14);
  }
  return;
}

