
void FUN_00477d70(void)

{
  int iVar1;
  
  iVar1 = DAT_00572024;
  while (iVar1 != 0) {
    DAT_00572024 = *(int *)(iVar1 + 0x88);
    FUN_0049c530(iVar1);
    iVar1 = DAT_00572024;
  }
  DAT_00572024 = iVar1;
  DAT_00572028 = 0;
  return;
}

