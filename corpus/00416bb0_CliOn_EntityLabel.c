
/* S->C 0x1113 handler */

void CliOn_EntityLabel(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 != 0) {
    uVar2 = EntityLabel_Store(param_1 + 1);
    *(undefined4 *)(iVar1 + 0x118) = uVar2;
  }
  return;
}

