
undefined4 FUN_0042dd00(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Cbin_Open(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0042cb60(&DAT_005b01e0);
  FUN_0042c9a0(&DAT_005b01e0);
  FUN_0042ca50(&DAT_005b01e0);
  FUN_0042ce90(&DAT_005b01e0);
  FUN_0042d100(&DAT_005b01e0);
  FUN_0042d2c0(&DAT_005b01e0);
  FUN_0042d3c0(&DAT_005b01e0);
  FUN_0042d490(&DAT_005b01e0);
  FUN_0042d570(&DAT_005b01e0);
  FUN_0042d5d0(&DAT_005b01e0);
  FUN_0042d7e0(&DAT_005b01e0);
  FUN_0042db90(&DAT_005b01e0);
  FUN_0042da10(&DAT_005b01e0);
  Cbin_Close();
  return 1;
}

