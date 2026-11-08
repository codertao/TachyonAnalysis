
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b18c0(void)

{
  int iVar1;
  float *pfVar2;
  
  pfVar2 = GLBL_3VEC3_output;
  for (iVar1 = 0xf447; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = 0.0;
    pfVar2 = pfVar2 + 1;
  }
  _DAT_00668f30 = 0;
  DAT_00668f34 = 0;
  f_global_scalar_maybe = 1.5258789e-05;
  _DAT_00666af0 = 0x3c000000;
  DAT_00668f2c = 1000;
  DAT_00668f58 = 0xffffffff;
  DAT_00668f5c = 0xffffffff;
  DAT_00668f88 = 0x10000;
  FUN_004b1870(0x32);
  return;
}

