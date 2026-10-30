
void FUN_004937c0(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  
  if (DAT_0055a560 != 0x26) {
    ppuVar4 = &PTR_DAT_0055a5d4;
    do {
      if ((ppuVar4[0xf] != (undefined *)0x0) &&
         (iVar2 = FUN_004b1d90(*(undefined4 *)*ppuVar4), iVar2 != 0)) {
        puVar3 = (undefined4 *)FUN_004b1db0(*(undefined4 *)*ppuVar4,0);
        ppuVar4[0x13] = (undefined *)*puVar3;
        ppuVar4[0x14] = (undefined *)puVar3[1];
        ppuVar4[0x15] = (undefined *)puVar3[2];
      }
      ppuVar1 = ppuVar4 + 0x27;
      ppuVar4 = ppuVar4 + 0x44;
    } while (*ppuVar1 != (undefined *)0x26);
  }
  return;
}

