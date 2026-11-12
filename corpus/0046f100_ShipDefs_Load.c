
/* sweep: ship.def */

void ShipDefs_Load(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  local_4 = 0x20;
  puVar5 = &DAT_00583580;
  for (iVar4 = 0x340; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar4 = Cbin_Open(s_ship_def_0054b09c);
  if (iVar4 != 0) {
    iVar4 = Cbin_SelectGroup(s_SHIPS_0054b094);
    if (iVar4 != 0) {
      puVar5 = &DAT_005835c0;
      do {
        iVar4 = Cbin_FindParam_Global(&DAT_005351f8,puVar5 + -0x10,0x1f,0,4,1);
        if (iVar4 == 0) break;
        Cbin_GetParamN(&DAT_005351f8,puVar5 + -8,0x1f,0,4,2);
        Cbin_GetParamN(&DAT_005351f8,0,0,puVar5,1,3);
        Cbin_GetParamN(&DAT_005351f8,0,0,puVar5 + 1,1,4);
        Cbin_GetParamN(&DAT_005351f8,puVar5 + 2,0xf,0,4,5);
        piVar1 = puVar5 + 6;
        Cbin_GetParamN(&DAT_005351f8,0,0,piVar1,1,6);
        piVar2 = puVar5 + 7;
        Cbin_GetParamN(&DAT_005351f8,0,0,piVar2,1,7);
        piVar3 = puVar5 + 8;
        Cbin_GetParamN(&DAT_005351f8,0,0,piVar3,1,8);
        Cbin_GetParamN(&DAT_005351f8,0,0,puVar5 + 9,1,9);
        *piVar1 = *piVar1 << 0x10;
        puVar5 = puVar5 + 0x1a;
        local_4 = local_4 + -1;
        *piVar2 = *piVar2 << 0x10;
        *piVar3 = *piVar3 << 0x10;
      } while (local_4 != 0);
      Cbin_Close();
    }
  }
  return;
}

