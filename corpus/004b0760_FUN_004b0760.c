
void FUN_004b0760(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 100) = DAT_00666af8;
  }
  else {
    iVar1 = FUN_004af4a0(param_2);
    *(int *)(param_1 + 100) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 100) = DAT_00666af8;
      return;
    }
  }
  return;
}

