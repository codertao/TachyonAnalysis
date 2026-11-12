
/* sweep */

undefined4 Gate_MarkUsed(int param_1)

{
  if ((*(byte *)(param_1 + 0xe4) & 1) != 0) {
    return 0;
  }
  Gate_SetVarOnUse(param_1);
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 1;
  return 1;
}

