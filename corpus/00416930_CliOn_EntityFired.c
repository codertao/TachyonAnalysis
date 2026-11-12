
/* S->C 0x1103 handler */

void CliOn_EntityFired(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 != 0) {
    RemoteFire_Setup(iVar1,0,*(undefined2 *)(param_1 + 2),param_1[1]);
  }
  return;
}

