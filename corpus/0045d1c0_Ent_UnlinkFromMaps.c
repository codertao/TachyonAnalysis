
/* sweep */

void Ent_UnlinkFromMaps(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = SectorMap_UnlinkStatic(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = SectorMap_UnlinkLarge(param_1,param_2);
    if (iVar1 == 0) {
      Quad_UnlinkProjectile(param_1,param_2);
    }
  }
  return;
}

