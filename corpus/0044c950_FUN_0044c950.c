
undefined4 FUN_0044c950(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *local_4;
  
  puVar3 = &DAT_005a4040;
  for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_004aa330();
  Net_SelectTransport(1);
  FUN_004a6de0();
  uVar1 = FUN_004bd32f(&DAT_00591600,0xace);
  FUN_004a70d0(uVar1);
  FUN_004a70f0(1);
  local_4 = &DAT_005927a0;
  iVar2 = FUN_004a6e50(&local_4);
  if (iVar2 != 0) {
    return 0;
  }
  FUN_004a7110(&DAT_00591250);
  return 1;
}

