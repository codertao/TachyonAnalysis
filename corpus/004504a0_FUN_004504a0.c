
void FUN_004504a0(void)

{
  int iVar1;
  
  DAT_0058f4b4 = DAT_0058f4b4 + 1;
  iVar1 = DAT_0058f4a4 + 1;
  if (DAT_0058f4c4 <= DAT_0058f4b4) {
    DAT_0058f4b4 = DAT_0058f4c4;
    iVar1 = DAT_0058f4a4;
  }
  DAT_0058f4a4 = iVar1;
  return;
}

