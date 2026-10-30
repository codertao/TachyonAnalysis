
void FUN_00407c30(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 8);
    do {
      FUN_0049c530(*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0xb;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  FUN_0049c530(*(undefined4 *)(param_1 + 0x50));
  FUN_0049c530(*(undefined4 *)(param_1 + 0x24));
  FUN_0049c530(*(undefined4 *)(param_1 + 0x1c));
  return;
}

