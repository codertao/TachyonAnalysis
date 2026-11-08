
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetCommandLineA; NLSTATS etc. */

void CmdLine_Dispatch(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_005a67a0;
  for (iVar2 = 0x22; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  to_uppercase(param_1);
  DAT_005b8f48 = 0;
  FUN_00433130(param_1);
  iVar2 = FUN_00432b70(1);
  if (iVar2 != 0) {
    CmdLine_ParseSwitches(param_1);
    DAT_005a68a0 = FUN_004a5ad0();
    FUN_00490180();
    pcVar1 = _strstr(param_1,s_NLSTATS_0053f42c);
    if (pcVar1 != (char *)0x0) {
      DAT_0053f288 = 1;
    }
    FUN_004b1c70(0x9c4);
    FUN_0049f5b0(0);
    _g_FlightStateFlags = 7;
    if (DAT_00562bc8 == 0) {
      StateMachine_Run(&g_Mode_TitleMenu);
    }
    else {
      FUN_0042f320(0);
      StateMachine_Run(&g_Mode_InFlight);
    }
    snapshot_to_spacesav();
    FUN_004a5b50(DAT_005a68a0);
  }
  FUN_0049e7b0();
  FUN_004a4bd0(0x280,0x1e0,1,0x280,0x1e0);
  FUN_0049e410();
  FUN_00451e60();
  FUN_004a2970();
  if (DAT_005a6620 == 0) {
    FUN_0044e960();
    return;
  }
  return;
}

