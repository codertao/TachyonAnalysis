
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* runtime (hardware) mesh: float verts + UV*(1/65536), copies normals/attach/pts54/materials, tri
   lists */

void MeshClone_Build(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  int *local_4;
  
  puVar3 = param_1;
  *param_2 = param_1;
  iVar2 = *param_3;
  param_1[0xd] = *(undefined4 *)(iVar2 + 0x3c);
  param_1[0xe] = *(undefined4 *)(iVar2 + 0x40);
  param_1[9] = *(undefined4 *)(iVar2 + 0x2c);
  local_c = param_1 + 0xd;
  local_10 = param_1 + 0xe;
  local_8 = param_1 + 9;
  param_1[0xc] = *(undefined4 *)(iVar2 + 0x38);
  param_1[0xb] = *(undefined4 *)(iVar2 + 0x34);
  param_1[10] = *(undefined4 *)(iVar2 + 0x30);
  puVar1 = param_1 + 0xc;
  param_1[6] = *(undefined4 *)(iVar2 + 0x20);
  param_1[3] = *(undefined4 *)(iVar2 + 0x14);
  param_1[5] = *(undefined4 *)(iVar2 + 0x1c);
  param_1[7] = *(undefined4 *)(iVar2 + 0x24);
  param_1[8] = *(undefined4 *)(iVar2 + 0x28);
  param_1[4] = *(undefined4 *)(iVar2 + 0x18);
  param_1[2] = *(undefined4 *)(iVar2 + 0x10);
  local_4 = param_1 + 0x15;
  *local_4 = *(int *)(iVar2 + 4);
  *param_1 = *(undefined4 *)(iVar2 + 8);
  param_1[1] = *(undefined4 *)(iVar2 + 0xc);
  puVar4 = param_1 + 0x17;
  uVar11 = 0;
  param_1[0x10] = puVar4;
  if (param_1[10] != 0) {
    piVar6 = *(int **)(iVar2 + 0x48);
    pfVar9 = (float *)(param_1 + 0x21);
    do {
      puVar4 = puVar4 + 0xc;
      uVar11 = uVar11 + 1;
      pfVar9[-1] = (float)*piVar6;
      *pfVar9 = (float)piVar6[1];
      pfVar9[1] = (float)piVar6[2];
      pfVar9[-7] = (float)piVar6[8] * _DAT_0052e5d8;
      pfVar9[-6] = (float)piVar6[9] * _DAT_0052e5d8;
      piVar6 = piVar6 + 0xb;
      pfVar9 = pfVar9 + 0xc;
    } while (uVar11 < (uint)param_1[10]);
  }
  param_1[0x12] = puVar4;
  param_3 = *(int **)(iVar2 + 0x50);
  param_1 = (undefined4 *)0x0;
  param_2 = puVar4;
  if (*puVar1 != 0) {
    do {
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      param_2[3] = param_3[3];
      param_2 = param_2 + 4;
      puVar4 = puVar4 + 4;
      param_3 = param_3 + 4;
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while (param_1 < *puVar1);
  }
  puVar3[0x14] = puVar4;
  param_2 = *(undefined4 **)(iVar2 + 0x58);
  uVar11 = 0;
  param_1 = puVar4;
  if (*local_10 != 0) {
    do {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1 = param_1 + 4;
      puVar4 = puVar4 + 4;
      param_2 = param_2 + 4;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *local_10);
  }
  uVar11 = *local_c;
  puVar3[0x13] = puVar4;
  param_2 = *(undefined4 **)(iVar2 + 0x54);
  uVar7 = 0;
  param_1 = puVar4;
  if (uVar11 != 0) {
    do {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1 = param_1 + 3;
      puVar4 = puVar4 + 3;
      param_2 = param_2 + 3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *local_c);
  }
  puVar3[0xf] = puVar4;
  param_2 = *(undefined4 **)(iVar2 + 0x44);
  uVar11 = 0;
  param_1 = puVar4;
  if (*local_8 != 0) {
    do {
      puVar5 = param_2;
      puVar12 = param_1;
      for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar12 = puVar12 + 1;
      }
      param_1 = param_1 + 7;
      puVar4 = puVar4 + 7;
      param_2 = param_2 + 7;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *local_8);
  }
  iVar8 = *local_4;
  iVar13 = puVar3[0xf];
  puVar3[0x16] = puVar4;
  puVar5 = puVar4 + iVar8 * 6;
  param_1 = (undefined4 *)0x0;
  iVar8 = 0;
  iVar10 = *(int *)(iVar2 + 0x44);
  param_2 = puVar4;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    do {
      puVar5 = (undefined4 *)
               MeshClone_BuildTriList(puVar5,param_2,iVar10,iVar13,iVar2,&local_14,iVar8);
      if (local_14 != 0) {
        param_2 = param_2 + 6;
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
      iVar13 = iVar13 + 0x1c;
      iVar8 = iVar10;
      iVar10 = iVar10 + 0x1c;
    } while (param_1 < *(uint *)(iVar2 + 0x2c));
  }
  iVar8 = puVar3[0x16];
  uVar11 = 0;
  iVar13 = 0;
  iVar10 = *(int *)(iVar2 + 0x44);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    do {
      puVar5 = (undefined4 *)MeshClone_BuildVertList(puVar5,iVar8,iVar10,iVar2,&local_14,iVar13);
      if (local_14 != 0) {
        iVar8 = iVar8 + 0x18;
      }
      uVar11 = uVar11 + 1;
      iVar13 = iVar10;
      iVar10 = iVar10 + 0x1c;
    } while (uVar11 < *(uint *)(iVar2 + 0x2c));
  }
  return;
}

