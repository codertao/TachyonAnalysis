
void FUN_004986c0(SpED *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)&param_1->field_0xc8 + -1;
  *(int *)&param_1->field_0xc8 = iVar1;
  if (iVar1 < 1) {
    iVar1._0_2_ = param_1->engageCount;
    iVar1._2_2_ = param_1->engageLimit;
    if (iVar1 == 0) {
      FUN_0045d020(param_1,&param_1->quadrant->staticSectorMap);
    }
    Quad_UnlinkDynamic(param_1);
    FUN_0041b9b0(param_1);
  }
  return;
}

