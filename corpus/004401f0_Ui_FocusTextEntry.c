
/* sweep: guess */

void Ui_FocusTextEntry(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = Ui_FindTextEntry(param_1,param_2);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x9c) != 0)) && (*(int *)(iVar2 + 0xa0) != 0)) {
    *(undefined4 *)(iVar2 + 0x98) = 1;
    Menu_SetHotkeysDisabled(1);
    *(undefined4 *)(*(int *)(iVar2 + 0xa0) + 0x120) = 2;
    puVar1 = (uint *)(*(int *)(iVar2 + 0xa0) + 0x11c);
    *puVar1 = *puVar1 | 2;
    _strncpy((char *)&DAT_005a4b60,*(char **)(iVar2 + 0xa4),0x100);
  }
  return;
}

