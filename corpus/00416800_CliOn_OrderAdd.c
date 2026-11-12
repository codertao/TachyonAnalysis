
/* S->C 0x1016 handler */

void CliOn_OrderAdd(undefined2 *param_1)

{
  Orders_AddFromNet(param_1 + 4,*param_1,param_1[1],*(undefined4 *)(param_1 + 2));
  return;
}

