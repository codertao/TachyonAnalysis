
undefined * FUN_004b1db0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_004b1cd0(param_1);
  if (iVar2 == 0) {
    return &DAT_0055eb48;
  }
  uVar1 = *(uint *)(*(int *)(iVar2 + 0xc) + 0x38);
  if ((uVar1 <= param_2) && (param_2 = 0, uVar1 == 0)) {
    return &DAT_0055eb48;
  }
  return (undefined *)(param_2 * 0x10 + *(int *)(*(int *)(iVar2 + 0xc) + 0x50));
}

