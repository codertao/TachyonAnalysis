
/* no target: wingman -> DEFEND(13)/FOLLOW(4); has leader -> FOLLOW; has route -> ROUTE(5); else
   FREE(0) */

void Ai_ReturnToDefault(int param_1)

{
  if (param_1 == g_Wingman) {
    if (*(int *)(param_1 + 0x354) != 0) {
      Ai_SetState(param_1,0xd);
      return;
    }
LAB_00401e5d:
    Ai_SetState(param_1,4);
    return;
  }
  if (*(int *)(param_1 + 0xf8) == 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(param_1 + 0xf0) != 0) {
      Ai_SetState(param_1,5);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(*(int *)(param_1 + 0xf8) + 0x104) == 5) goto LAB_00401e5d;
  }
  Ai_SetState(param_1,0);
  return;
}

