
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: flush on buffer limits, get batch, clip (Clip_PolyToFrustum), project, backface cull,
   emit indices */

int Pipe_SubmitTris(undefined4 param_1,int param_2,int param_3,ushort *param_4,int param_5)

{
  short *psVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort in_FPUControlWord;
  int local_58;
  int local_54;
  int local_50;
  int local_18;
  ushort local_14;
  undefined2 uStack_12;
  uint local_10;
  float local_c;
  int *local_8;
  
  if (DAT_006c9018 < 0x7f0) {
    if ((uint)((DAT_006b0f44 - DAT_006c9014) / 0x28 + DAT_006c8f6c * param_5) < 0x4000) {
      if (0x5fff < (uint)(((int)DAT_006b0f50 - DAT_006c9010 >> 1) + DAT_006c901c * param_5)) {
        Pipe_FlushBatches();
        DAT_006c8f98 = DAT_006c8f98 + 10000;
      }
    }
    else {
      Pipe_FlushBatches();
      DAT_006c8f98 = DAT_006c8f98 + 100;
    }
  }
  else {
    Pipe_FlushBatches();
    DAT_006c8f98 = DAT_006c8f98 + 1;
  }
  _local_14 = CONCAT22(uStack_12,in_FPUControlWord);
  local_10 = in_FPUControlWord & 0xfcff;
  if ((DAT_006b0f4c != 0) && (500 < (uint)(DAT_006c8f6c * param_5 + *(int *)(DAT_006b0f4c + 0x24))))
  {
    DAT_006b0f4c = 0;
  }
  Pipe_GetBatch(param_1);
  iVar6 = *(int *)(DAT_006b0f4c + 0x1c);
  local_18 = DAT_006c8f70;
  if (0 < param_5) {
    local_10 = param_5;
    do {
      iVar5 = (uint)*param_4 * param_3 + param_2;
      iVar4 = (uint)param_4[1] * param_3 + param_2;
      local_c = (float)((uint)param_4[2] * param_3 + param_2);
      if (((*(short *)(iVar5 + 0x1c) == 0) || (*(short *)(iVar4 + 0x1c) == 0)) ||
         (*(short *)((int)local_c + 0x1c) == 0)) {
        local_58 = iVar5;
        local_54 = iVar4;
        local_50 = (int)local_c;
        fVar2 = (float)Clip_PolyToFrustum(&local_58,3,&local_8);
        local_c = fVar2;
        if (fVar2 != 0.0) {
          iVar4 = 0;
          piVar3 = local_8;
          if (0 < (int)fVar2) {
            do {
              if (*(int *)(piVar3[iVar4] + 0x20) != DAT_00564e44) {
                Pipe_ProjectVertex(piVar3[iVar4]);
                piVar3 = local_8;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)fVar2);
          }
          _DAT_00564e2c = (float *)(iVar6 + *(short *)(*piVar3 + 0x1e) * 0x28);
          DAT_00564e34 = (float *)(iVar6 + *(short *)(piVar3[1] + 0x1e) * 0x28);
          DAT_00564e28 = (float *)(iVar6 + *(short *)(piVar3[2] + 0x1e) * 0x28);
          if (((*_DAT_00564e2c - *DAT_00564e34) * (_DAT_00564e2c[1] - DAT_00564e28[1]) -
               (*_DAT_00564e2c - *DAT_00564e28) * (_DAT_00564e2c[1] - DAT_00564e34[1]) <=
               _DAT_0052e598) && (iVar4 = 2, 2 < (int)fVar2)) {
            do {
              if (DAT_00564e4c == 0) {
                *DAT_006b0f50 = *(undefined2 *)(*piVar3 + 0x1e);
                DAT_006b0f50 = DAT_006b0f50 + 1;
                *DAT_006b0f50 = *(undefined2 *)(local_8[iVar4 + -1] + 0x1e);
                DAT_006b0f50 = DAT_006b0f50 + 1;
                *DAT_006b0f50 = *(undefined2 *)(local_8[iVar4] + 0x1e);
                DAT_006b0f50 = DAT_006b0f50 + 1;
                DAT_006c8f70 = DAT_006c8f70 + 1;
              }
              else {
                _DAT_00564e2c = (float *)(iVar6 + *(short *)(*piVar3 + 0x1e) * 0x28);
                DAT_00564e34 = (float *)(iVar6 + *(short *)(piVar3[iVar4 + -1] + 0x1e) * 0x28);
                DAT_00564e28 = (float *)(iVar6 + *(short *)(piVar3[iVar4] + 0x1e) * 0x28);
                Pipe_SubdivideTri((int)*(short *)(*piVar3 + 0x1e),
                                  (int)*(short *)(piVar3[iVar4 + -1] + 0x1e),
                                  (int)*(short *)(piVar3[iVar4] + 0x1e),
                                  (*_DAT_00564e2c - *DAT_00564e34) *
                                  (_DAT_00564e2c[1] - DAT_00564e28[1]) -
                                  (*_DAT_00564e2c - *DAT_00564e28) *
                                  (_DAT_00564e2c[1] - DAT_00564e34[1]),0);
                fVar2 = local_c;
              }
              iVar4 = iVar4 + 1;
              piVar3 = local_8;
            } while (iVar4 < (int)fVar2);
          }
          *(undefined4 *)(DAT_006b0f4c + 0x24) = DAT_006c8f68;
          goto LAB_004bab06;
        }
      }
      else {
        if (*(int *)(iVar5 + 0x20) != DAT_00564e44) {
          Pipe_ProjectVertex(iVar5);
        }
        if (*(int *)(iVar4 + 0x20) != DAT_00564e44) {
          Pipe_ProjectVertex(iVar4);
        }
        if (*(int *)((int)local_c + 0x20) != DAT_00564e44) {
          Pipe_ProjectVertex(local_c);
        }
        _DAT_00564e2c = (float *)(iVar6 + *(short *)(iVar5 + 0x1e) * 0x28);
        DAT_00564e34 = (float *)(iVar6 + *(short *)(iVar4 + 0x1e) * 0x28);
        DAT_00564e28 = (float *)(iVar6 + *(short *)((int)local_c + 0x1e) * 0x28);
        fVar2 = (*_DAT_00564e2c - *DAT_00564e34) * (_DAT_00564e2c[1] - DAT_00564e28[1]) -
                (*_DAT_00564e2c - *DAT_00564e28) * (_DAT_00564e2c[1] - DAT_00564e34[1]);
        if (fVar2 <= _DAT_0052e598) {
          if (DAT_00564e4c != 0) {
            psVar1 = (short *)((int)local_c + 0x1e);
            local_c = fVar2;
            Pipe_SubdivideTri((int)*(short *)(iVar5 + 0x1e),(int)*(short *)(iVar4 + 0x1e),
                              (int)*psVar1,fVar2,0);
            *(undefined4 *)(DAT_006b0f4c + 0x24) = DAT_006c8f68;
            goto LAB_004bab06;
          }
          *DAT_006b0f50 = *(undefined2 *)(iVar5 + 0x1e);
          DAT_006b0f50 = DAT_006b0f50 + 1;
          *DAT_006b0f50 = *(undefined2 *)(iVar4 + 0x1e);
          DAT_006b0f50 = DAT_006b0f50 + 1;
          *DAT_006b0f50 = *(undefined2 *)((int)local_c + 0x1e);
          DAT_006b0f50 = DAT_006b0f50 + 1;
          DAT_006c8f70 = DAT_006c8f70 + 1;
        }
        *(undefined4 *)(DAT_006b0f4c + 0x24) = DAT_006c8f68;
        local_c = fVar2;
LAB_004bab06:
        *(int *)(DAT_006b0f4c + 0x28) = DAT_006c8f70;
      }
      if ((DAT_00564e4c != 0) && (500 < (uint)(*(int *)(DAT_006b0f4c + 0x24) + DAT_006c8f6c))) {
        DAT_006b0f4c = 0;
        Pipe_GetBatch(param_1);
        iVar6 = *(int *)(DAT_006b0f4c + 0x1c);
      }
      local_10 = local_10 + -1;
      param_4 = param_4 + 3;
    } while (local_10 != 0);
  }
  DAT_006c8f80 = DAT_006c8f80 + param_5;
  return DAT_006c8f70 - local_18;
}

