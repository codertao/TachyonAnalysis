
void FUN_00409f00(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  FUN_00409ee0(param_1);
  puVar1 = *(uint **)(*(int *)(param_1 + 0x8c) + 0x94);
  uVar3 = 0;
  if (*puVar1 != 0) {
    puVar2 = (undefined4 *)(puVar1[1] + 0x7c);
    do {
      if (puVar2[-0x18] == *(int *)(param_1 + 0xdc)) {
        FUN_0040a010(*puVar2);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x20;
    } while (uVar3 < *puVar1);
  }
  return;
}

