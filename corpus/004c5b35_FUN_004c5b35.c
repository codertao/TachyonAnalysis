
uint FUN_004c5b35(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004c5b80();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_004c5c12(uVar1);
  return uVar1;
}

