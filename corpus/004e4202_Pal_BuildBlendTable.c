
/* (out) 256x256 50/50 blend table over palette 0x603180 (no callers found) */

void __cdecl Pal_BuildBlendTable(byte *out)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  char cVar6;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  do {
    uVar5 = CONCAT31((int3)((uint)iVar4 >> 8),(char)((uint)iVar4 >> 8));
    do {
      iVar4 = (uVar5 & 0xff) * 3;
      iVar1 = (uVar5 >> 8) * 3;
      DAT_004e3004 = (&DAT_004e3067)
                     [(uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar1)] +
                      (uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar4)] >> 1];
      DAT_004e3005 = (&DAT_004e3067)
                     [(uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar1 + 1)] +
                      (uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar4 + 1)] >> 1];
      DAT_004e3006 = (&DAT_004e3067)
                     [(uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar1 + 2)] +
                      (uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar4 + 2)] >> 1];
      bVar2 = (*(code *)PTR_FUN_004e3053)();
      out[uVar5] = bVar2;
      cVar6 = (char)(uVar5 >> 8);
      out[CONCAT11((char)uVar5,cVar6)] = bVar2;
      cVar3 = (char)uVar5 + '\x01';
      uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar3);
    } while (cVar3 != '\0');
    bVar2 = cVar6 + 1;
    iVar4 = (uint)bVar2 << 8;
  } while (bVar2 != 0);
  return;
}

