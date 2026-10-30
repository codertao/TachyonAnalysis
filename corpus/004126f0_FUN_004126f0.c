
void FUN_004126f0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  *param_2 = 0;
  piVar2 = param_2 + 1;
  for (iVar1 = *(int *)(param_1 + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xe0)) {
    *(undefined2 *)piVar2 = *(undefined2 *)(*(int *)(iVar1 + 0xe4) + 0x44);
    *param_2 = *param_2 + 1;
    piVar2 = (int *)((int)piVar2 + 2);
  }
  return;
}

