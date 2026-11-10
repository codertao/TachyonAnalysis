
/* state +0x104 -> name from state table +0x33c (stride 0x10, +8 name) */

char * Ai_StateName(int param_1)

{
  if (0xe < *(uint *)(param_1 + 0x104)) {
    return s_UNKOWN_STATE_0053259c;
  }
  return *(char **)(*(int *)(param_1 + 0x33c) + 8 + *(uint *)(param_1 + 0x104) * 0x10);
}

