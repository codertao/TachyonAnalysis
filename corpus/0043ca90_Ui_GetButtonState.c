
/* button +0x1f8 (8 = disabled, 0x10 = hover) */

undefined4 Ui_GetButtonState(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Ui_FindButton(param_1,param_2);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x1f8);
  }
  return 0xffffffff;
}

