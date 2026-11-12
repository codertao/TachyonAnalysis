
/* sweep */

void Sector_InitTriggerVarConds(int param_1)

{
  Trig_InitVarConds(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 4),param_1);
  Trig_InitVarConds(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 8),param_1);
  return;
}

