
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052d8ed(void)

{
  longlong lVar1;
  int iVar2;
  int *unaff_ESI;
  int *unaff_EDI;
  
  iVar2 = unaff_ESI[2];
  if (unaff_ESI[2] < DAT_00666ae4) {
    iVar2 = DAT_00666ae4;
  }
  iVar2 = (int)((longlong)((ulonglong)DAT_00604470 << 0x20) / (longlong)iVar2);
  lVar1 = (longlong)*unaff_ESI * (longlong)iVar2;
  *unaff_EDI = ((int)((ulonglong)lVar1 >> 0x20) << 7 | (uint)lVar1 >> 0x19) + DAT_00604474;
  lVar1 = (longlong)-unaff_ESI[1] * (longlong)iVar2;
  unaff_EDI[1] = ((int)((ulonglong)lVar1 >> 0x20) << 7 | (uint)lVar1 >> 0x19) + _DAT_00604478;
  return;
}

