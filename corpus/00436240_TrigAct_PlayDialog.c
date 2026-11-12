
/* action 2: play SPX dialog[arg] (.SCR actor) from line arg2 */

void TrigAct_PlayDialog(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 local_40 [64];
  
  if (param_1 < *(uint *)(*(int *)(param_4 + 0x54) + 0x58)) {
    iVar1 = *(int *)(*(int *)(param_4 + 0x54) + 0x5c) + param_1 * 0x10;
    Dialog_PlayLine(iVar1,param_2,&DAT_005a5dd0,param_4,0,param_1,param_2,1,0,0);
    if (DAT_005a6730 != 0) {
      str_sprintf(local_40,s_Play_dialog__s__s__03d__0053fa48,iVar1,&DAT_005a5dd0,param_2);
      SrvSend_TextSimple(local_40,0);
    }
  }
  else if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_DIALOG_REF_NUM__d_IS_OUT_OF_SPED_0053fa60,param_1);
    SrvSend_TextSimple(local_40,0);
    return;
  }
  return;
}

