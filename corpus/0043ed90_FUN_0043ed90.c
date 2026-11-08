
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ed90(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((((param_2 != 0) && (DAT_005a548c != '\0')) && (DAT_005a5480 != 0)) &&
     (iVar2 = str_cmp(&DAT_005a548c,param_2), iVar2 == 0)) {
    return;
  }
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0043a7a0(param_1,param_2);
  }
  if (DAT_00564ae4 == 0) {
    FUN_0049e440(0);
    FUN_004a4420(FUN_0043e980);
    FUN_004a4430(&LAB_0043ea60);
    if (DAT_006022f4 == 1) {
      FUN_0043ed80();
      FUN_0049e410();
      return;
    }
  }
  else {
    FUN_0049e440(&LAB_0043ecb0);
  }
  FUN_0043efa0();
  FUN_0049e3f0();
  if (iVar2 != 0) {
    FUN_00439f70(param_1,iVar2);
    FUN_00439cc0(param_1,iVar2,*(undefined4 *)(iVar2 + 0x1680),0);
    FUN_0043eff0();
    iVar1 = *(int *)(iVar2 + 0x60);
    if (iVar1 != 0) {
      DAT_005a5480 = iVar1;
      if (DAT_005a5484 != 0) {
        OurFreeMem(DAT_005a5484);
      }
      str_sprintf(&DAT_005a548c,param_2);
      DAT_005a54ec = *(undefined4 *)(iVar2 + 0x166c);
      DAT_005a54f0 = *(int *)(iVar2 + 0x1670) / param_3;
      DAT_005a54d0 = *(int *)(iVar2 + 0x1664);
      _DAT_005a54d4 = *(int *)(iVar2 + 0x1668);
      _DAT_005a5488 = DAT_005a5480;
      DAT_005a54f4 = DAT_00603e40;
      _DAT_005a54cc = DAT_0060448c;
      DAT_005a54d8 = param_3;
      DAT_005a54e0 = param_4;
      DAT_005a54dc = 0;
      DAT_005a54e4 = 0;
      DAT_005a54f8 = DAT_00603e44;
      FUN_0048e3a0(&DAT_005a5484,DAT_0060448c * _DAT_005a54d4 * DAT_005a54d0,4,
                   s_XCursor_scratch_0053fec4,0xa000);
      DAT_005a5504 = 1;
    }
  }
  return;
}

