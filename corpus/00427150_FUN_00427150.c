
void FUN_00427150(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005b31c0;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    if (*(short *)(iVar2 + 0x76) == 10) {
      FUN_00465ff0(*(undefined4 *)(iVar2 + 200));
      *(undefined4 *)(iVar2 + 200) = 0;
      FUN_0041b950(iVar2);
      FUN_0041b9b0(iVar2);
    }
  }
  return;
}

