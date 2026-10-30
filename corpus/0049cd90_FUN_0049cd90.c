
uint FUN_0049cd90(uint param_1,uint param_2)

{
  uint uVar1;
  
  while( true ) {
    uVar1 = param_1;
    if (uVar1 == 0) {
      return 0;
    }
    param_1 = *(uint *)(uVar1 + 0xc);
    if (param_1 == 0) break;
    if ((uVar1 <= param_2) && (param_2 < param_1)) {
      return uVar1;
    }
  }
  return uVar1;
}

