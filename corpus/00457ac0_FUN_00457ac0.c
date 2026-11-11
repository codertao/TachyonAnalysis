
void FUN_00457ac0(SpED *param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)&param_1->field_0xc8 = 0;
  param_1->engageCount = 0;
  param_1->target = (SpED *)0x0;
  param_1[4].prev = (SpED *)0x0;
  iVar1 = FUN_0045d080(param_1,param_2 + 0x14);
  if (iVar1 != 0) {
    param_1->netFlags = 1;
    FUN_0048b330(param_1);
    FUN_0048b140(param_1);
    Quad_UnlinkDynamic(param_1);
    FUN_0045cf80(param_1,param_2 + 0x14);
  }
  return;
}

