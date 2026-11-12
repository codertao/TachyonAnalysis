
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: 1 = lightning-scaled per-vertex dots, else normal (fn ptrs 0x55ed18/1c) */

int Light_SelectVertexMode(int param_1)

{
  if (param_1 != 0) {
    if (param_1 == 1) {
      DAT_0055ed18 = Light_ComputeVertDotsLightning;
      _DAT_0055ed1c = Mat_ShadeVerts;
      return 0;
    }
    param_1 = param_1 + -2;
  }
  DAT_0055ed18 = Light_ComputeVertDots;
  _DAT_0055ed1c = Mat_ShadeVerts;
  return param_1;
}

