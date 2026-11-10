
/* state 14: fly to base at throttle 0x300, dock within 500 */

void AiState_ReturnToBase(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    Ai_ReturnToDefault(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  *(undefined2 *)(param_1 + 0x312) = 0x300;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    iVar2 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar1 + 0x34));
    if (iVar2 < 0x1f4000) {
      FUN_004996f0(param_1,iVar1);
    }
    FUN_0040f380((vec3 *)(param_1 + 0x34),(vec3 *)(iVar1 + 0x34),param_1 + 0xdc);
  }
  return;
}

