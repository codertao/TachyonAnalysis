
/* camera/follow; ticks collision cooldown 0x5b2118 */

void PlayerDcb_PostThinkCamera(int param_1)

{
  int iVar1;
  
  FUN_00453970();
  FUN_00453ab0(param_1);
  FUN_00453c40(param_1);
  FUN_00453ca0(param_1);
  FUN_00453cd0(param_1);
  FUN_004249c0(param_1);
  FUN_00424970();
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
  }
  FUN_00453d20(iVar1);
  FUN_00453ed0(param_1);
  FUN_00453f30(param_1);
  if (DAT_005b8f58 != 0) {
    FUN_00456170(&DAT_005b20e0,DAT_005b8f58,0xc);
  }
  if (DAT_005b2118 != 0) {
    DAT_005b2118 = DAT_005b2118 + -1;
  }
  return;
}

