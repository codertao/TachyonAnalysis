
/* (pal@ESI, out@EDI) palette -> native 16/32-bit pixels */

void __cdecl Pix_PaletteToNative(byte *pal,void *out)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x100;
  do {
    *(uint *)out = CONCAT31((int3)((uint)(CONCAT31((int3)(((uint)pal[DAT_004e727c] <<
                                                          ((byte)DAT_004e7268 & 0x1f)) >> 8),
                                                   pal[DAT_004e7294]) << ((byte)DAT_004e7280 & 0x1f)
                                         ) >> 8),pal[DAT_004e72ac]) >>
                   (8U - (char)DAT_004e7298 & 0x1f) & 0xffff;
    pal = pal + 3;
    out = (void *)((int)out + 4);
    iVar3 = iVar2 + -1;
    bVar1 = 0 < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return;
}

