
/* sweep */

void Mnu_ShutdownKeepGfx(undefined4 *param_1)

{
  Audio_StopAllSamples();
  KeyRepeat_Reset();
  KeyRepeat_Init(&DAT_005a6160);
  Mnu_FreeAll(param_1);
  Mem_FreeTag(0xa000);
  *param_1 = 0;
  Ui_FreeCursorGfx();
  return;
}

