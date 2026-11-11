
/* (pal@ESI) RGB -> BGRA into 0x4e5abc */

void __cdecl Font_SetPalette32(byte *pal)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = &DAT_004e5abc;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    pbVar2[3] = 0;
    pbVar2[2] = *pal;
    pbVar2[1] = pal[1];
    *pbVar2 = pal[2];
    pal = pal + 3;
    pbVar2 = pbVar2 + 4;
  }
  return;
}

