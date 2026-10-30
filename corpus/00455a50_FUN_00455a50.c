
void FUN_00455a50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (*(int *)(param_2 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    uVar2 = FUN_00455a00(param_1,param_2);
    *(undefined4 *)(param_1 + 0x90) = uVar2;
  }
  if (*(int *)(param_1 + 0x90) != iVar1) {
    *(undefined2 *)(param_1 + 0x10a) = 0;
    *(undefined2 *)(param_1 + 0x108) = 0;
  }
  return;
}

