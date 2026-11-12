
/* sweep */

undefined4 WingCmd_IsAvailable(undefined2 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
    if (g_Wingman != 0) {
      uVar1 = Wingman_GetPlayerTarget();
      return uVar1;
    }
    break;
  case 2:
    if (g_Wingman != 0) {
      uVar1 = Wingman_CanAttackTarget();
      return uVar1;
    }
    break;
  case 3:
    if (g_Wingman != 0) {
      uVar1 = Wingman_CanProtect();
      return uVar1;
    }
    break;
  case 4:
    if (g_Wingman != 0) {
      uVar1 = TargetRule_Any();
      return uVar1;
    }
    break;
  case 5:
    if (g_Wingman != 0) {
      uVar1 = TargetRule_Any();
      return uVar1;
    }
    break;
  case 6:
    if (g_Wingman != 0) {
      uVar1 = Wingman_InOtherQuadrant();
      return uVar1;
    }
  }
  return 0;
}

