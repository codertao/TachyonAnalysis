
/* sweep */

void Base_SerializeRemovedParts(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  
  *param_2 = *(undefined4 *)(param_1 + 0xf0);
  puVar2 = *(undefined2 **)(param_1 + 0xec);
  param_2 = param_2 + 1;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    do {
      *(undefined2 *)param_2 = *puVar2;
      iVar1 = iVar1 + 1;
      param_2 = (undefined4 *)((int)param_2 + 2);
      puVar2 = puVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 0xf0));
  }
  return;
}

