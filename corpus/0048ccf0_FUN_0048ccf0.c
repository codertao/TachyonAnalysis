
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ccf0(void)

{
  FUN_0048e380(&DAT_0056ab60,0x30);
  DAT_0056ab78 = FUN_00431de0(s_shdw_08b_pcx_005366e0,0x20000);
  DAT_0056ab80 = FUN_0048ccc0();
  _DAT_0056ab84 = DAT_0056ab80 * 0x84;
  FUN_0048e3a0(&DAT_0056ab60,_DAT_0056ab84,4,s_TEXTBAR_BUFFER_005598d4,0xcccc);
  DAT_0056ab6c = 4;
  DAT_0056ab70 = 5;
  DAT_0056ab7c = FUN_0041fd80(s_borders_box_0053365c,0xcccc);
  DAT_0056ab8c = (uint)((longlong)DAT_005a67e4 * 0x1b0) >> 0x10 |
                 (int)((ulonglong)((longlong)DAT_005a67e4 * 0x1b0) >> 0x20) << 0x10;
  FUN_004503f0();
  return;
}

