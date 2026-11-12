
/* sweep */

undefined4 SbOptions_Tick(void)

{
  if ((DAT_0056c480 != 0) && (DAT_005a4b4c == 0)) {
    SbOptions_ZoomOut();
  }
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    if (DAT_00563d6c != 0) {
      Options_PollKeyRemap();
    }
    Ui_Update(DAT_00571280);
    Options_UpdateVoiceMeter();
    Options_HitTestSliders();
    DAT_005711d4 = DAT_005711d4 + -0x10000;
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

