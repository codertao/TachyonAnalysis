
void FUN_00464420(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x30c) != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x314);
    do {
      FUN_0049c530(*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0xe;
    } while (uVar1 < *(uint *)(param_1 + 0x30c));
  }
  return;
}

