
/* ibrowse_InitEx 616x370, 6 IBROWSER MATERIAL 256x256 tiles, callbacks 5 render / 1 page loaded /
   2,3 cursor, colours */

void NW_BrowserInit(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  DAT_00591640 = (-(uint)(DAT_00564ae4 != 0) & 0xffffffe8) + 0x20;
  puVar4 = &DAT_00591150;
  iVar3 = 6;
  do {
    uVar2 = DAT_00591640 >> 3;
    puVar5 = puVar4 + -4;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar4[3] = 0x30000008;
    FUN_0048e3d0(puVar4,uVar2 << 0x10,4,s_IBROWSER_MATERIAL_005480e0,0xa000);
    FUN_00439810(0x100,0x100,puVar4 + 2,(int)puVar4 + 9);
    puVar4 = puVar4 + 0xb;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (DAT_005927cc == 0) {
    FUN_0048e3d0(&DAT_005927cc,(DAT_00591640 >> 3) * 0x37a50,4,s_ibrowser_buffer_005480d0,0xa000);
  }
  if (DAT_005927c0 == 0) {
    if (DAT_00591640 == 0x20) {
      uVar6 = 1;
    }
    else {
      uVar6 = 2;
    }
    ibrowse_InitEx(GLBL_WindowHandle_,0x268,0x172,uVar6);
    DAT_005927c0 = 1;
  }
  ibrowse_SetCallback(5,NW_OnBrowserRender);
  ibrowse_SetCallback(1,NW_OnPageLoaded);
  ibrowse_SetCallback(2,NW_OnLinkHover);
  ibrowse_SetCallback(3,NW_OnLinkLeave);
  ibrowse_SetColor(0,0x4000);
  ibrowse_SetColor(1,0);
  ibrowse_SetColor(6,0x8000);
  ibrowse_SetColor(10,0x4000);
  ibrowse_SetColor(0xd,0x8000);
  ibrowse_SetColor(0xf,0xff00);
  ibrowse_SetColor(0x10,0x8000);
  ibrowse_SetColor(0x11,0xc000);
  ibrowse_SetColor(0x12,0x4000);
  ibrowse_SetColor(0x14,0x8000);
  DAT_005927d0 = 0xc;
  DAT_005927d4 = 0x36;
  DAT_005927d8 = 0x274;
  DAT_005927dc = 0x1a8;
  DAT_005927e4 = 3;
  DAT_005927e8 = 2;
  DAT_005927c4 = 1;
  return;
}

