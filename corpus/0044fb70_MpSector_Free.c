
/* sweep */

void MpSector_Free(int *param_1)

{
  Quadrant_Reset(*param_1);
  Spx_ForEachDecl(param_1[1]);
  Spx_ForEachDecl(param_1[2]);
  SectorMap_Clear(*param_1 + 0x14);
  Mem_FreeTag(0xd530);
  return;
}

