
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (src@ESI, font@EDI, flags@CL) free old bitmap, load (0x4a2eb0), dims from 0x603100; flag 2 ->
   Image_ToLuminance */

void __cdecl Font_Load(char *src,void *font,byte flags)

{
  undefined4 uVar1;
  
  DAT_004e5ebd = flags;
  if (*(int *)font != 0) {
    OurFreeMem(*(undefined4 *)font,font,src);
  }
  uVar1 = Image_Load(src);
  *(undefined4 *)font = uVar1;
  *(undefined4 *)((int)font + 8) = _DAT_00603100;
  *(undefined4 *)((int)font + 0xc) = DAT_00603104;
  if ((DAT_004e5ebd & 2) != 0) {
    FontAsm_AllocEntries();
  }
  if ((DAT_004e5ebd & 1) != 0) {
    Pal_RemapToGamePalette(*(undefined4 *)font,DAT_00603108);
  }
  if ((DAT_004e5ebd & 8) != 0) {
    Image_ToLuminance(*(byte **)font,(byte *)&DAT_00602e00,DAT_00603108);
  }
  return;
}

