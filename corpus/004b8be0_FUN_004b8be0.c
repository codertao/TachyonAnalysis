
void FUN_004b8be0(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_004b8fb0();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 1) = DAT_006af630;
    FUN_004b8fd0(puVar1,0x103,6,0x800);
  }
  return;
}

