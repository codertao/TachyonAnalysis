
/* S->C 0x1107 handler */

void CliOn_TeamShipDesc(int param_1)

{
  Desc_CreateByType(param_1,&param_1,0,0,1,*(undefined2 *)(param_1 + 0xe));
  return;
}

