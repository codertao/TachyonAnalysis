
/* sweep */

void VonUi_DrawTalker(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_005658a4;
  if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) &&
     ((DAT_00565881 != '\0' && (DAT_005658a4 != -1)))) {
    iVar1 = DAT_005658a4 * 0x44;
    Portrait_DrawAt(&DAT_005b3a38 + iVar1,0x1ec,0x14,0x80,0x80);
    DAT_00565a74 = DAT_00565a74 + DAT_00565a60 * -0x3d7;
    if (DAT_00565a74 < 0x3fff) {
      DAT_00565a74 = 0xffff;
    }
    Text_DrawAligned(&DAT_005b3a38 + iVar1,DAT_005657c0,0x22c,0x94,
                     (-(uint)(*(char *)((int)&DAT_00565934 + iVar2) != '\0') & 0xff01ff00) +
                     0xff0000,DAT_00565a74,0x10000,6);
  }
  return;
}

