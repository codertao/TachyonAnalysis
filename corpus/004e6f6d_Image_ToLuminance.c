
/* (pixels, pal, count) index -> (2R+5G+B)/8, indices < 8 -> 0 */

void __cdecl Image_ToLuminance(byte *pixels,byte *pal,int count)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  do {
    bVar1 = *pixels;
    uVar3 = (uint)bVar1;
    if (bVar1 != 0) {
      if (bVar1 < 8) {
        uVar3 = 0;
      }
      iVar4 = uVar3 * 3;
      *pixels = (byte)((int)((uint)(byte)(&DAT_004e8a10)[pal[iVar4]] * 2 +
                             (uint)(byte)(&DAT_004e8a10)[pal[iVar4 + 1]] * 5 +
                            (uint)(byte)(&DAT_004e8a10)[pal[iVar4 + 2]]) >> 3);
    }
    pixels = pixels + 1;
    iVar4 = count + -1;
    bVar2 = 0 < count;
    count = iVar4;
  } while (iVar4 != 0 && bVar2);
  return;
}

