
/* sweep */

void Voice_RemovePlayer(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if ((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) {
    NetDrv_GetPlayerIPAddress(*(undefined4 *)(param_1 + 0xc),&param_1);
    netcomm_RemovePlayer(*(undefined4 *)(iVar1 + 8),param_1);
  }
  return;
}

