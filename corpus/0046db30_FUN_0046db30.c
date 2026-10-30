
void FUN_0046db30(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0046dd30(0,0);
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 != 0)) &&
     (param_3 != (undefined4 *)0x0)) {
    FUN_0043f620(DAT_005879a0,*param_2 + 0xcc,0x20000);
    *param_3 = 0;
    *param_2 = param_1;
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(*param_2 + 0xa8) = *(undefined4 *)(*param_2 + 0xa4);
    *(undefined4 *)(*param_2 + 0xb4) = *(undefined4 *)(*param_2 + 0xb0);
    *(undefined4 *)(*param_2 + 0xbc) = *(undefined4 *)(*param_2 + 0xb8);
    *(undefined4 *)(*param_2 + 0x84) = *(undefined4 *)(*param_2 + 0x80);
    if (*(int *)(*param_2 + 0xc4) != 0) {
      FUN_0048b6f0(0);
      Ui_RefreshWindow(DAT_005879a0,param_4,0,0);
    }
    iVar1 = *param_2;
    if (*(int *)(iVar1 + 200) != 0) {
      FUN_0043f650(DAT_005879a0,iVar1 + 0xcc,*(undefined4 *)(iVar1 + 0x118),
                   *(undefined4 *)(iVar1 + 0x11c));
      FUN_0043f840(DAT_005879a0,*param_2 + 0xcc,0x20000);
    }
  }
  return;
}

