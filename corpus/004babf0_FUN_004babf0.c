
void FUN_004babf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = DAT_006c9018;
  do {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        FUN_004bace0(iVar1,iVar2);
        iVar2 = iVar2 + 1;
        iVar3 = DAT_006c9018;
      } while (iVar2 < DAT_006c9018);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if (DAT_006c8f9c < 0) {
    DAT_006c8f9c = 0;
  }
  if (DAT_006c8fa0 < 0) {
    DAT_006c8fa0 = 0;
  }
  DAT_006c8f88 = DAT_006c8f88 + (DAT_006b0f44 - DAT_006c9014) / 0x28;
  DAT_006b0f48 = DAT_006b0f48 + iVar3;
  DAT_006c8f94 = DAT_006c8f94 + 1;
  DAT_006c8f90 = DAT_006c8f90 + iVar3;
  DAT_006c9018 = 0;
  DAT_006b0f4c = 0;
  DAT_006b0f50 = DAT_006c9010;
  DAT_006b0f44 = DAT_006c9014;
  DAT_00564e48 = DAT_00564e48 + 1;
  return;
}

