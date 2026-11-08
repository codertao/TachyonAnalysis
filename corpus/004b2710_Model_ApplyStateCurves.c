
/* apply state curves (glow/scale) for state n */

void Model_ApplyStateCurves(int param_1,uint param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x40) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x4c), iVar1 != 0)) &&
     (param_2 < *(uint *)(iVar1 + 0x10))) {
    State_EvalCurves(param_1,*(int *)(iVar1 + 0x14) + param_2 * 0x74);
  }
  return;
}

