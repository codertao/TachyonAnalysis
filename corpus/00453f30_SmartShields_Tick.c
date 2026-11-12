
/* SMART_SHIELDS (system 0x4000): every 32 frames shield rate 2.0/1.5/1.0 by avg <50%/<75%,
   rebalance pools when one < half the other */

void SmartShields_Tick(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_005b1f0c + 0xd0;
  if ((DAT_005b2154 & 0x4000) == 0) {
    return;
  }
  if (((byte)DAT_005b3304 & 0x1f) != 0) {
    return;
  }
  iVar2 = Shield_GetMax(&g_PlayerPower,iVar1);
  iVar3 = g_PlayerPower.shieldRear + g_PlayerPower.shieldFront >> 1;
  if (iVar3 < iVar2 >> 1) {
    iVar2 = Power_GetRate(&g_PlayerPower,0);
    if (iVar2 == 0x20000) goto LAB_00454009;
    uVar4 = 0x20000;
  }
  else if (iVar3 < (iVar2 >> 2) + (iVar2 >> 1)) {
    iVar2 = Power_GetRate(&g_PlayerPower,0);
    if (iVar2 == 0x18000) goto LAB_00454009;
    uVar4 = 0x18000;
  }
  else {
    if ((iVar2 <= iVar3) || (iVar2 = Power_GetRate(&g_PlayerPower,0), iVar2 == 0x10000))
    goto LAB_00454009;
    uVar4 = 0x10000;
  }
  Power_SetRate(&g_PlayerPower,uVar4,0,iVar1);
  Snd_Play2D(3,3,0,0xff);
LAB_00454009:
  if (g_PlayerPower.shieldRear >> 1 <= g_PlayerPower.shieldFront) {
    if (g_PlayerPower.shieldRear < g_PlayerPower.shieldFront >> 1) {
      PlayerCmd_ShieldBalance(1);
    }
    return;
  }
  PlayerCmd_ShieldBalance(0xffffffff);
  return;
}

