
void FUN_0041b900(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  do {
    puVar1 = (undefined4 *)puVar2[3];
    FUN_004b7930(puVar2,puVar2[0x19]);
    FUN_004b78a0(*puVar2,puVar2);
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

