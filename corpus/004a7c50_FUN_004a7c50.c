
undefined4 FUN_004a7c50(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_00601e74 <= param_1) {
    return 0xffffffff;
  }
  puVar1 = (undefined4 *)(param_1 * 0x10 + 0xc + DAT_00601e78);
  uVar2 = *puVar1;
  *puVar1 = param_2;
  return uVar2;
}

