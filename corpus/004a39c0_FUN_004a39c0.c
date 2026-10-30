
void FUN_004a39c0(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  puVar1 = (undefined1 *)FUN_0049c4e0(0x400,4,0);
  FUN_004a14f0(0x36,0);
  FUN_004a1490(puVar1,DAT_0060310c * 4);
  uVar3 = 0;
  if (DAT_0060310c != 0) {
    puVar2 = (undefined1 *)((int)&DAT_00602e00 + 2);
    puVar4 = puVar1;
    do {
      uVar3 = uVar3 + 1;
      puVar2[-2] = puVar4[2];
      puVar2[-1] = puVar4[1];
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 4;
      puVar2 = puVar2 + 3;
    } while (uVar3 < DAT_0060310c);
  }
  FUN_0049c530(puVar1);
  return;
}

