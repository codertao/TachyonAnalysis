
undefined4 FUN_0049c740(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_00603f40 == 0) {
    return 0;
  }
  PTR_DAT_0055d7cc = (undefined *)&DAT_00603f40;
  uVar1 = FUN_0049c6f0(param_1,param_2,4);
  PTR_DAT_0055d7cc = (undefined *)&DAT_00603f60;
  return uVar1;
}

