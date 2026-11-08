
/* S->C 0x1114 handler */

void CliOn_Allegiance(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = Dcb_FindById(*param_1);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x8c) != 0)) &&
     (pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x38), pcVar1 != (code *)0x0)) {
    (*pcVar1)(iVar2,8,*(undefined2 *)(param_1 + 1));
  }
  return;
}

