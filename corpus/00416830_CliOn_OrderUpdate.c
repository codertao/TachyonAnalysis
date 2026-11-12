
/* S->C 0x1017 handler */

void CliOn_OrderUpdate(undefined2 *param_1)

{
  Orders_UpdateFromNet(*param_1,param_1[1]);
  return;
}

