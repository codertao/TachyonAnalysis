
void FUN_0045c5b0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc);
      do {
        FUN_0049c530(*puVar1);
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 0x11;
      } while (uVar2 < *(uint *)(param_1 + 0x28));
    }
    FUN_0049c530(*(undefined4 *)(param_1 + 0x9c));
    FUN_0049c530(*(undefined4 *)(param_1 + 0x88));
    FUN_0049c530(*(undefined4 *)(param_1 + 0x84));
    FUN_0049c530(*(undefined4 *)(param_1 + 0x80));
    FUN_0049c530(*(undefined4 *)(param_1 + 0x90));
    FUN_0049c530(*(undefined4 *)(param_1 + 0x94));
    FUN_0049c530(*(undefined4 *)(param_1 + 0xc));
    FUN_0049c530(*(undefined4 *)(param_1 + 8));
    FUN_0049c530(*(undefined4 *)(param_1 + 4));
    FUN_0049c530(*(undefined4 *)(param_1 + 0x2c));
    FUN_0049c530(*(undefined4 *)(param_1 + 0x24));
    FUN_0049c530(*(undefined4 *)(param_1 + 0x78));
    FUN_0049c530(param_1);
  }
  return;
}

