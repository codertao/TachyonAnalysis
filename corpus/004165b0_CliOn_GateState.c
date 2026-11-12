
/* S->C 0x1009 handler */

void CliOn_GateState(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 != 0) {
    Gate_SetStateClient(iVar1,*(undefined2 *)(param_1 + 1),*(undefined2 *)((int)param_1 + 6));
  }
  return;
}

