
/* action 1/1,1/2: var(arg) += arg2 * extra(+1/-1) */

void TrigAct_AddVar(uint param_1,int param_2,int param_3)

{
  Var_AddAndNotify(param_1 >> 0x10,param_1 & 0xffff,param_2 * param_3);
  return;
}

