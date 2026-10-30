
void FUN_004979d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    if (((*(short *)(iVar2 + 0x76) == 3) && (*(int *)(iVar2 + 200) == param_2)) &&
       (**(int **)(iVar2 + 0xdc) == param_3)) {
      if (*(int *)(iVar2 + 0xd8) == 1) {
        FUN_004156d0(*(undefined4 *)(iVar2 + 0x78),**(int **)(iVar2 + 0xdc),0);
      }
      FUN_0041b950(iVar2);
      FUN_0041b9b0(iVar2);
    }
  }
  return;
}

