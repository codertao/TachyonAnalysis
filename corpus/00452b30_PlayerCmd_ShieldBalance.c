
/* POWER_TRANSFER_SHIELD_RTOF (-1, op 2) / FTOR (1, op 1): move 1/8 between pools locally, send
   0x2005 */

void PlayerCmd_ShieldBalance(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_005b1f0c + 0xd0;
  if (param_1 == -1) {
    NetCli_SendPowerOp(2,0);
    uVar1 = Shield_GetMax(&g_PlayerPower,iVar2);
    uVar4 = 0x5b20e8;
    uVar3 = 0x5b20f0;
  }
  else {
    NetCli_SendPowerOp(1,0);
    uVar1 = Shield_GetMax(&g_PlayerPower,iVar2);
    uVar4 = 0x5b20f0;
    uVar3 = 0x5b20e8;
  }
  iVar2 = Power_TransferPool(uVar3,uVar4,uVar1);
  if (iVar2 != 0) {
    FUN_00466590(3,3,0,0xff);
  }
  return;
}

