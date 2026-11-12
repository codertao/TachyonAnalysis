
/* sweep: static sector map */

void SectorMap_Alloc(int param_1,undefined4 param_2,undefined4 param_3)

{
  Mem_AllocZeroTagged(param_1,0x10000,4,s_static_sector_map_0054938c,param_2);
  Mem_AllocZeroTagged(param_1 + 4,0x4000,4,s_large_static_sector_map_00549374,param_2);
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}

