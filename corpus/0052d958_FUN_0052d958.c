
int FUN_0052d958(void)

{
  longlong lVar1;
  uint in_EAX;
  int iVar2;
  
  GLBL_MATH_TMPZ_FRAC = in_EAX & 0x1ffffff;
  iVar2 = ((in_EAX & 0x1ffffff) >> 0x10) * 4;
  lVar1 = (longlong)(*(int *)(&DAT_0052bfe4 + iVar2) - *(int *)(&DAT_0052bfe0 + iVar2)) *
          (longlong)(int)(in_EAX & 0xffff);
  return ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         *(int *)(&DAT_0052bfe0 + iVar2);
}

