
/* pump + 3D scene tick + Ui_Update + per-frame hook */

undefined4 Shipyard_Update(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Shipyard_UpdateCamera();
    Shipyard_AnimateBays();
    Shipyard_HandleMouse();
    Ui_Update(&GLBL_UI_ELEM_LIST);
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

