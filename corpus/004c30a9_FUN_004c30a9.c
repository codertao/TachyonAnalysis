
uint FUN_004c30a9(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_006c9e98;
  while( true ) {
    if (DAT_006c9e98 + DAT_006c9e94 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

