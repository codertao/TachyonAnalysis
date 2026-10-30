
void FUN_00480020(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043fa70(DAT_00571280,param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xd4) != 0)) {
    Ui_RefreshWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0,iVar1 + 0xc4,0);
    FUN_0043f650(DAT_00571280,param_1,param_2 - (*(int *)(*(int *)(iVar1 + 0xd4) + 0x166c) >> 1),
                 param_3 - (*(int *)(*(int *)(iVar1 + 0xd4) + 0x1670) >> 1));
  }
  return;
}

