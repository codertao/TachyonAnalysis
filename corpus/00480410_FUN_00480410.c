
void FUN_00480410(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)FUN_004803d0(param_2);
  if (((puVar2 != (undefined4 *)0x0) && (param_1 != 0)) &&
     (FUN_0048e3d0(&param_2,0x6c,4,s_Option_Menu_Item_00556c24,0xa100), param_2 != (undefined4 *)0x0
     )) {
    puVar4 = param_2;
    for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    param_2[0x1a] = 0;
    iVar3 = *(int *)(param_1 + 0x48);
    if (iVar3 == 0) {
      *(undefined4 **)(param_1 + 0x48) = param_2;
      return;
    }
    for (iVar1 = *(int *)(iVar3 + 0x68); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x68)) {
      iVar3 = iVar1;
    }
    *(undefined4 **)(iVar3 + 0x68) = param_2;
  }
  return;
}

