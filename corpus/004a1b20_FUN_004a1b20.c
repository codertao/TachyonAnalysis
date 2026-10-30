
void FUN_004a1b20(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 * 2;
  iVar1 = param_2 * 4;
  iVar2 = param_2 * 8;
  if ((param_1 & 0xffff) == 0xffff) {
    FUN_004a1ce0(param_2);
    FUN_004a1ce0(param_2);
    FUN_004a1ce0(iVar2);
    FUN_004a1ce0(iVar3);
    FUN_004a1ce0(iVar1);
    return;
  }
  FUN_004a1cc0();
  if (0x898 < (int)param_1) {
    if ((int)param_1 < 0x1a91) {
      FUN_004a1cc0(param_2);
    }
    else {
      if (0x2bc0 < (int)param_1) {
        if ((int)param_1 < 0x3a99) {
          FUN_004a1ce0(param_2);
          FUN_004a1cc0(iVar3);
          FUN_004a1ce0(iVar1);
          FUN_004a1cc0(iVar2);
          return;
        }
        if ((int)param_1 < 0x4ee9) {
          FUN_004a1ce0(param_2);
          FUN_004a1cc0(iVar3);
          FUN_004a1ce0(iVar1);
          FUN_004a1ce0(iVar2);
          return;
        }
        if ((int)param_1 < 0x60e1) {
          FUN_004a1ce0(param_2);
          FUN_004a1cc0(iVar3);
          FUN_004a1cc0(iVar1);
          FUN_004a1ce0(iVar2);
          return;
        }
        if ((int)param_1 < 0x7211) {
          FUN_004a1ce0(param_2);
        }
        else {
          if (0x8408 < (int)param_1) goto LAB_004a1b62;
          FUN_004a1cc0(param_2);
        }
        FUN_004a1ce0(iVar3);
        FUN_004a1cc0(iVar1);
        FUN_004a1ce0(iVar2);
        return;
      }
      FUN_004a1ce0(param_2);
    }
    FUN_004a1ce0(iVar3);
    FUN_004a1ce0(iVar1);
    FUN_004a1cc0(iVar2);
    return;
  }
LAB_004a1b62:
  FUN_004a1cc0(param_2);
  FUN_004a1ce0(iVar3);
  FUN_004a1ce0(iVar1);
  FUN_004a1ce0(iVar2);
  return;
}

