
void FUN_004899e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_00589720 != 0) {
    puVar1 = (undefined4 *)(DAT_00589724 + 0xcc);
    iVar2 = DAT_00589720;
    do {
      if ((puVar1 != (undefined4 *)0xcc) && (puVar1[-0x2f] != 0)) {
        FUN_0046d580(&GLBL_UI_ELEM_LIST,puVar1 + -9,1,puVar1[-1],*puVar1,0);
      }
      puVar1 = puVar1 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

