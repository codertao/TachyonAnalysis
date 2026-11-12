
/* sweep: asm, reg-passed args */

int MathAsm_VecLengthF(void)

{
  float fVar1;
  int *in_EAX;
  
  fVar1 = (float)in_EAX[2] * (float)in_EAX[2] +
          (float)*in_EAX * (float)*in_EAX + (float)in_EAX[1] * (float)in_EAX[1];
  DAT_004dff7c = (float)(((int)((uint)fVar1 & 0x7f800000) >> 1) + 0x1fc00000U & 0x7f800000 |
                        *(uint *)(&DAT_004dffb0 + ((int)fVar1 >> 0x10 & 0xffU) * 4));
  DAT_004dffa0 = (int)ROUND(DAT_004dff7c);
  return DAT_004dffa0;
}

