
void FUN_00452eb0(void)

{
  int iVar1;
  int local_8;
  int local_4;
  
  local_8 = 3;
  local_4 = 3;
  iVar1 = FUN_00452e80(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xac) != 0)) {
    FUN_00428d90(0,&local_8);
  }
  iVar1 = FUN_00452e80(1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xac) != 0)) {
    FUN_00428d90(1,&local_4);
  }
  if ((local_8 != 3) || (DAT_005b2148 = 1, local_4 != 3)) {
    DAT_005b2148 = 0;
  }
  return;
}

