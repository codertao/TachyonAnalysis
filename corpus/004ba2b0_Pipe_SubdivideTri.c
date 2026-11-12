
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: recursive midpoint split (depth<3) when the triangle's 1/w range is large:
   perspective-correct UV/colour */

void Pipe_SubdivideTri(int param_1,int param_2,int param_3,float param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  
  iVar5 = *(int *)(DAT_006b0f4c + 0x1c);
  fVar4 = *(float *)(iVar5 + 0xc + param_1 * 0x28);
  pfVar1 = (float *)(iVar5 + param_1 * 0x28);
  pfVar2 = (float *)(iVar5 + param_2 * 0x28);
  pfVar3 = (float *)(iVar5 + param_3 * 0x28);
  fVar6 = pfVar2[3];
  fVar7 = pfVar3[3];
  local_88 = fVar6;
  if (fVar6 < fVar4) {
    local_88 = fVar4;
    fVar4 = fVar6;
  }
  local_8c = fVar7;
  if (fVar7 < fVar4) {
    local_8c = fVar4;
    fVar4 = fVar7;
  }
  if (local_8c < local_88) {
    local_8c = local_88;
  }
  if ((_DAT_0052effc <= (fVar4 - local_8c) * param_4) && (param_5 < 3)) {
    local_84 = pfVar1[7] * pfVar1[3];
    local_88 = pfVar2[7] * pfVar2[3];
    local_80 = pfVar3[6] * pfVar3[3];
    local_7c = pfVar3[7] * pfVar3[3];
    local_50 = (*pfVar1 + *pfVar2) * _DAT_0052e594;
    local_4c = (pfVar2[1] + pfVar1[1]) * _DAT_0052e594;
    local_48 = (pfVar1[2] + pfVar2[2]) * _DAT_0052e594;
    local_44 = (pfVar1[3] + pfVar2[3]) * _DAT_0052e594;
    local_38 = (pfVar2[6] * pfVar2[3] + pfVar1[6] * pfVar1[3]) * (_DAT_0052e594 / local_44);
    local_34 = (local_88 + local_84) * (_DAT_0052e594 / local_44);
    local_40 = ((uint)pfVar2[4] >> 1 & 0x7f7f7f7f) + ((uint)pfVar1[4] >> 1 & 0x7f7f7f7f);
    local_3c = ((uint)pfVar1[5] >> 1 & 0x7f7f7f7f) + ((uint)pfVar2[5] >> 1 & 0x7f7f7f7f);
    local_78 = (*pfVar3 + *pfVar2) * _DAT_0052e594;
    local_74 = (pfVar2[1] + pfVar3[1]) * _DAT_0052e594;
    local_70 = (pfVar3[2] + pfVar2[2]) * _DAT_0052e594;
    local_6c = (pfVar3[3] + pfVar2[3]) * _DAT_0052e594;
    local_60 = (local_80 + pfVar2[6] * pfVar2[3]) * (_DAT_0052e594 / local_6c);
    local_5c = (local_7c + local_88) * (_DAT_0052e594 / local_6c);
    local_68 = ((uint)pfVar2[4] >> 1 & 0x7f7f7f7f) + ((uint)pfVar3[4] >> 1 & 0x7f7f7f7f);
    local_64 = ((uint)pfVar3[5] >> 1 & 0x7f7f7f7f) + ((uint)pfVar2[5] >> 1 & 0x7f7f7f7f);
    local_28 = (*pfVar1 + *pfVar3) * _DAT_0052e594;
    local_24 = (pfVar3[1] + pfVar1[1]) * _DAT_0052e594;
    local_20 = (pfVar1[2] + pfVar3[2]) * _DAT_0052e594;
    local_1c = (pfVar3[3] + pfVar1[3]) * _DAT_0052e594;
    local_8c = _DAT_0052e594 / local_1c;
    local_10 = (local_80 + pfVar1[6] * pfVar1[3]) * local_8c;
    local_c = (local_7c + local_84) * local_8c;
    local_18 = ((uint)pfVar3[4] >> 1 & 0x7f7f7f7f) + ((uint)pfVar1[4] >> 1 & 0x7f7f7f7f);
    local_14 = ((uint)pfVar1[5] >> 1 & 0x7f7f7f7f) + ((uint)pfVar3[5] >> 1 & 0x7f7f7f7f);
    Pipe_AddVertexDedup(&local_50,&local_8c);
    Pipe_AddVertexDedup(&local_78,&local_88);
    Pipe_AddVertexDedup(&local_28,&local_80);
    param_4 = param_4 * _DAT_0052eff8;
    param_5 = param_5 + 1;
    local_84 = param_4;
    Pipe_SubdivideTri(param_1,(int)local_8c._0_2_,(int)local_80._0_2_,param_4,param_5);
    Pipe_SubdivideTri(param_2,(int)local_88._0_2_,(int)local_8c._0_2_,param_4,param_5);
    Pipe_SubdivideTri(param_3,(int)local_80._0_2_,(int)local_88._0_2_,param_4,param_5);
    Pipe_SubdivideTri((int)local_8c._0_2_,(int)local_88._0_2_,(int)local_80._0_2_,param_4,param_5);
    return;
  }
  *DAT_006b0f50 = (short)param_1;
  DAT_006b0f50 = DAT_006b0f50 + 1;
  *DAT_006b0f50 = (short)param_2;
  DAT_006b0f50 = DAT_006b0f50 + 1;
  *DAT_006b0f50 = (short)param_3;
  DAT_006b0f50 = DAT_006b0f50 + 1;
  DAT_006c8f70 = DAT_006c8f70 + 1;
  return;
}

