
/* S->C 0x1102 handler */

void CliOn_MineRemoved(undefined4 *param_1)

{
  Mine_RemoveFromList(&DAT_005b31c0,*param_1);
  return;
}

