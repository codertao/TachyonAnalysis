
/* sweep: space + enter */

void MenuHotkey_SetAccept(undefined4 param_1)

{
  MenuHotkey_Set(0x20,param_1);
  MenuHotkey_Set(0xd,param_1);
  return;
}

