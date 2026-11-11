
/* clamped at 0 */

void Player_AddVarInt(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = Player_GetVarInt(param_1,param_2);
  iVar1 = iVar1 + param_3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  Player_SetVarInt(param_1,param_2,iVar1);
  return;
}

