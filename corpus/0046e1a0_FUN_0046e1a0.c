
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e1a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int *piVar8;
  int *piVar9;
  uint local_18;
  
  piVar8 = param_1;
  if (*param_1 != 0) {
    if ((float)param_1[0x14] != _DAT_0052e598) {
      if (param_1[0x19] == 0) {
        param_1[0x19] = 0x32;
      }
      param_1[0x16] = param_1[0x19];
      fVar7 = ((float)param_1[0x14] - (float)param_1[0x13]) / (float)param_1[0x19];
      param_1[0x17] = param_1[0x18];
      param_1[0x15] = (int)fVar7;
      param_1[0x12] = (int)fVar7;
      param_1[0x11] = param_1[0x13];
    }
    if (param_1[0x33] != 0) {
      DAT_005635b0 = 0;
      DAT_005635b4 = 0;
      DAT_005635b8 = 0;
      iVar3 = param_1[0x22];
      piVar1 = param_1 + 0x20;
      iVar4 = *piVar1;
      iVar5 = param_1[0x21];
      param_1[0x24] = (int)(float)iVar4;
      iVar6 = param_1[0x23];
      param_1[0x25] = (int)(float)iVar5;
      param_1[5] = iVar4;
      param_1[7] = iVar3;
      param_1[6] = iVar5;
      param_1[0x26] = (int)(float)iVar3;
      param_1[8] = iVar6;
      param_1[0x27] = (int)(float)iVar6;
      fVar7 = (float)(uint)param_1[0x30];
      local_18 = 0;
      param_1[0x28] = (int)((float)(param_1[1] - iVar4) / fVar7);
      param_1[0x29] = (int)((float)(param_1[2] - iVar5) / fVar7);
      param_1[0x2a] = (int)((float)(param_1[3] - iVar3) / fVar7);
      param_1[0x2b] = (int)((float)(param_1[4] - iVar6) / fVar7);
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x32] = 0;
      if (param_1[0x33] != 0) {
        param_1 = (int *)0x0;
        do {
          iVar3 = piVar8[0x34];
          iVar4 = *(int *)((int)param_1 + 4 + iVar3);
          iVar5 = *(int *)((int)param_1 + 8 + iVar3);
          iVar6 = *(int *)((int)param_1 + 0x6c + iVar3);
          piVar9 = (int *)((int)param_1 + iVar3);
          piVar9[3] = *piVar9;
          piVar9[0x1a] = piVar9[0x19];
          piVar9[4] = iVar4;
          piVar9[5] = iVar5;
          piVar9[0x1c] = iVar6;
          if ((local_18 < piVar8[0x33] - 1U) && (iVar6 != 0)) {
            piVar2 = (int *)((int)param_1 + 0x74 + piVar8[0x34]);
            piVar9[7] = (piVar2[1] - iVar4) / iVar6;
            piVar9[8] = (piVar2[2] - iVar5) / iVar6;
            piVar9[6] = (*piVar2 - *piVar9) / iVar6;
          }
          else {
            piVar9[7] = 0;
            piVar9[8] = 0;
            piVar9[6] = 0;
          }
          local_18 = local_18 + 1;
          param_1 = (int *)((int)param_1 + 0x74);
        } while (local_18 < (uint)piVar8[0x33]);
      }
      piVar8[0x31] = piVar8[0x30];
      FUN_0046e060(piVar1);
      return;
    }
    DAT_005635b0 = param_1[0x1d];
    DAT_005635b4 = param_1[0x1e];
    DAT_005635b8 = param_1[0x1f];
  }
  return;
}

