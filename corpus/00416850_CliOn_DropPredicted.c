
/* S->C 0x1101 handler */

void CliOn_DropPredicted(undefined4 *param_1)

{
  DcbList_FreeByNetId(DAT_005b31c0,*param_1);
  return;
}

