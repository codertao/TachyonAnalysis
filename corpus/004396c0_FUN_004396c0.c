
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004396c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  _DAT_005a4b3c = 0;
  _DAT_005a4314 = 0;
  FUN_00437e00(param_2);
  FUN_0048e3d0(param_2,0,4,s_Menu_Sentinel_0053fd54,0xa000);
  FUN_00437b80();
  FUN_00440c60();
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
    OurFreeMem(DAT_005a4300);
  }
  FUN_0048e3d0(&DAT_005a4300,0x10000,4,s_mnu_FontLine_Buffer_0053fe3c,0xa000);
  FUN_0049eca0();
  Cbin_Close();
  return 1;
}

