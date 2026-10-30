
/* (section, key) -> entry (+4 = id) */

int Var_FindKey(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_004c67c0(*(undefined4 *)(iVar2 + *(int *)(param_1 + 0x28)),param_2);
      if (iVar1 == 0) {
        return *(int *)(param_1 + 0x28) + uVar3 * 0xc;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  return 0;
}

