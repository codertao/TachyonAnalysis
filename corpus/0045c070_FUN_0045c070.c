
void FUN_0045c070(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar1 = FUN_00436fd0(*(undefined4 *)(param_2 + 4));
    *(int *)(param_2 + 0x30) = iVar1;
    if (iVar1 != 0) {
      FUN_0045c010(param_2);
    }
  }
  return;
}

