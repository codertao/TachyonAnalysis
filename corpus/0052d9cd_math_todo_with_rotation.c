
void __fastcall math_todo_with_rotation(uint param_1)

{
  uint in_EAX;
  uint unaff_EBX;
  float *unaff_ESI;
  
  GLBL_MATH_TMP_r1 = in_EAX & 0x1ffffff;
  GLBL_MATH_TMP_r2 = unaff_EBX & 0x1ffffff;
  GLBL_MATH_TMP_r3 = param_1 & 0x1ffffff;
  *unaff_ESI = (g_SinCosTable[(GLBL_MATH_TMP_r1 >> 0x10) + 1] -
               g_SinCosTable[GLBL_MATH_TMP_r1 >> 0x10]) *
               (float)(in_EAX & 0xffff) * f_global_scalar_maybe +
               g_SinCosTable[GLBL_MATH_TMP_r1 >> 0x10];
  unaff_ESI[1] = (g_SinCosTable[(GLBL_MATH_TMP_r1 >> 0x10) + 0x81] -
                 g_SinCosTable[(GLBL_MATH_TMP_r1 >> 0x10) + 0x80]) *
                 (float)(GLBL_MATH_TMP_r1 & 0xffff) * f_global_scalar_maybe +
                 g_SinCosTable[(GLBL_MATH_TMP_r1 >> 0x10) + 0x80];
  unaff_ESI[2] = (g_SinCosTable[(GLBL_MATH_TMP_r2 >> 0x10) + 1] -
                 g_SinCosTable[GLBL_MATH_TMP_r2 >> 0x10]) *
                 (float)(GLBL_MATH_TMP_r2 & 0xffff) * f_global_scalar_maybe +
                 g_SinCosTable[GLBL_MATH_TMP_r2 >> 0x10];
  unaff_ESI[3] = (g_SinCosTable[(GLBL_MATH_TMP_r2 >> 0x10) + 0x81] -
                 g_SinCosTable[(GLBL_MATH_TMP_r2 >> 0x10) + 0x80]) *
                 (float)(GLBL_MATH_TMP_r2 & 0xffff) * f_global_scalar_maybe +
                 g_SinCosTable[(GLBL_MATH_TMP_r2 >> 0x10) + 0x80];
  unaff_ESI[4] = (g_SinCosTable[(GLBL_MATH_TMP_r3 >> 0x10) + 1] -
                 g_SinCosTable[GLBL_MATH_TMP_r3 >> 0x10]) *
                 (float)(GLBL_MATH_TMP_r3 & 0xffff) * f_global_scalar_maybe +
                 g_SinCosTable[GLBL_MATH_TMP_r3 >> 0x10];
  GLBL_MATH_TMPZ_FRAC = GLBL_MATH_TMP_r3 & 0xffff;
  unaff_ESI[5] = (g_SinCosTable[(GLBL_MATH_TMP_r3 >> 0x10) + 0x81] -
                 g_SinCosTable[(GLBL_MATH_TMP_r3 >> 0x10) + 0x80]) *
                 (float)GLBL_MATH_TMPZ_FRAC * f_global_scalar_maybe +
                 g_SinCosTable[(GLBL_MATH_TMP_r3 >> 0x10) + 0x80];
  return;
}

