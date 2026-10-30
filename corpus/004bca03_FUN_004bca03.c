
undefined1 * FUN_004bca03(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_00561584 == (undefined1 *)0x0) {
    DAT_00561584 = _malloc(0x351);
  }
  *DAT_00561584 = 0;
  FUN_004bcbd7(DAT_00561584,3,PTR_s_LC_COLLATE_0056158c,&DAT_0052f060,PTR_DAT_00561590);
  ppuVar3 = &PTR_DAT_00561590;
  do {
    FUN_004c17a0(DAT_00561584,&DAT_0052f058);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,ppuVar3[3]);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    FUN_004bcbd7(DAT_00561584,3,ppuVar3[2],&DAT_0052f060,*ppuVar4);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x5615c0);
  if (!bVar1) {
    return DAT_00561584;
  }
  FUN_004bd512(DAT_00561584);
  DAT_00561584 = (undefined1 *)0x0;
  return PTR_DAT_0056159c;
}

