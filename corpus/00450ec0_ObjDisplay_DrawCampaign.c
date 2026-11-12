
/* sweep: guess */

void ObjDisplay_DrawCampaign(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0058f488 != 0) {
    uVar1 = Rtxt_GetText(DAT_005a6140,0x8b,0xc4c4ff);
    ObjDisplay_DrawEntry(4,uVar1);
  }
  iVar2 = ObjDisplay_IsActive();
  if (iVar2 != 0) {
    ObjDisplay_DrawEntry(2,&DAT_0058f440,0xc4c4ff);
    ObjDisplay_DrawEntry(3,DAT_0058f460 + 1,0xc4c4ff);
    uVar1 = Gate_GetNamePtr(DAT_005b7e44,0xc4c4ff);
    ObjDisplay_DrawEntry(1,uVar1);
  }
  return;
}

