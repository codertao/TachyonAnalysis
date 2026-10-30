
void FUN_0048b8b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar9 = param_1 * 0x170;
  iVar10 = *(int *)(&DAT_0056ac2c + iVar9);
  iVar12 = 0;
  if (iVar10 != 0) {
    pbVar8 = (byte *)(*(int *)(&DAT_0056ac30 + iVar9) + 2);
    do {
      if ((int)(&DAT_0056acdc)[param_1 * 0x5c] < iVar12) {
        return;
      }
      *(undefined2 *)pbVar8 = *(undefined2 *)(&DAT_0056ac00 + iVar9);
      pbVar8[2] = (&DAT_0056ac02)[iVar9];
      *(undefined2 *)(pbVar8 + 3) = *(undefined2 *)(&DAT_0056ac03 + iVar9);
      pbVar8[5] = (&DAT_0056ac05)[iVar9];
      if (((int)((&DAT_0056acdc)[param_1 * 0x5c] - (&DAT_0056ac38)[param_1 * 0x5c]) < iVar12) &&
         (iVar11 = ((&DAT_0056ac38)[param_1 * 0x5c] - (&DAT_0056acdc)[param_1 * 0x5c]) + 1 + iVar12,
         0 < iVar11)) {
        do {
          fVar1 = (float)pbVar8[2] + *(float *)(&DAT_0056ac14 + iVar9) + *(float *)(pbVar8 + 6);
          fVar2 = (float)pbVar8[1] + *(float *)(pbVar8 + 10) + *(float *)(&DAT_0056ac18 + iVar9);
          fVar3 = (float)*pbVar8 + *(float *)(&DAT_0056ac1c + iVar9) + *(float *)(pbVar8 + 0xe);
          fVar4 = (float)pbVar8[5] + *(float *)(pbVar8 + 0x12) + *(float *)(&DAT_0056ac20 + iVar9);
          fVar5 = (float)pbVar8[4] + *(float *)(pbVar8 + 0x16) + *(float *)(&DAT_0056ac24 + iVar9);
          fVar6 = (float)pbVar8[3] + *(float *)(&DAT_0056ac28 + iVar9) + *(float *)(pbVar8 + 0x1a);
          local_18 = (byte)(longlong)ROUND(fVar1);
          bVar7 = local_18;
          pbVar8[2] = local_18;
          local_18 = (byte)(longlong)ROUND(fVar2);
          local_10 = (uint)local_18;
          pbVar8[1] = local_18;
          local_18 = (byte)(longlong)ROUND(fVar3);
          local_c = (uint)local_18;
          *pbVar8 = local_18;
          local_18 = (byte)(longlong)ROUND(fVar4);
          local_8 = (uint)local_18;
          pbVar8[5] = local_18;
          local_18 = (byte)(longlong)ROUND(fVar5);
          local_4 = (uint)local_18;
          pbVar8[4] = local_18;
          local_18 = (byte)(longlong)ROUND(fVar6);
          pbVar8[3] = local_18;
          *(float *)(pbVar8 + 6) = fVar1 - (float)bVar7;
          *(float *)(pbVar8 + 10) = fVar2 - (float)local_10;
          iVar11 = iVar11 + -1;
          *(float *)(pbVar8 + 0xe) = fVar3 - (float)local_c;
          *(float *)(pbVar8 + 0x12) = fVar4 - (float)local_8;
          *(float *)(pbVar8 + 0x16) = fVar5 - (float)local_4;
          *(float *)(pbVar8 + 0x1a) = fVar6 - (float)local_18;
        } while (iVar11 != 0);
      }
      iVar12 = iVar12 + 1;
      pbVar8 = pbVar8 + 0x30;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}

