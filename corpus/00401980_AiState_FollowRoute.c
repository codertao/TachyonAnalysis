
/* state 5: throttle +0x108 or 0x3cc; waypoint within 1000; acquires target -> ATTACK */

void AiState_FollowRoute(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x108) == 0) {
    *(undefined2 *)(param_1 + 0x312) = 0x3cc;
  }
  else {
    *(short *)(param_1 + 0x312) = (short)*(int *)(param_1 + 0x108);
  }
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    uVar1 = distance_between((vec3 *)(param_1 + 0x34),*(vec3 **)(param_1 + 0xf0));
    if ((uVar1 < 0x3e8000) &&
       (Nav_ReachedWaypoint(param_1,param_1 + 0xdc),
       *(code **)(param_1 + 0x304) != AiState_FollowRoute)) {
      return;
    }
    Vec_DirAngles((vec3 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0xf0),param_1 + 0xdc);
    if (*(int *)(param_1 + 0x90) == 0) {
      iVar2 = Ai_FindTarget(param_1);
      *(int *)(param_1 + 0x90) = iVar2;
      *(undefined4 *)(param_1 + 0x328) = 0;
      if (iVar2 != 0) {
        *(short *)(iVar2 + 200) = *(short *)(iVar2 + 200) + 1;
        Ai_SetState(param_1,1);
        Ai_RejoinFormation(param_1);
      }
    }
  }
  return;
}

