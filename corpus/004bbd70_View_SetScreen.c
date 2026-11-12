
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: view struct 0x6b0820: fov, width, height, centre; then View_ComputeFrustum */

void View_SetScreen(int param_1,int param_2,undefined4 param_3)

{
  _DAT_006b0820 = param_3;
  _DAT_006b0824 = param_1;
  _DAT_006b082c = (float)(param_1 >> 1);
  _DAT_006b0828 = param_2;
  _DAT_006b0830 = (float)(param_2 >> 1);
  View_ComputeFrustum(&DAT_006b0820);
  return;
}

