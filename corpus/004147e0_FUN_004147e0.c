
undefined4 FUN_004147e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 1);
  if (DAT_00561464 < 2) {
    uVar2 = *(ushort *)(PTR_DAT_00561258 + uVar1 * 2) & 0x157;
  }
  else {
    uVar2 = FUN_004bc62d(uVar1,0x157);
  }
  if (uVar2 != 0) {
    FUN_00414900(uVar1);
    return 1;
  }
  return 0;
}

