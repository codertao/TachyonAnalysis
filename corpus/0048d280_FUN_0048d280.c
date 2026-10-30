
undefined4 * FUN_0048d280(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_0048e3a0(&param_1,700,4,s_TICKER_Ticker_String_005598e4,0xa000);
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar5 = param_1;
  for (iVar3 = 0xaf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[0xae] = DAT_0056aac0;
  DAT_0056aac0 = param_1;
  if (DAT_00564ae4 != 0) {
    iVar3 = param_1[0x80];
    if (*(int *)(iVar3 + 0x238) != 0) {
      uVar1 = FUN_004ae4c0(param_1,*(int *)(iVar3 + 0x238),*(undefined4 *)(iVar3 + 0x24c),
                           iVar3 + 0x23c);
      param_1[0x87] = uVar1;
      iVar3 = param_1[0x80];
      uVar1 = FUN_004ae560(param_1,*(undefined4 *)(iVar3 + 0x238),*(undefined4 *)(iVar3 + 0x24c),
                           iVar3 + 0x23c);
      goto LAB_0048d36b;
    }
  }
  uVar1 = FUN_004e668a(param_1,param_1[0x80] + 0x50);
  param_1[0x87] = uVar1;
  uVar1 = FUN_004e636c(param_1[0x80] + 0x50);
LAB_0048d36b:
  param_1[0x88] = uVar1;
  param_1[0x89] = DAT_0056aad0 - param_1[0x88];
  if (-1 < DAT_0056aad4) {
    iVar3 = FUN_0048d270();
    FUN_0048d230((iVar3 - param_1[0x87]) + 0x2c);
    uVar1 = FUN_0048d270();
    param_1[0x8a] = uVar1;
    return param_1;
  }
  iVar2 = FUN_0048d270();
  iVar3 = param_1[0x87];
  uVar1 = FUN_0048d270();
  param_1[0x8a] = uVar1;
  FUN_0048d230(iVar2 + iVar3 + 0x34);
  return param_1;
}

