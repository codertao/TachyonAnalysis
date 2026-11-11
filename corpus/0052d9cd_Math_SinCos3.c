
/* (out@ESI float[6], a0@EAX, a1@EBX, a2@ECX): sin/cos of three 25-bit angles, 512-entry table
   0x52cbe4 with linear interp (was math_todo_with_rotation) */

void __cdecl Math_SinCos3(float *out,int a0,int a1,int a2)

{
  GLBL_MATH_TMP_r1 = a0 & 0x1ffffff;
  GLBL_MATH_TMP_r2 = a1 & 0x1ffffff;
  GLBL_MATH_TMP_r3 = a2 & 0x1ffffff;
  *out = (g_SinCosTable[(GLBL_MATH_TMP_r1 >> 0x10) + 1] - g_SinCosTable[GLBL_MATH_TMP_r1 >> 0x10]) *
         (float)(a0 & 0xffff) * f_global_scalar_maybe + g_SinCosTable[GLBL_MATH_TMP_r1 >> 0x10];
  out[1] = (g_SinCosTable[(GLBL_MATH_TMP_r1 >> 0x10) + 0x81] -
           g_SinCosTable[(GLBL_MATH_TMP_r1 >> 0x10) + 0x80]) *
           (float)(GLBL_MATH_TMP_r1 & 0xffff) * f_global_scalar_maybe +
           g_SinCosTable[(GLBL_MATH_TMP_r1 >> 0x10) + 0x80];
  out[2] = (g_SinCosTable[(GLBL_MATH_TMP_r2 >> 0x10) + 1] - g_SinCosTable[GLBL_MATH_TMP_r2 >> 0x10])
           * (float)(GLBL_MATH_TMP_r2 & 0xffff) * f_global_scalar_maybe +
           g_SinCosTable[GLBL_MATH_TMP_r2 >> 0x10];
  out[3] = (g_SinCosTable[(GLBL_MATH_TMP_r2 >> 0x10) + 0x81] -
           g_SinCosTable[(GLBL_MATH_TMP_r2 >> 0x10) + 0x80]) *
           (float)(GLBL_MATH_TMP_r2 & 0xffff) * f_global_scalar_maybe +
           g_SinCosTable[(GLBL_MATH_TMP_r2 >> 0x10) + 0x80];
  out[4] = (g_SinCosTable[(GLBL_MATH_TMP_r3 >> 0x10) + 1] - g_SinCosTable[GLBL_MATH_TMP_r3 >> 0x10])
           * (float)(GLBL_MATH_TMP_r3 & 0xffff) * f_global_scalar_maybe +
           g_SinCosTable[GLBL_MATH_TMP_r3 >> 0x10];
  GLBL_MATH_TMPZ_FRAC = GLBL_MATH_TMP_r3 & 0xffff;
  out[5] = (g_SinCosTable[(GLBL_MATH_TMP_r3 >> 0x10) + 0x81] -
           g_SinCosTable[(GLBL_MATH_TMP_r3 >> 0x10) + 0x80]) *
           (float)GLBL_MATH_TMPZ_FRAC * f_global_scalar_maybe +
           g_SinCosTable[(GLBL_MATH_TMP_r3 >> 0x10) + 0x80];
  return;
}

