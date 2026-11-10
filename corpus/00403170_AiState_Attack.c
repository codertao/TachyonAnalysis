
/* state 1 think: acquire target if none, then AiThink_Approach */

void AiState_Attack(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    if (*(int *)(param_1 + 0x90) == 0) {
      iVar1 = Ai_FindTarget(param_1);
      *(int *)(param_1 + 0x90) = iVar1;
      *(undefined1 *)(param_1 + 0x326) = 0;
      *(undefined4 *)(param_1 + 0x328) = 0;
      if (iVar1 == 0) {
        Ai_ReturnToDefault(param_1);
        return;
      }
      *(short *)(iVar1 + 200) = *(short *)(iVar1 + 200) + 1;
    }
    *(code **)(param_1 + 0x304) = AiThink_Approach;
  }
  return;
}

