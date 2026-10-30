
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052bc38(void)

{
  uint uVar1;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  DAT_004e4b00 = 0;
  DAT_004e4b04 = 0;
  if (DAT_00604488 == 0x20) {
    uVar1 = *(uint *)(unaff_ESI + 0x28) | *(uint *)(unaff_EDI + 0x28) | *(uint *)(unaff_EBP + 0x28);
    if ((uVar1 & 0xf8000000) != 0) {
      DAT_004e4b00 = 0xffffffff;
    }
    if ((uVar1 & 0xf8) != 0) {
      DAT_004e4b04 = 0xffffffff;
    }
  }
  if ((DAT_004e4a28 & 1) != 0) {
    if (DAT_00604488 == 0x20) {
      _DAT_0052bc20 =
           (*(uint *)(unaff_EDI + 0x28) & 0xff0000) - (*(uint *)(unaff_EBP + 0x28) & 0xff0000);
      _DAT_0052bc24 =
           (*(uint *)(unaff_ESI + 0x28) & 0xff0000) - (*(uint *)(unaff_EBP + 0x28) & 0xff0000);
    }
    else {
      _DAT_0052bc20 = *(int *)(unaff_EDI + 0x28) - *(int *)(unaff_EBP + 0x28);
      _DAT_0052bc24 = *(int *)(unaff_ESI + 0x28) - *(int *)(unaff_EBP + 0x28);
    }
  }
  if ((DAT_004e4a28 & 1) != 0) {
    if (DAT_00604488 == 0x20) {
      _DAT_0052bc30 =
           ((*(uint *)(unaff_EDI + 0x28) & 0xff) - (*(uint *)(unaff_EBP + 0x28) & 0xff)) * 0x10000;
      _DAT_0052bc34 =
           ((*(uint *)(unaff_ESI + 0x28) & 0xff) - (*(uint *)(unaff_EBP + 0x28) & 0xff)) * 0x10000;
    }
    else {
      _DAT_0052bc30 = *(int *)(unaff_EDI + 0x28) - *(int *)(unaff_EBP + 0x28);
      _DAT_0052bc34 = *(int *)(unaff_ESI + 0x28) - *(int *)(unaff_EBP + 0x28);
    }
  }
  if ((DAT_004e4a28 & 1) != 0) {
    if (DAT_00604488 == 0x20) {
      _DAT_0052bc28 =
           ((*(uint *)(unaff_EDI + 0x28) & 0xff000000) >> 8) -
           ((*(uint *)(unaff_EBP + 0x28) & 0xff000000) >> 8);
      _DAT_0052bc2c =
           ((*(uint *)(unaff_ESI + 0x28) & 0xff000000) >> 8) -
           ((*(uint *)(unaff_EBP + 0x28) & 0xff000000) >> 8);
    }
    else {
      _DAT_0052bc28 = *(int *)(unaff_EDI + 0x28) - *(int *)(unaff_EBP + 0x28);
      _DAT_0052bc2c = *(int *)(unaff_ESI + 0x28) - *(int *)(unaff_EBP + 0x28);
    }
  }
  _DAT_0052b690 =
       (double)(((float)*(int *)(unaff_EDI + 0x18) - (float)*(int *)(unaff_EBP + 0x18)) *
               _DAT_005a6304);
  _DAT_0052b6a8 =
       (double)(((float)*(int *)(unaff_ESI + 0x1c) - (float)*(int *)(unaff_EBP + 0x1c)) *
               _DAT_005a6304);
  _DAT_0052b698 =
       (double)(((float)*(int *)(unaff_ESI + 0x18) - (float)*(int *)(unaff_EBP + 0x18)) *
               _DAT_005a6304);
  _DAT_0052b6a0 =
       (double)(((float)*(int *)(unaff_EDI + 0x1c) - (float)*(int *)(unaff_EBP + 0x1c)) *
               _DAT_005a6304);
  _DAT_0052b6b0 = 1.0 / (_DAT_0052b690 * _DAT_0052b6a8 - _DAT_0052b698 * _DAT_0052b6a0);
  _DAT_0052b6b8 = -_DAT_0052b6b0;
  if ((DAT_004e4a28 & 8) != 0) {
    DAT_004e4a60 = (int)ROUND((((double)*(int *)(unaff_EDI + 0x20) -
                               (double)*(int *)(unaff_EBP + 0x20)) * _DAT_0052b6a8 -
                              ((double)*(int *)(unaff_ESI + 0x20) -
                              (double)*(int *)(unaff_EBP + 0x20)) * _DAT_0052b6a0) * _DAT_0052b6b0);
    DAT_004e4a68 = (int)ROUND((((double)*(int *)(unaff_EDI + 0x20) -
                               (double)*(int *)(unaff_EBP + 0x20)) * _DAT_0052b698 -
                              ((double)*(int *)(unaff_ESI + 0x20) -
                              (double)*(int *)(unaff_EBP + 0x20)) * _DAT_0052b690) * _DAT_0052b6b8);
    DAT_004e4a64 = (int)ROUND((((double)*(int *)(unaff_EDI + 0x24) -
                               (double)*(int *)(unaff_EBP + 0x24)) * _DAT_0052b6a8 -
                              ((double)*(int *)(unaff_ESI + 0x24) -
                              (double)*(int *)(unaff_EBP + 0x24)) * _DAT_0052b6a0) * _DAT_0052b6b0);
    DAT_004e4a6c = (int)ROUND((((double)*(int *)(unaff_EDI + 0x24) -
                               (double)*(int *)(unaff_EBP + 0x24)) * _DAT_0052b698 -
                              ((double)*(int *)(unaff_ESI + 0x24) -
                              (double)*(int *)(unaff_EBP + 0x24)) * _DAT_0052b690) * _DAT_0052b6b8);
  }
  if ((DAT_004e4a28 & 1) != 0) {
    DAT_004e4a70 = (int)ROUND(((double)_DAT_0052bc20 * _DAT_0052b6a8 -
                              (double)_DAT_0052bc24 * _DAT_0052b6a0) * _DAT_0052b6b0);
    DAT_004e4a74 = (int)ROUND(((double)_DAT_0052bc20 * _DAT_0052b698 -
                              (double)_DAT_0052bc24 * _DAT_0052b690) * _DAT_0052b6b8);
  }
  if ((DAT_004e4a28 & 1) != 0) {
    _DAT_004e4a78 =
         (int)ROUND(((double)_DAT_0052bc28 * _DAT_0052b6a8 - (double)_DAT_0052bc2c * _DAT_0052b6a0)
                    * _DAT_0052b6b0);
    DAT_004e4a7c = (int)ROUND(((double)_DAT_0052bc28 * _DAT_0052b698 -
                              (double)_DAT_0052bc2c * _DAT_0052b690) * _DAT_0052b6b8);
    _DAT_004e4a80 =
         (int)ROUND(((double)_DAT_0052bc30 * _DAT_0052b6a8 - (double)_DAT_0052bc34 * _DAT_0052b6a0)
                    * _DAT_0052b6b0);
    DAT_004e4a84 = (int)ROUND(((double)_DAT_0052bc30 * _DAT_0052b698 -
                              (double)_DAT_0052bc34 * _DAT_0052b690) * _DAT_0052b6b8);
  }
  return;
}

