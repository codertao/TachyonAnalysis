
void FUN_004296d0(vec3 *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1->z < GLBL_R_DIST_MIN_VAL) {
    param_1->z = GLBL_R_DIST_MIN_VAL;
  }
  iVar2 = (int)((longlong)((ulonglong)DAT_005b0740 << 0x20) / (longlong)param_1->z);
  lVar1 = (longlong)param_1->x * (longlong)iVar2;
  *param_2 = GLBL_SOME_2D_X + ((uint)lVar1 >> 0x19 | (int)((ulonglong)lVar1 >> 0x20) << 7);
  lVar1 = (longlong)-param_1->y * (longlong)iVar2;
  param_2[1] = GLBL_SOME_2D_Y + ((uint)lVar1 >> 0x19 | (int)((ulonglong)lVar1 >> 0x20) << 7);
  return;
}

