
/* sweep */

void Order_GetSpecialText(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined1 local_40 [64];
  
  pcVar1 = (char *)Rtxt_GetText(DAT_005a5dc8,param_1);
  if ((pcVar1 == (char *)0x0) && (pcVar1 = s_UNKOWN_TEXT_ITEM_00548718, DAT_005a6730 != 0)) {
    str_sprintf(local_40,s_SPECIAL_TEXT_ID__d_IS_OUT_OF_ARR_005486ec,param_1);
    SrvSend_TextSimple(local_40,0);
  }
  Str_CountLines(param_2,pcVar1,0x60);
  return;
}

