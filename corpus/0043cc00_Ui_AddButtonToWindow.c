
/* bind button to its window; set image count(+0xc8)/frame(+0xcc)/flags(+0x204) */

void Ui_AddButtonToWindow(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = MnuImage_Find(param_1,param_2 + 0x80);
  *(int *)(param_2 + 0x1e8) = iVar1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x60) == 0) {
      MnuImage_LoadPcxRemapped(param_1,iVar1,*(undefined4 *)(iVar1 + 0x1680),param_4);
    }
    iVar1 = *(int *)(param_2 + 0x1e8);
    *(undefined4 *)(param_2 + 0xc4) = 0;
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(iVar1 + 0x166c);
    *(int *)(param_2 + 0xcc) = *(int *)(iVar1 + 0x1670) / *(int *)(iVar1 + 0x1680);
    *(uint *)(param_2 + 0x204) = *(uint *)(param_2 + 0x204) | param_3;
  }
  return;
}

