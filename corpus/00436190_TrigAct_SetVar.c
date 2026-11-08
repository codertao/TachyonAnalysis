
/* action 1/0: var(arg) = arg2 */

void TrigAct_SetVar(uint param_1,undefined4 param_2)

{
  Var_SetAndNotify(param_1 >> 0x10,param_1 & 0xffff,param_2);
  return;
}

