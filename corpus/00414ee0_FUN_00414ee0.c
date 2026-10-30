
void FUN_00414ee0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004b8fb0();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    FUN_004b8fd0(puVar1,0x2026,4,0x800);
  }
  return;
}

