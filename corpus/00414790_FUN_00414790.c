
void FUN_00414790(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR_s_FC_F_SMSLLBZ_00534038;
  FUN_004c82b6(param_1);
  puVar2 = PTR_s_FC_F_SMSLLBZ_00534038;
  while (puVar2 != (undefined *)0x0) {
    iVar3 = FUN_004207f0(param_1,*ppuVar4,s_KDBPYJGDFRKNXZSAPKM_00534020);
    if ((iVar3 != 0) && ((code *)ppuVar4[1] != (code *)0x0)) {
      (*(code *)ppuVar4[1])();
    }
    ppuVar1 = ppuVar4 + 2;
    ppuVar4 = ppuVar4 + 2;
    puVar2 = *ppuVar1;
  }
  return;
}

