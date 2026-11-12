
/* S->C 0x1013 handler */

void CliOn_PlayNamedSound(undefined2 *param_1)

{
  Dialog_PlayNamed(param_1 + 1,param_1 + 8,*param_1,*(undefined4 *)(param_1 + 0x18));
  return;
}

