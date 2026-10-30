
/* resolve a sector's QUAD name (sector+0x3c->+4->+0x34) via the quadrant-name registry (0x5a5dc8)
    */

void Sector_GetQuadrantName(int param_1)

{
  FUN_0048e850(DAT_005a5dc8,*(int *)(*(int *)(param_1 + 0x3c) + 4) + 0x34);
  return;
}

