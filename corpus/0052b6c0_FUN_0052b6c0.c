
void FUN_0052b6c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_004e4890;
  iVar4 = DAT_004e488c;
  iVar1 = *(int *)(DAT_004e488c + 0x1c);
  iVar2 = *(int *)(DAT_004e4890 + 0x1c);
  iVar3 = *(int *)(DAT_004e4894 + 0x1c);
  if (iVar2 <= iVar1) {
    if (iVar3 < iVar2) {
      DAT_004e488c = DAT_004e4894;
      DAT_004e4894 = iVar4;
      DAT_004e4b10 = 1;
      return;
    }
    DAT_004e488c = DAT_004e4890;
    if (iVar1 < iVar3) {
      DAT_004e4890 = iVar4;
      DAT_004e4b10 = 1;
      return;
    }
    DAT_004e4890 = DAT_004e4894;
    DAT_004e4894 = iVar4;
    DAT_004e4b10 = 0;
    return;
  }
  if (iVar3 < iVar1) {
    DAT_004e488c = DAT_004e4894;
    DAT_004e4890 = iVar4;
    DAT_004e4894 = iVar5;
    DAT_004e4b10 = 0;
    return;
  }
  if (iVar2 < iVar3) {
    DAT_004e4b10 = 0;
    return;
  }
  DAT_004e4890 = DAT_004e4894;
  DAT_004e4894 = iVar5;
  DAT_004e4b10 = 1;
  return;
}

