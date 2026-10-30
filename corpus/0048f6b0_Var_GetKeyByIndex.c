
/* table + index -> key string */

undefined4 Var_GetKeyByIndex(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x24);
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x20) != 0) {
      do {
        if (puVar2[1] == param_2) {
          return *puVar2;
        }
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 2;
      } while (uVar1 < *(uint *)(param_1 + 0x20));
    }
  }
  return 0;
}

