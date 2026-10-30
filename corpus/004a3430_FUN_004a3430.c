
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3430(void)

{
  undefined1 local_80 [6];
  uint local_7a;
  uint local_76;
  uint local_3e;
  
  FUN_004a14f0(0,0);
  FUN_004a1490(local_80,0x80);
  DAT_00603104 = ((local_76 & 0xffff) - (local_7a & 0xffff)) + 1;
  _DAT_00603100 = local_3e & 0xffff;
  DAT_00603108 = DAT_00603104 * (local_3e & 0xffff);
  if (DAT_0060315c == 0x10) {
    DAT_00603108 = DAT_00603108 * 2;
  }
  else if (DAT_0060315c == 0x20) {
    DAT_00603108 = DAT_00603108 * 4;
  }
  DAT_00603110 = 8;
  return;
}

