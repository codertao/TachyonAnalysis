
/* refine: row pointer in the 80-column console buffer */

undefined6 MusDbg_ConsoleRow(int param_1,int param_2)

{
  param_1 = param_2 * 0x50 + param_1;
  out(0x3b4,0xe);
  out(0x3b5,(char)((uint)param_1 >> 8));
  out(0x3b4,0xf);
  out(0x3b5,(char)param_1);
  return CONCAT24(0x3b5,CONCAT31((int3)(short)((uint)param_1 >> 0x10),(char)param_1));
}

