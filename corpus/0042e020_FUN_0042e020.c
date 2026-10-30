
void FUN_0042e020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = DAT_005b11c4;
  if (DAT_005b11c4 < 0x80) {
    iVar1 = DAT_005b11c4 * 3;
    DAT_005b11c4 = DAT_005b11c4 + 1;
    (&DAT_005b11c8)[iVar1] = param_1;
    (&DAT_005b11cc)[uVar2 * 3] = param_2;
    (&DAT_005b11d0)[uVar2 * 3] = param_3;
  }
  return;
}

