
/* duplicate of Image_ToLuminance (no callers found) */

void __cdecl Image_ToLuminance2(byte *pixels,byte *pal,int count)

{
  bool bVar1;
  int iVar2;
  
  do {
    if (*pixels != 0) {
      iVar2 = (uint)*pixels * 3;
      *pixels = (byte)((int)((uint)(byte)(&DAT_004e8a10)[pal[iVar2]] * 2 +
                             (uint)(byte)(&DAT_004e8a10)[pal[iVar2 + 1]] * 5 +
                            (uint)(byte)(&DAT_004e8a10)[pal[iVar2 + 2]]) >> 3);
    }
    pixels = pixels + 1;
    iVar2 = count + -1;
    bVar1 = 0 < count;
    count = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}

