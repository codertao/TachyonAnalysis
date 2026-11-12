
/* state 13: attack anything targeting the protected entity, else follow it */

void AiState_Defend(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0x354);
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      Ai_ReturnToDefault(param_1);
      return;
    }
  }
  else {
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x90) == iVar2) {
        *(code **)(param_1 + 0x304) = AiThink_Approach;
        return;
      }
      *(short *)(iVar1 + 200) = *(short *)(iVar1 + 200) + -1;
      *(undefined4 *)(param_1 + 0x90) = 0;
      return;
    }
    uVar3 = *(undefined4 *)(*(int *)(g_Wingman + 0x8c) + 0x56c);
    *(undefined4 *)(*(int *)(g_Wingman + 0x8c) + 0x56c) =
         *(undefined4 *)((uint)*(byte *)(g_Wingman + 0xc2) * 0x10 + 4 + DAT_0058f2e8);
    for (iVar1 = **(int **)(iVar2 + 100);
        (iVar1 != 0 &&
        (((*(int *)(iVar1 + 0x90) != iVar2 ||
          ((*(uint *)((uint)*(byte *)(iVar1 + 0xc2) * 0x10 + DAT_0058f2e8) &
           *(uint *)(*(int *)(g_Wingman + 0x8c) + 0x56c)) == 0)) ||
         ((*(byte *)(iVar1 + 0xd0) & 0x4f) == 0)))); iVar1 = *(int *)(iVar1 + 8)) {
    }
    *(undefined4 *)(*(int *)(g_Wingman + 0x8c) + 0x56c) = uVar3;
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x90) = iVar1;
      *(code **)(param_1 + 0x304) = AiThink_Approach;
      return;
    }
    Wingman_FlyFormation(param_1,iVar2);
  }
  return;
}

