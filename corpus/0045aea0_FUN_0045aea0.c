
undefined4 FUN_0045aea0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_1;
  iVar2 = Cbin_Open(param_1);
  if (iVar2 == 0) {
    FUN_00432ee0(uVar1,s_scene_Load_00549314);
    return 0;
  }
  FUN_0048e3d0(&param_1,0x14c,4,s_SCENE_0054930c,0xcccc);
  FUN_00458c70(param_1);
  FUN_004592e0(param_1);
  FUN_00459210(param_1);
  FUN_00459550(param_1);
  FUN_004596f0(param_1);
  FUN_0045a680(param_1);
  FUN_0045ad90(param_1);
  FUN_0045adf0(param_1);
  Cbin_Close();
  return param_1;
}

