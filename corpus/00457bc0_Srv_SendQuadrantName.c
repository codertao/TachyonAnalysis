
/* sweep */

void Srv_SendQuadrantName(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_80 [128];
  
  uVar1 = Sector_GetQuadrantName(param_1);
  uVar1 = Rtxt_GetText(DAT_005a6140,0x5d,uVar1);
  str_sprintf(local_80,s__s___s__00548d54,uVar1);
  __strupr(local_80);
  SrvSend_TextMsg(local_80,1,4,g_SrvCurConn,0,0,0xffffffff);
  return;
}

