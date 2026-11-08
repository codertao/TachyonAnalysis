
/* S->C 0x1125 handler */

void CliOn_SubpartAttach(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 != 0) {
    FUN_0040b2c0(iVar1,*(undefined2 *)(param_1 + 2),param_1[1]);
  }
  return;
}

