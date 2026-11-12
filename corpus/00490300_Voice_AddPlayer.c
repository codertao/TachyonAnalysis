
/* sweep */

void Voice_AddPlayer(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if ((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) {
    if (*(int *)(param_1 + 0xc) == 0) {
      netcomm_AddPlayer(*(undefined4 *)(param_1 + 8),DAT_0056588c,DAT_00565888);
      return;
    }
    NetDrv_GetPlayerIPAddress(*(int *)(param_1 + 0xc),&param_1);
    netcomm_AddPlayer(*(undefined4 *)(iVar1 + 8),param_1,*(undefined2 *)(iVar1 + 0xc4));
  }
  return;
}

