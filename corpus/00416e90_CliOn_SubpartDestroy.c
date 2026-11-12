
/* S->C 0x1126 handler */

void CliOn_SubpartDestroy(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 != 0) {
    CliBase_DestroySubpart(iVar1,*(undefined2 *)(param_1 + 1));
  }
  return;
}

