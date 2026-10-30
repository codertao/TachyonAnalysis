
void FUN_004317b0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + 8 + *(int *)(param_1 + 4) * 0x28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}

