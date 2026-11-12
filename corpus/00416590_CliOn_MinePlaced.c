
/* S->C 0x1008 handler */

void CliOn_MinePlaced(int param_1)

{
  Mine_SpawnClientWrap(param_1,*(undefined2 *)(param_1 + 0xc));
  return;
}

