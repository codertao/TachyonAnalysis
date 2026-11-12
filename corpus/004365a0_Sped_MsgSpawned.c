
/* sweep: text #0x5e */

void Sped_MsgSpawned(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_c0 [64];
  undefined1 local_80 [128];
  
  uVar1 = Rtxt_GetText(DAT_005a6140,0x5e);
  if (param_2 < 2) {
    str_sprintf(local_80,uVar1,param_2,param_3);
  }
  else {
    str_sprintf(local_c0,&PTR_DAT_0053fac8,param_3);
    str_sprintf(local_80,uVar1,param_2,local_c0);
  }
  __strupr(local_80);
  SrvSend_TextMsg(local_80,1,0,0,0,param_1,0xffffffff);
  return;
}

