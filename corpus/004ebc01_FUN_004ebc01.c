
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ebc01(int param_1,byte param_2)

{
  undefined4 in_EAX;
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar2;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  undefined4 unaff_EBX;
  
  if (GLBL_some_str != 0) {
    DAT_004eba68 = *(undefined4 *)(&DAT_005a63c0 + (uint)param_2 * 4);
    DAT_004eba64 = *(undefined4 *)(&DAT_005a6440 + (uint)param_2 * 4);
    DAT_004eba6c = *(undefined4 *)(&DAT_005a6340 + (uint)param_2 * 4);
    _DAT_004eba58 = in_EAX;
    _DAT_004eba5c = unaff_EBX;
    DAT_004eba60 = param_1;
    DAT_004eba70 = param_2;
    if (DAT_00604488 == 0x10) {
      iVar1 = FUN_004ebb89();
      iVar2 = extraout_ECX;
    }
    else if (DAT_00604488 == 0x20) {
      iVar1 = FUN_004ebbc5();
      iVar2 = extraout_ECX_00;
    }
    else {
      iVar1 = FUN_004ebb4d();
      iVar2 = extraout_ECX_01;
    }
    while (iVar1 <= param_1) {
      if (-1 < iVar2) {
        param_1 = param_1 + -1;
      }
      if (DAT_00604488 == 0x10) {
        iVar1 = FUN_004ebb89();
        iVar2 = extraout_ECX_02;
      }
      else if (DAT_00604488 == 0x20) {
        iVar1 = FUN_004ebbc5();
        iVar2 = extraout_ECX_03;
      }
      else {
        iVar1 = FUN_004ebb4d();
        iVar2 = extraout_ECX_04;
      }
    }
    return;
  }
  return;
}

