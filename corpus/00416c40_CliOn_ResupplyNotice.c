
/* S->C 0x1117 handler */

void CliOn_ResupplyNotice(undefined2 *param_1)

{
  Resupply_ApplyNotice(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}

