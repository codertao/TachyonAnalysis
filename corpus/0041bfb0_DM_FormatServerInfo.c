
/* sweep: "REGION=%s MAX_KILLS=%d POWERUPS=%d" */

void DM_FormatServerInfo(undefined4 param_1)

{
  undefined1 local_40 [64];
  
  MpRegion_Hash(local_40);
  str_sprintf(param_1,s_REGION__s_MAX_KILLS__d_POWERUPS__00534c3c,local_40,GLBL_spacesav[0x62],
              GLBL_spacesav[0x5a]);
  return;
}

