
void FUN_004ab240(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = DAT_0055e3e8; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    puVar1[2] = iVar2;
    iVar2 = iVar2 + 1;
  }
  return;
}

