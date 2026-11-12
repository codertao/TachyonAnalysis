
/* sweep */

void ObjDisplay_DrawNav(void)

{
  undefined4 uVar1;
  
  if (DAT_005b9044 != 0) {
    ObjDisplay_DrawEntry(2,&DAT_0058f464,0xc4c4ff);
    ObjDisplay_DrawEntry(3,DAT_0058f484 + 1,0xc4c4ff);
    uVar1 = Gate_GetNamePtr(DAT_005b9044,0xc4c4ff);
    ObjDisplay_DrawEntry(1,uVar1);
  }
  return;
}

