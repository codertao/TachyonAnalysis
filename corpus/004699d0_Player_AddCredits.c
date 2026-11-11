
/* clamped at 0 */

void Player_AddCredits(int param_1)

{
  int iVar1;
  
  iVar1 = Player_GetCredits();
  iVar1 = iVar1 + param_1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  Player_SetCredits(iVar1);
  return;
}

