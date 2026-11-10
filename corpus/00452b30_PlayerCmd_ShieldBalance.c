
/* POWER_TRANSFER_SHIELD_RTOF (-1, op 2) / FTOR (1, op 1): move 1/8 between pools locally, send
   0x2005 */

void PlayerCmd_ShieldBalance(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_005b1f0c + 0xd0;
  if (param_1 == -1) {
    NetCli_SendPowerOp(2,0);
    uVar1 = Shield_GetMax(&g_PlayerPower,iVar2);
    puVar4 = &DAT_005b20e8;
    puVar3 = &DAT_005b20f0;
  }
  else {
    NetCli_SendPowerOp(1,0);
    uVar1 = Shield_GetMax(&g_PlayerPower,iVar2);
    puVar4 = &DAT_005b20f0;
    puVar3 = &DAT_005b20e8;
  }
  iVar2 = Power_TransferPool(puVar3,puVar4,uVar1);
  if (iVar2 != 0) {
    FUN_00466590(3,3,0,0xff);
  }
  return;
}

