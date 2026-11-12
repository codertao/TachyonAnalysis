
/* refine: max vertex distance over all LOD0 parts (unit-scale temp instance); Pak_Load overwrites
   header radius with it */

uint Model_ComputeRadius(uint param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  int local_74 [16];
  int local_34;
  int local_28;
  int local_24;
  int local_20;
  longlong local_1c;
  int local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    if (param_3 == 0) {
      param_3 = 0x10000;
    }
    piVar7 = local_74;
    for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    local_34 = param_1;
    local_74[0] = 0x10;
    local_74[1] = param_3;
    Ent_UpdatePartTransforms(local_74);
    iVar5 = Model_GetLod0Mesh(param_1);
    local_10 = (int *)(iVar5 + 0xc);
    local_c = 0;
    local_14 = iVar5;
    if (*(int *)(iVar5 + 4) != 0) {
      do {
        iVar1 = *local_10;
        iVar2 = local_10[10];
        param_1 = 0;
        if (*(int *)(iVar1 + 0x28) != 0) {
          pfVar6 = (float *)(*(int *)(iVar1 + 0x40) + 0x28);
          do {
            local_1c._0_4_ = (int)(longlong)ROUND(pfVar6[-1]);
            iVar5 = (int)local_1c;
            local_1c._0_4_ = (int)(longlong)ROUND(*pfVar6);
            iVar3 = (int)local_1c;
            local_1c = (longlong)ROUND(pfVar6[1]);
            local_28 = *(int *)(iVar2 + 0x30) + *param_2 +
                       ((uint)((longlong)iVar5 * (longlong)param_3) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar5 * (longlong)param_3) >> 0x20) << 0x10);
            local_24 = param_2[1] + *(int *)(iVar2 + 0x34) +
                       ((uint)((longlong)iVar3 * (longlong)param_3) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar3 * (longlong)param_3) >> 0x20) << 0x10);
            local_20 = param_2[2] + *(int *)(iVar2 + 0x38) +
                       ((uint)((longlong)(int)local_1c * (longlong)param_3) >> 0x10 |
                       (int)((ulonglong)((longlong)(int)local_1c * (longlong)param_3) >> 0x20) <<
                       0x10);
            uVar4 = MathAsm_VecLengthF_Fwd(&local_28);
            if (local_8 <= uVar4) {
              local_8 = MathAsm_VecLengthF_Fwd(&local_28);
            }
            param_1 = param_1 + 1;
            pfVar6 = pfVar6 + 0xc;
            iVar5 = local_14;
          } while (param_1 < *(uint *)(iVar1 + 0x28));
        }
        local_c = local_c + 1;
        local_10 = local_10 + 0xb;
      } while (local_c < *(uint *)(iVar5 + 4));
    }
    return local_8;
  }
  return 0x10000;
}

