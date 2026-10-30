
void FUN_00451070(void)

{
  int iVar1;
  
  for (iVar1 = DAT_005b3244; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (*(int *)(iVar1 + 0x88) != 0) {
      FUN_00450fb0(iVar1,*(int *)(iVar1 + 0x88));
    }
  }
  return;
}

