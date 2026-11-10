
/* set volume now (0..255) */

void MusNat_GSV(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0) {
    DAT_006af520 = 0;
    DAT_006af524 = 0;
    return;
  }
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  DAT_006af520 = iVar1 << 0x10;
  DAT_006af524 = iVar1 << 0x10;
  return;
}

