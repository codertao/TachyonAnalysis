
/* sweep */

void Course_PlaceMarker(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = DAT_005b2a38;
  if (DAT_005b2a38 != 0) {
    Ent_UnlinkFromMaps(DAT_005b2a38,*(int *)(DAT_005b2a38 + 100) + 0x14);
    *(undefined4 *)(iVar1 + 0x34) = *param_1;
    *(undefined4 *)(iVar1 + 0x38) = param_1[1];
    *(undefined4 *)(iVar1 + 0x3c) = param_1[2];
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    *(undefined4 *)(iVar1 + 0x54) = param_2[2];
    SectorMap_LinkStatic(iVar1,*(int *)(iVar1 + 100) + 0x14);
  }
  return;
}

