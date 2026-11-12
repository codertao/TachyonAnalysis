
/* sweep */

void Cargo_MsgArrived(undefined4 param_1)

{
  int iVar1;
  undefined1 local_c0 [64];
  undefined1 local_80 [128];
  
  Ent_FormatGroupField(param_1,1,local_c0);
  iVar1 = Rtxt_GetText(DAT_005a6140,0x65);
  if (iVar1 != 0) {
    str_sprintf(local_80,iVar1,local_c0);
    SrvSend_TextSimple(local_80,1);
  }
  return;
}

