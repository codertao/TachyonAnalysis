
/* sweep: guess */

void Player_TickCountdown(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    iVar1 = *(int *)(param_1 + 0x108) + -1;
    *(int *)(param_1 + 0x108) = iVar1;
    Ship_SpawnDamageSmoke(param_1,DAT_005b1f0c + 0x598,0,iVar1);
  }
  return;
}

