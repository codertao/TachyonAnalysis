
longlong __fastcall FUN_004df4c9(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int unaff_ESI;
  
  iVar1 = DAT_004cafe2;
  if (((&DAT_004cac1a)[(DAT_004cafe2 + 1 & 0xf) * 0x40] == '\0') &&
     ((&DAT_004cac1a)[(DAT_004cafe2 + 2 & 0xf) * 0x40] == '\0')) {
    iVar2 = DAT_004cafe2 * 0x40;
    if ((&DAT_004cac1a)[iVar2] == '\0') {
      *(int *)(&DAT_004cabde + iVar2) = unaff_ESI + param_1;
      *(int *)(&DAT_004cabe2 + iVar2) = param_1;
      *(int *)(&DAT_004cabea + iVar2) = (param_1 + -1) * -0x400;
      *(undefined4 *)(&DAT_004cabe6 + iVar2) = 0x800;
      *(undefined4 *)(&DAT_004cac12 + iVar2) = 0x800;
      *(int *)(&DAT_004cac02 + iVar2) = (DAT_005f9d40 >> 1) >> ((byte)unaff_EBX & 0x1f);
      *(int *)(&DAT_004cac06 + iVar2) = (DAT_005f9d40 >> 1) >> ((byte)((uint)unaff_EBX >> 8) & 0x1f)
      ;
      (&DAT_004cabfe)[iVar1 * 0x10] = unaff_EBX;
      (&DAT_004cac1a)[iVar2] = 1;
      DAT_004cafe2 = DAT_004cafe2 + 1;
      DAT_004cafe2 = DAT_004cafe2 & 0xf;
      return CONCAT44(param_2,1);
    }
  }
  return (ulonglong)param_2 << 0x20;
}

