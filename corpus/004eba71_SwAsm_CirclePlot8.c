
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: asm: clipped 8-bpp pixel at centre+offset */

int SwAsm_CirclePlot8(void)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar1 = in_EAX + _DAT_004eba58;
  if ((((DAT_00604460 <= iVar1) && (iVar1 <= DAT_00604468)) &&
      (iVar2 = unaff_EBX + _DAT_004eba5c, DAT_00604464 <= iVar2)) && (iVar2 <= DAT_0060446c)) {
    *(char *)(iVar1 + iVar2 * DAT_00604490 + GLBL_some_str) = (char)DAT_004eba6c;
  }
  return in_EAX;
}

