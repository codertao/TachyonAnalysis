
/* S->C 0x1108 handler */

void CliOn_PlayerPortrait(int param_1)

{
  Portrait_Load(param_1,*(undefined2 *)(param_1 + 0xe));
  return;
}

