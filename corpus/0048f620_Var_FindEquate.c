
/* sweep */

undefined4 Var_FindEquate(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      iVar1 = __stricmp(*puVar3,param_2);
      if (iVar1 == 0) {
        *param_3 = puVar3[1];
        return 1;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  return 0;
}

