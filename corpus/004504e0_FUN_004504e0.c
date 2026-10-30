
void FUN_004504e0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (DAT_0058f4a0 != (undefined4 *)0x0) {
    puVar3 = DAT_0058f4a0 + 0x21;
    puVar4 = DAT_0058f4a0;
    for (uVar1 = DAT_0058f4c4 * 0x84 - 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return;
}

