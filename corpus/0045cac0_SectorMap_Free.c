
/* sweep */

void SectorMap_Free(undefined4 *param_1)

{
  OurFreeMem(*param_1);
  OurFreeMem(param_1[1]);
  return;
}

