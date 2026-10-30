
void FUN_0049f710(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_006039e0;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00603964 = 1;
  DAT_00603968 = 1;
  DAT_006039ec = 1;
  FUN_0049e3a0();
  DAT_00603a00 = timeGetTime();
  FUN_0049f7a0(0);
  FUN_0049f7b0(0x40);
  FUN_0049f7c0(1);
  return;
}

