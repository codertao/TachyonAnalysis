
/* sweep: guess */

void SectorMap_QueryRadiusLarge(undefined4 param_1,int *param_2,int *param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_18;
  int local_c [3];
  
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  local_18 = 0;
  iVar1 = SectorMap_LargeCellIndex(param_2);
  iVar2 = SectorMap_LargeCellIndex(param_3);
  if (iVar1 == iVar2) {
    uVar3 = SectorMap_LargeCellPtr(param_2,param_1);
    (*param_4)(uVar3);
    return;
  }
  local_c[0] = *param_2;
  local_c[2] = param_2[2];
  uVar6 = *param_3 - local_c[0];
  uVar7 = param_3[2] - local_c[2];
  iVar5 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
  iVar4 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
  iVar1 = iVar5 * 2;
  iVar2 = iVar4 * 2;
  if (iVar4 < iVar5) {
    if (0 < iVar5) {
      param_3 = (int *)(iVar5 + 0x1ffffffU >> 0x19);
      do {
        if (iVar5 < 0) {
          local_c[2] = local_c[2] + ((-1 < (int)uVar7) - 1 & 0xfc000000) + 0x2000000;
          iVar2 = iVar1;
        }
        else {
          local_c[0] = local_c[0] + ((-1 < (int)uVar6) - 1 & 0xfc000000) + 0x2000000;
          iVar2 = iVar4 * -2;
        }
        iVar5 = iVar5 + iVar2;
        iVar2 = SectorMap_LargeCellPtr(local_c,param_1);
        if (iVar2 != local_18) {
          (*param_4)(iVar2);
          local_18 = iVar2;
        }
        param_3 = (int *)((int)param_3 - 1);
      } while (param_3 != (int *)0x0);
      return;
    }
  }
  else if (0 < iVar4) {
    param_3 = (int *)(iVar4 + 0x1ffffffU >> 0x19);
    do {
      if (iVar4 < 0) {
        local_c[0] = local_c[0] + ((-1 < (int)uVar6) - 1 & 0xfc000000) + 0x2000000;
        iVar1 = iVar2;
      }
      else {
        local_c[2] = local_c[2] + ((-1 < (int)uVar7) - 1 & 0xfc000000) + 0x2000000;
        iVar1 = iVar5 * -2;
      }
      iVar4 = iVar4 + iVar1;
      iVar1 = SectorMap_LargeCellPtr(local_c,param_1);
      if (iVar1 != local_18) {
        (*param_4)(iVar1);
        local_18 = iVar1;
      }
      param_3 = (int *)((int)param_3 - 1);
    } while (param_3 != (int *)0x0);
  }
  return;
}

