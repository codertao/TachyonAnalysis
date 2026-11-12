
/* sweep: flags 2|0x200 + refresh */

void Ui_OpenWindow(undefined4 param_1,undefined4 param_2)

{
  Ui_SetWindowFlags(param_1,param_2,2);
  Ui_SetWindowFlags(param_1,param_2,0x200);
  Ui_RefreshWindow(param_1,param_2,0,0);
  return;
}

