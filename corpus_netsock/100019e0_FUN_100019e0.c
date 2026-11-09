
uint __cdecl FUN_100019e0(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x10000;
  if (DAT_100198b8 <= uVar1) {
    return 0;
  }
  return -(uint)(*(int *)(DAT_10019afc + 0x9c + uVar1 * 0xbc) != 0) & DAT_10019afc + uVar1 * 0xbc;
}

