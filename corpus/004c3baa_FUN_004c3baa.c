
float10 FUN_004c3baa(undefined4 param_1,double param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_005627f0 == 0) {
    fVar2 = (float10)FUN_004c4160(1,param_1,param_2,0,param_2,param_3);
    return fVar2;
  }
  puVar1 = (undefined4 *)FUN_004c4e11();
  *puVar1 = 0x21;
  FUN_004c43d5();
  return (float10)param_2;
}

