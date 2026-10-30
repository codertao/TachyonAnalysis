
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e04d0(void)

{
  float fVar1;
  int *in_EAX;
  
  fVar1 = (float)in_EAX[2] * (float)in_EAX[2] +
          (float)*in_EAX * (float)*in_EAX + (float)in_EAX[1] * (float)in_EAX[1];
  DAT_004dff7c = (float)(((int)((uint)fVar1 & 0x7f800000) >> 1) + 0x1fc00000U & 0x7f800000 |
                        *(uint *)(&DAT_004dffb0 + ((int)fVar1 >> 0x10 & 0xffU) * 4));
  fVar1 = _DAT_004dff78 / DAT_004dff7c;
  *in_EAX = (int)ROUND((float)*in_EAX * fVar1);
  in_EAX[2] = (int)ROUND((float)in_EAX[2] * fVar1);
  in_EAX[1] = (int)ROUND((float)in_EAX[1] * fVar1);
  return;
}

