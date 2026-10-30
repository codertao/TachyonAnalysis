
undefined4 * FUN_00459500(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x8c) != 0) {
    do {
      iVar1 = FUN_004c67c0(*puVar3,param_2);
      if (iVar1 == 0) {
        return puVar3;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0xc;
    } while (uVar2 < *(uint *)(param_1 + 0x8c));
  }
  return (undefined4 *)0x0;
}

