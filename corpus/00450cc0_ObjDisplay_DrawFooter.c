
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void ObjDisplay_DrawFooter(void)

{
  undefined4 uVar1;
  
  Gfx_Lock(1);
  uVar1 = Rtxt_GetText(DAT_005a6140,0x90,DAT_0058f420,DAT_0058f424,DAT_0058f428,DAT_0058f42c,0xffff,
                       0x10000,0);
  Text_DrawAligned(uVar1);
  _DAT_0058f430 = DAT_0058f424 + 6;
  DAT_0058f434 = DAT_0058f43c + DAT_0058f428;
  return;
}

