
/* sweep */

uint SndTrig_PlayEvent(int param_1,int *param_2,int param_3)

{
  ushort *puVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint local_10;
  uint *local_c;
  undefined4 *local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  local_10 = 0;
  puVar11 = &DAT_00603e80;
  for (iVar8 = 0x28; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_8 = (undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x24) != 0) {
    local_c = &DAT_00603e8c;
    do {
      puVar9 = local_c;
      puVar1 = (ushort *)*local_8;
      if (((*puVar1 != 0) && (iVar8 = SndTrig_MaskAllows(*(undefined4 *)(puVar1 + 4)), iVar8 == 0))
         && (((*(byte *)(param_1 + 0x4c) & 1) == 0 ||
             (iVar8 = SndTrig_MaskBit5(*(undefined4 *)(puVar1 + 4)), iVar8 == 0)))) {
        uVar6 = *(uint *)(puVar1 + 4);
        if ((uVar6 & 0x10) == 0) {
          if ((uVar6 & 0x80) == 0) {
            uVar6 = SndTrig_Random(*puVar1);
          }
          else {
            if ((uVar6 & 0x100) == 0) {
              uVar3 = SndTrig_Random(*puVar1);
              puVar1[6] = uVar3;
              piVar12 = *(int **)(puVar1 + (uint)uVar3 * 2 + 8);
              *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) | 0x100;
              goto LAB_0049d85e;
            }
            puVar1[1] = puVar1[1] + 1;
            if (*puVar1 <= puVar1[1]) {
              puVar1[1] = 0;
            }
            if (puVar1[1] == puVar1[6]) {
              *(uint *)(puVar1 + 4) = uVar6 & 0xfffffeff;
              goto LAB_0049d971;
            }
            uVar6 = (uint)puVar1[1];
          }
          piVar12 = *(int **)(puVar1 + uVar6 * 2 + 8);
        }
        else {
          uVar3 = puVar1[1] + 1;
          piVar12 = *(int **)(puVar1 + (uint)puVar1[1] * 2 + 8);
          puVar1[1] = uVar3;
          if (*puVar1 <= uVar3) {
            puVar1[1] = 0;
          }
        }
LAB_0049d85e:
        iVar8 = *piVar12;
        if (iVar8 != 0) {
          if (*(char *)(iVar8 + 0x23) == '\0') {
            Fs_Open(param_3 + 0x3c);
            SndSample_Load(iVar8,0);
            Fs_Close();
            mark_alloc_memory_with_flags
                      (*(undefined4 *)(iVar8 + 0x24),*(undefined4 *)(param_3 + 0xc4));
          }
          local_c[-2] = *(uint *)(iVar8 + 0x24);
          if ((puVar1[4] & 1) == 0) {
            local_c[1] = 0;
          }
          else {
            local_c[1] = param_2[1];
          }
          iVar4 = SndTrig_Random(*(undefined4 *)(param_1 + 0x20));
          iVar8 = *(int *)(param_1 + 0x1c);
          iVar5 = SndTrig_Random(piVar12[2]);
          local_c = (uint *)*param_2;
          if (local_c == (uint *)0x0) {
            local_c = (uint *)0x10000;
          }
          lVar2 = (longlong)(iVar4 + iVar8) * (longlong)(iVar5 + piVar12[1]);
          lVar2 = (longlong)(int)(((uint)lVar2 >> 0x10) + (int)((ulonglong)lVar2 >> 0x20) * 0x10000)
                  * (longlong)(int)local_c;
          puVar9[-1] = ((uint)lVar2 >> 0x10) + (int)((ulonglong)lVar2 >> 0x20) * 0x10000;
          if ((*(int *)(puVar1 + 2) == 0) || (param_2[6] != 0)) {
            *puVar9 = param_2[2];
          }
          else {
            uVar6 = SndTrig_PickLayer((uint)param_2[5] >> 8,*(int *)(puVar1 + 2) << 8,piVar12[3],
                                      piVar12[4]);
            *puVar9 = uVar6;
          }
          if (((*(byte *)(param_2 + 4) & 4) != 0) && ((uint)param_2[7] < *puVar9)) {
            *puVar9 = param_2[7];
          }
          local_c = puVar9 + 5;
        }
      }
LAB_0049d971:
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
    } while (local_10 < *(uint *)(param_1 + 0x24));
  }
  uVar6 = 0;
  puVar10 = &DAT_00603e8c;
  puVar9 = (uint *)(param_1 + 0x50);
  do {
    if (puVar10[-2] == 0) {
      return uVar6;
    }
    if (*(uint *)(param_3 + 0xc0) <= *puVar10) {
      if (param_2[3] == -1) {
        uVar7 = Audio_PlaySample(puVar10[-2],puVar10[1],*puVar10,puVar10[-1]);
      }
      else {
        uVar7 = Audio_PlaySample3(param_2[3],puVar10[-2],puVar10[1],*puVar10,puVar10[-1]);
      }
      puVar10[-3] = uVar7;
      *puVar9 = uVar7;
    }
    uVar6 = uVar6 + 1;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 5;
  } while (uVar6 < 8);
  return uVar6;
}

