
/* iBrowse cb 5: ibrowse_RenderEx into the buffer, upload to the 6 tiles */

void NW_OnBrowserRender(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_005927c4 != 0) {
    while (DAT_00562c9c != 0) {
      Sleep(0);
    }
    DAT_00562c98 = DAT_00562c98 + 1;
    if (DAT_005927cc != 0) {
      ibrowse_RenderEx(DAT_005927cc,&DAT_00591740,0x400);
      NW_RemapBrowserPalette(1);
      DAT_005927e0 = 1;
      puVar1 = &DAT_00591150;
      iVar2 = 6;
      do {
        Gfx_ReleaseTexture(puVar1);
        puVar1 = puVar1 + 0xb;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    DAT_00562c98 = DAT_00562c98 + -1;
  }
  return;
}

