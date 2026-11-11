
/* ops 3 laser->shields, 4 burner->shields, 5 shields->laser, 6 shields->burner; send 0x2005 {op,
   amount} */

void PlayerCmd_PowerTransfer(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_005b1f0c + 0xd0;
  switch(param_1) {
  case 3:
    iVar1 = Power_GetLaserMax(&g_PlayerPower,iVar3);
    iVar2 = iVar1 >> 3;
    if (g_PlayerPower.laserEnergy < iVar1 >> 3) {
      iVar2 = g_PlayerPower.laserEnergy;
    }
    iVar3 = Power_TransferCli(&g_PlayerPower,iVar3,3,iVar2);
    if (iVar3 == 0) {
      return;
    }
    g_PlayerPower.laserEnergy = g_PlayerPower.laserEnergy - iVar2;
    uVar4 = 3;
    break;
  case 4:
    if (((byte)DAT_005b2154 & 4) == 0) {
      return;
    }
    iVar1 = Power_GetBurnerMax(&g_PlayerPower,iVar3);
    iVar2 = iVar1 >> 3;
    if (g_PlayerPower.burnerEnergy < iVar1 >> 3) {
      iVar2 = g_PlayerPower.burnerEnergy;
    }
    iVar3 = Power_TransferCli(&g_PlayerPower,iVar3,4,iVar2);
    if (iVar3 == 0) {
      return;
    }
    g_PlayerPower.burnerEnergy = g_PlayerPower.burnerEnergy - iVar2;
    uVar4 = 4;
    break;
  case 5:
    iVar2 = Shield_GetMax(&g_PlayerPower,iVar3);
    iVar2 = iVar2 >> 4;
    iVar3 = Power_TransferCli(&g_PlayerPower,iVar3,5,iVar2);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = 5;
    break;
  case 6:
    if (((byte)DAT_005b2154 & 4) == 0) {
      return;
    }
    iVar2 = Shield_GetMax(&g_PlayerPower,iVar3);
    iVar2 = iVar2 >> 4;
    iVar3 = Power_TransferCli(&g_PlayerPower,iVar3,6,iVar2);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = 6;
    break;
  default:
    goto switchD_00452bcd_default;
  }
  NetCli_SendPowerOp(uVar4,iVar2);
  FUN_00466590(3,3,0,0xff);
switchD_00452bcd_default:
  return;
}

