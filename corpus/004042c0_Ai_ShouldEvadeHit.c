
/* per-hit evade roll by skill: R 5/8, V 5/32, A/E 5/16 or tail-check */

undefined4 Ai_ShouldEvadeHit(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  if (*(code **)(param_1 + 0x304) == Dcb_Think_AiShip) {
    return 0;
  }
  if (*(int *)(param_1 + 0x104) == 0xb) {
    return 0;
  }
  if (*(code **)(param_1 + 0x304) == AiThink_Jink) {
    return 0;
  }
  if (*(char *)(param_1 + 0x325) != '\0') {
    return 0;
  }
  Shield_GetMax(param_1 + 0x10c,iVar2 + 0xd0);
  switch(*(undefined2 *)(param_1 + 0x310)) {
  case 0:
    bVar1 = global_bad_shift_rng();
    bVar1 = bVar1 & 7;
    break;
  case 1:
    bVar1 = global_bad_shift_rng();
    bVar1 = bVar1 & 0x1f;
    break;
  case 2:
    if (*(int *)(iVar2 + 0xe0) * 4 < *(int *)(param_1 + 0x114)) {
      if (param_2 == 0) {
        return 0;
      }
      bVar1 = global_bad_shift_rng();
      if (4 < (bVar1 & 0xf)) {
        return 0;
      }
      iVar2 = Ai_IsBehind(param_2,param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      return 1;
    }
    goto LAB_00404393;
  case 3:
    if (*(int *)(iVar2 + 0xf0) <= *(int *)(param_1 + 0x130)) {
      if (param_2 == 0) {
        return 0;
      }
      bVar1 = global_bad_shift_rng();
      if (4 < (bVar1 & 7)) {
        return 0;
      }
      iVar2 = Ai_IsBehind(param_2,param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      return 1;
    }
LAB_00404393:
    bVar1 = global_bad_shift_rng();
    bVar1 = bVar1 & 0xf;
    break;
  default:
    goto switchD_0040432b_default;
  }
  if (bVar1 < 5) {
    return 1;
  }
switchD_0040432b_default:
  return 0;
}

