
/* sweep */

void BaseRemovedList_Remove(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = BaseRemovedList_Find(param_1,param_2);
  if (iVar2 != -1) {
    iVar1 = *(int *)(param_1 + 0xf0) + -1;
    if (iVar2 == iVar1) {
      *(int *)(param_1 + 0xf0) = iVar1;
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xec) + iVar2 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0xec) + -4 + *(int *)(param_1 + 0xf0) * 4);
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + -1;
  }
  return;
}

