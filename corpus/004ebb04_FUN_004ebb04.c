
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ebb04(void)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar1 = in_EAX + _DAT_004eba58;
  if ((((DAT_00604460 <= iVar1) && (iVar1 <= DAT_00604468)) &&
      (iVar2 = unaff_EBX + _DAT_004eba5c, DAT_00604464 <= iVar2)) && (iVar2 <= DAT_0060446c)) {
    *(undefined4 *)(iVar2 * DAT_00604490 + iVar1 * 4 + GLBL_some_str) = DAT_004eba64;
  }
  return in_EAX;
}

