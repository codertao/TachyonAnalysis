
/* sweep */

void Loading_Draw(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  Mnu_FindText(&g_UiManager,s_LOAD_LOADING_MSG_00541158);
  uVar4 = DAT_005a67cc;
  uVar3 = DAT_005a67c8;
  uVar2 = DAT_005a67c4;
  uVar1 = DAT_005a67c0;
  Gfx_UnlockSurface();
  Viewport_SetScaled(0,0,0x27f,0x1df,1);
  copy_str32_to_some_global(&DAT_005a67a0);
  Ui_PresentFrame();
  Ui_DrawAllMain();
  Gfx_Flip();
  Gfx_UnlockSurface();
  Viewport_Set(uVar1,uVar2,uVar3,uVar4,1);
  copy_str32_to_some_global(&DAT_005a67a0);
  Loading_SetDone();
  return;
}

