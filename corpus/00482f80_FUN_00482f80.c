
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
  FUN_0046e980();
  uVar2 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s_TxtSPCallout_d_0055785c,uVar2);
    FUN_0043e6a0(&DAT_00583420,&DAT_005a41e0,&DAT_00562b14);
    FUN_0043e610(&DAT_00583420,&DAT_005a41e0,0x10000);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}

