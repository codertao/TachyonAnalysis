
undefined4 FUN_004df444(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar3 = DAT_004cafe2;
  iVar1 = DAT_004cafe2 * 0x40;
  if ((&DAT_004cac1a)[iVar1] != '\0') {
    return 0;
  }
  (&DAT_004cabfe)[DAT_004cafe2 * 0x10] = (uint)*(byte *)(unaff_ESI + 0xc);
  iVar2 = *(int *)(unaff_ESI + 4);
  *(int *)(&DAT_004cabde + iVar1) = unaff_ESI + 0x10 + iVar2;
  *(int *)(&DAT_004cabe2 + iVar1) = iVar2;
  *(int *)(&DAT_004cabea + iVar1) = (iVar2 + -1) * -0x400;
  iVar2 = (int)((longlong)*(int *)(unaff_ESI + 8) * 0x10000 >> 0x22);
  *(int *)(&DAT_004cabe6 + iVar1) = iVar2;
  *(int *)(&DAT_004cac12 + iVar1) = iVar2;
  *(undefined4 *)(&DAT_004cac16 + iVar1) = 0;
  iVar3 = (DAT_005f9d40 >> 1) >> ((byte)(&DAT_004cabfe)[iVar3 * 0x10] & 0x1f);
  *(int *)(&DAT_004cac02 + iVar1) = iVar3;
  *(int *)(&DAT_004cac06 + iVar1) = iVar3;
  (&DAT_004cac1a)[iVar1] = 1;
  DAT_004cafe2 = DAT_004cafe2 + 1;
  DAT_004cafe2 = DAT_004cafe2 & 0xf;
  return 1;
}

