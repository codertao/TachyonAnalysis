
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SBF entry -> stream cursor; index >= count plays entry 0; sets the per-read volume step */

void Music_SelectSegment(uint param_1)

{
  LONG lDistanceToMove;
  
  if (DAT_006af4f4 <= param_1) {
    param_1 = 0;
  }
  DAT_006af50c = &DAT_0066b640 + param_1 * 0x20;
  DAT_006af510 = (&DAT_0066b658)[param_1 * 8];
  DAT_006af514 = (&DAT_0066b654)[param_1 * 8];
  if ((DAT_006af510 & 0xffff0000) != 0) {
    DAT_006af514 = 0;
    return;
  }
  DAT_006af528 = (DAT_006af524 - DAT_006af520) / (DAT_006af514 / (int)DAT_006af510);
  lDistanceToMove = (&DAT_0066b650)[param_1 * 8];
  SetFilePointer(GLBL_sbf_file_handle,lDistanceToMove,(PLONG)0x0,0);
  _DAT_0066f4c0 = lDistanceToMove;
  return;
}

