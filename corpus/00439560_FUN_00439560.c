
undefined4 FUN_00439560(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_004524d0(0);
  FUN_00410760(0);
  FUN_00437ca0(param_2);
  iVar1 = Cbin_Open_Inner(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00438870(param_2);
  FUN_004391e0(param_2);
  FUN_00437e40(param_2);
  FUN_00438ad0(param_2);
  FUN_00438bd0(param_2);
  FUN_004380a0(param_2);
  FUN_00438e10(param_2);
  FUN_004383b0(param_2);
  FUN_00438ff0(param_2);
  FUN_004381d0(param_2);
  FUN_004393e0(param_2);
  if (DAT_005a4300 != 0) {
    FUN_0049c530(DAT_005a4300);
  }
  FUN_0048e3d0(&DAT_005a4300,0x10000,4,s_mnu_FontLine_Buffer_0053fe3c,0xa000);
  Cbin_Close();
  return 1;
}

