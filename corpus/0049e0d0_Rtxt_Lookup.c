
/* (rt, group, key) -> record; the main accessor (JOBS/QUADRANT_NAMES/SECTOR_CONTENTS/...) */

undefined4 Rtxt_Lookup(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int local_8;
  
  uVar7 = 0;
  local_8 = 0;
  if (param_1 != 0) {
    puVar1 = *(uint **)(param_1 + 4);
    puVar8 = puVar1 + 1 + *puVar1 * 2;
    puVar6 = puVar1 + 1;
    if (*puVar1 != 0) {
      do {
        iVar3 = __stricmp(puVar8,param_2);
        if (iVar3 == 0) {
          uVar4 = Rtxt_FindKeyInGroupHdr(param_1,puVar6,param_3,local_8);
          return uVar4;
        }
        uVar5 = 0xffffffff;
        puVar9 = puVar8;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          uVar2 = *puVar9;
          puVar9 = (uint *)((int)puVar9 + 1);
        } while ((char)uVar2 != '\0');
        puVar8 = (uint *)((int)puVar8 + ~uVar5);
        local_8 = local_8 + puVar6[1];
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (uVar7 < *puVar1);
    }
  }
  return 0;
}

