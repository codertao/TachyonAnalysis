
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3790(void)

{
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  uint local_1a;
  int local_8;
  
  FUN_004a14f0(0xe,0);
  FUN_004a1490(local_28,0x28);
  DAT_00603110 = local_1a & 0xffff;
  _DAT_00603100 = local_24;
  DAT_00603104 = local_20;
  DAT_0060310c = local_8;
  if (DAT_00603110 < 8) {
    DAT_0060315c = DAT_00603110;
  }
  DAT_00603108 = DAT_0060315c * local_20 * local_24 >> 3;
  if (local_8 == 0) {
    DAT_0060310c = 0x100;
  }
  return;
}

