
/* S->C 0x1011 handler */

void CliOn_Despawn(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 != 0) {
    Replica_Despawn(iVar1);
  }
  return;
}

