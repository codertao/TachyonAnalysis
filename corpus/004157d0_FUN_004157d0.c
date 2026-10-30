
void FUN_004157d0(void)

{
  undefined2 *puVar1;
  
  if (DAT_005b903c == 0) {
    DAT_005b903c = 1;
    puVar1 = (undefined2 *)FUN_004b8fb0();
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
      FUN_004b8fd0(puVar1,0x2011,2,0x800);
    }
  }
  return;
}

