
/* sweep */

void KeyCfg_Load(int param_1)

{
  KeyCfg_LoadDefaults();
  KeyCfg_LoadActions(&DAT_005b0060,0);
  if (param_1 != 0) {
    if (DAT_006038b4 == 0) {
      File_SetBypassPff();
      KeyCfg_LoadActions(param_1,1);
      File_SetBypassPff(0);
      return;
    }
    KeyCfg_LoadActions(param_1,1);
  }
  return;
}

