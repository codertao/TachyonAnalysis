
/* action 7: Nav_SetDestination(arg>>16, arg&0xffff) */

void TrigAct_SetNav(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Nav_SetDestination(param_1 >> 0x10,param_1 & 0xffff,param_4,g_SrvCurConn);
  return;
}

