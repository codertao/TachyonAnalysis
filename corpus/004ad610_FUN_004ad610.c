
void FUN_004ad610(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ad520(param_1);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(iVar1 + 0x714) = DAT_0060458c;
  DAT_0060458c = iVar1;
  DAT_006046a8 = DAT_006046a8 + 1;
  return;
}

