
undefined4 FUN_0049d4a0(int param_1,int param_2)

{
  short *psVar1;
  undefined4 uVar2;
  uint uVar3;
  
  psVar1 = *(short **)(param_2 + 0x20);
  if ((param_1 == 0) || (psVar1 == (short *)0x0)) {
    return 0;
  }
  uVar3 = 0;
  if (*(uint *)(param_2 + 0xc) != 0) {
    do {
      if (((*psVar1 == *(short *)(param_1 + 0x28)) && (psVar1[1] == *(short *)(param_1 + 0x2a))) &&
         (psVar1[2] == *(short *)(param_1 + 0x2c))) {
        if (psVar1[3] == 0) {
          uVar2 = FUN_0049d430(psVar1[4]);
          return uVar2;
        }
        uVar2 = FUN_0049d460(psVar1[4],param_1,param_2);
        return uVar2;
      }
      uVar3 = uVar3 + 1;
      psVar1 = psVar1 + 6;
    } while (uVar3 < *(uint *)(param_2 + 0xc));
  }
  return 0xffffffff;
}

