
/* sweep: asm, reg-passed args */

int MathAsm_DotFixed16(void)

{
  int *in_EAX;
  int *unaff_EBX;
  
  return ((uint)((longlong)in_EAX[2] * (longlong)unaff_EBX[2]) >> 0x10 |
         (int)((ulonglong)((longlong)in_EAX[2] * (longlong)unaff_EBX[2]) >> 0x20) << 0x10) +
         ((uint)((longlong)*in_EAX * (longlong)*unaff_EBX) >> 0x10 |
         (int)((ulonglong)((longlong)*in_EAX * (longlong)*unaff_EBX) >> 0x20) << 0x10) +
         ((uint)((longlong)in_EAX[1] * (longlong)unaff_EBX[1]) >> 0x10 |
         (int)((ulonglong)((longlong)in_EAX[1] * (longlong)unaff_EBX[1]) >> 0x20) << 0x10);
}

