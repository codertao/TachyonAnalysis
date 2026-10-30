
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043a630(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_005a4c60;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0048e3a0(&DAT_005a4c60,0x10000,4,s_MNU_StdMaterial_Ptr_0053fe6c,0xa000);
  DAT_005a4c68 = 8;
  DAT_005a4c69 = 8;
  _DAT_005a4c6c = 0x30000008;
  return;
}

