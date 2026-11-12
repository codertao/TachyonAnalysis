
/* sweep */

void Bmp_ReadPalette(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  puVar1 = (undefined1 *)Mem_Alloc(0x400,4,0);
  Fs_Seek(0x36,0);
  Fs_Read(puVar1,DAT_0060310c * 4);
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
  OurFreeMem(puVar1);
  return;
}

