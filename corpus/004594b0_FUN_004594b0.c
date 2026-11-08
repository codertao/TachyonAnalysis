
undefined4 FUN_004594b0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x7c) != 0) {
    do {
      iVar1 = str_cmp(*puVar3,param_2);
      if (iVar1 == 0) {
        return puVar3[2];
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < *(uint *)(param_1 + 0x7c));
  }
  return 0;
}

