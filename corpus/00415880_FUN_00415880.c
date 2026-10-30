
void FUN_00415880(undefined2 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_004b8fb0();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_1;
    FUN_004b8fd0(puVar1,0x2018,2,0x800);
  }
  return;
}

