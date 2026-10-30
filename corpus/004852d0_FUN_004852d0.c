
void FUN_004852d0(void)

{
  undefined4 *puVar1;
  
  DAT_005b9600 = 0;
  DAT_005b9604 = 0;
  DAT_005b9608 = 0;
  DAT_005b95e8 = 0;
  DAT_005b95ec = 0;
  DAT_005b95f0 = 0;
  DAT_0056e3c8 = 0xffc00000;
  puVar1 = (undefined4 *)FUN_004b1db0(DAT_0056e38c,0x1a);
  if (puVar1 != (undefined4 *)0x0) {
    DAT_0056e3ac = *puVar1;
    DAT_0056e3b0 = puVar1[1];
    DAT_0056e3b4 = puVar1[2];
  }
  return;
}

