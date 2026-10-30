
void FUN_0045bfa0(void)

{
  int iVar1;
  
  iVar1 = DAT_0058f1c0;
  FUN_0045bdc0();
  if (iVar1 != 0) {
    FUN_0045b750(iVar1,iVar1 + 0x30);
    FUN_0045bd30(iVar1,iVar1 + 0x40);
    FUN_0045bf20(iVar1,*(undefined4 *)(iVar1 + 0x70));
    *(int *)(iVar1 + 0x70) = *(int *)(iVar1 + 0x70) + 1;
    if ((DAT_0058f210 != 0) && (DAT_0058f214 != 0)) {
      DAT_0058f214 = DAT_0058f214 + -1;
    }
  }
  return;
}

