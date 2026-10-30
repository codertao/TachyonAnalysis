
void FUN_00440b40(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[0x1f] != 0)) {
    if ((code *)param_1[0x33] != (code *)0x0) {
      (*(code *)param_1[0x33])();
    }
    if (param_1[0x22] == 0) {
      iVar1 = param_1[0x1b];
    }
    else {
      iVar1 = 0xff - param_1[0x1b];
    }
    FUN_0043a470(param_1[0x1e],param_1[5],param_1[6],param_1[0xf],param_1[0x10],0x32000008,iVar1);
    Ui_RefreshWindow(*param_1,param_1 + 0x23,0,0);
    if (param_1[0x20] != 0) {
      param_1[0x1f] = 0;
      if ((code *)param_1[0x21] != (code *)0x0) {
        (*(code *)param_1[0x21])();
      }
    }
  }
  return;
}

