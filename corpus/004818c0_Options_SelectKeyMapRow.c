
/* sweep: guess */

void Options_SelectKeyMapRow(int param_1)

{
  int *piVar1;
  undefined1 local_20 [32];
  
  if (DAT_00563d5c < (uint)(DAT_00563d60 + param_1)) {
    DAT_00563d6c = 0;
    return;
  }
  piVar1 = (int *)Rtxt_Lookup(DAT_00563d68,s_remap_messages_00556db8,s_ESC_CANCELS_00556dc8);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    Ui_SetLabelText(DAT_00571280,s_TxtOptP4MsgTxt_00556da8,*piVar1);
  }
  str_sprintf(local_20,s_BtnOptP4KeyMap__2d_00556d94,param_1);
  Ui_SetButtonLabelText(DAT_00571280,local_20,&DAT_00562b14);
  DAT_00563d70 = param_1;
  DAT_00563d6c = 1;
  DAT_00562bd0 = 1;
  Ui_SetVar2bd4(1);
  set_button_state(DAT_00571280,local_20,0x10);
  Ui_RefreshWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0,0,0);
  return;
}

