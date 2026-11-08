
void FUN_00440e50(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_005a41c4 != 0) {
    puVar1 = (undefined4 *)(DAT_005a41b8 + 0x10c);
    iVar2 = DAT_005a41c4;
    do {
      FUN_0046d580(&GLBL_UI_ELEM_LIST,puVar1 + -8,puVar1[2],*puVar1,puVar1[1],0);
      puVar1 = puVar1 + 0x4a;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

