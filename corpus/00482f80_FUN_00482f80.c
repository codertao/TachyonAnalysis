
void FUN_00482f80(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)&DAT_0056fac0;
  for (iVar1 = 0x5b0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  Cfg_ClearScratch();
  uVar2 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s_TxtSPCallout_d_0055785c,uVar2);
    FUN_0043e6a0(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,&DAT_00562b14);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,0x10000);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}

