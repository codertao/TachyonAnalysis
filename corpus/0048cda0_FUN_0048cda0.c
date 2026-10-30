
void FUN_0048cda0(void)

{
  int iVar1;
  
  iVar1 = DAT_0056ab64;
  DAT_0056ab64 = DAT_0056ab64 + 1;
  DAT_0056ab74 = DAT_0056ab74 + 1;
  if (DAT_0056ab80 <= DAT_0056ab74) {
    DAT_0056ab64 = iVar1;
    DAT_0056ab74 = DAT_0056ab80;
    DAT_0056ab68 = DAT_005b3304 + 0xfa;
    return;
  }
  DAT_0056ab68 = DAT_005b3304 + 0xfa;
  return;
}

