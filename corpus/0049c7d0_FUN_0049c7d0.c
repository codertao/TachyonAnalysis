
undefined4 FUN_0049c7d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_00603f20 == 0) {
    return 0;
  }
  PTR_DAT_0055d7cc = (undefined *)&DAT_00603f20;
  uVar1 = FUN_0049c3b0(param_1,4,0,param_2);
  PTR_DAT_0055d7cc = (undefined *)&DAT_00603f60;
  return uVar1;
}

