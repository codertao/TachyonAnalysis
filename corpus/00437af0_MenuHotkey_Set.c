
/* sweep */

undefined4 MenuHotkey_Set(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MenuHotkey_Find(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = param_2;
  }
  return uVar2;
}

