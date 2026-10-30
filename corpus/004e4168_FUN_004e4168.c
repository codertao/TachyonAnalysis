
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e4168(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *unaff_ESI;
  char *pcVar4;
  undefined4 unaff_EDI;
  char *pcVar5;
  undefined4 uVar6;
  
  DAT_004e3007 = unaff_EDI;
  DAT_004e3037 = unaff_ESI;
  if (DAT_0060389c != 0) {
    if (DAT_00603898 == PTR_FUN_004e3053) {
      pcVar5 = &DAT_00603598;
      iVar2 = 0x300;
      pcVar4 = unaff_ESI;
      while( true ) {
        if (iVar2 == 0) {
          return;
        }
        if (*pcVar4 != *pcVar5) break;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
        iVar2 = iVar2 + -1;
      }
    }
    pcVar4 = &DAT_00603598;
    for (iVar2 = 0x300; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pcVar4 = *unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  DAT_00603898 = PTR_FUN_004e3053;
  _DAT_004e3023 = 0xff;
  DAT_00603484 = 0;
  puVar3 = &DAT_00603485;
  uVar6 = DAT_004e3007;
  do {
    uVar1 = (*(code *)PTR_FUN_004e3053)(uVar6);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    _DAT_004e3023 = _DAT_004e3023 + -1;
  } while (_DAT_004e3023 != 0);
  return;
}

