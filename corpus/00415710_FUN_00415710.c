
void FUN_00415710(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_004b8fb0();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    FUN_0048eda0(puVar1 + 2,param_3,0xff);
    FUN_004b8fd0(puVar1,0x2022,0x104,0x800);
  }
  return;
}

