
/* find button by name, OR flag into button+0x204 */

void Ui_SetButtonFlag(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = Ui_FindButton(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x204) = *(uint *)(iVar1 + 0x204) | param_3;
  }
  return;
}

