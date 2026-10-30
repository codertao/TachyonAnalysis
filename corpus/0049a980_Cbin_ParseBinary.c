
/* build string table + group/entry/param tree from decrypted buffer */

undefined4 Cbin_ParseBinary(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  int *local_14;
  int local_c;
  
  piVar3 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar16 = *param_1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[7] = 1;
  Cbin_Decrypt((int *)(iVar16 + 0x14),*(int *)(iVar16 + 8) + -0x14 + *(int *)(iVar16 + 4),
               iVar16 + 0x10);
  pcVar13 = (char *)(*(int *)(iVar16 + 4) + iVar16);
  uVar8 = *(uint *)(iVar16 + 0xc);
  piVar4 = (int *)FUN_0049c7d0(uVar8 * 4,s_string_table_0055d748);
  uVar11 = 0;
  param_1 = piVar4;
  if (uVar8 != 0) {
    do {
      if (uVar11 != 0) {
        uVar7 = 0xffffffff;
        pcVar18 = pcVar13;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        } while (cVar1 != '\0');
        pcVar13 = pcVar13 + ~uVar7;
      }
      uVar11 = uVar11 + 1;
      *param_1 = (int)pcVar13;
      param_1 = param_1 + 1;
    } while (uVar11 < uVar8);
  }
  iVar19 = *(int *)(iVar16 + 0x14);
  piVar3[6] = iVar19;
  piVar5 = (int *)FUN_0049c7d0(iVar19 * 0x1c,s_config_labels_0055d738);
  piVar3[10] = (int)piVar5;
  piVar14 = piVar5;
  for (uVar8 = (uint)(iVar19 * 0x1c) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *piVar14 = 0;
    piVar14 = piVar14 + 1;
  }
  for (iVar9 = 0; iVar17 = iVar19, piVar12 = (int *)(iVar16 + 0x18), iVar9 != 0; iVar9 = iVar9 + -1)
  {
    *(undefined1 *)piVar14 = 0;
    piVar14 = (int *)((int)piVar14 + 1);
  }
  for (; iVar17 != 0; iVar17 = iVar17 + -1) {
    piVar5[3] = piVar12[1];
    if (*piVar12 != 0) {
      iVar9 = piVar4[*piVar12 + -1];
      *piVar5 = iVar9;
      FUN_004c83ea(iVar9);
    }
    piVar5 = piVar5 + 7;
    piVar12 = piVar12 + 2;
  }
  local_c = piVar3[6];
  param_1 = (int *)(iVar16 + 0x18) + iVar19 * 2;
  iVar16 = piVar3[10];
  uVar8 = FUN_0049a900(iVar16,local_c);
  puVar6 = (undefined4 *)FUN_0049c7d0(uVar8,s_config_elements_0055d7a8);
  piVar3[0x10] = (int)puVar6;
  for (uVar11 = uVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  piVar5 = (int *)piVar3[0x10];
  if (local_c != 0) {
    piVar14 = (int *)(iVar16 + 0x18);
    local_14 = piVar5;
    do {
      if (piVar14[-3] != 0) {
        *piVar14 = (int)piVar5;
        iVar19 = piVar14[-3] + 1;
        piVar12 = piVar5;
        piVar15 = param_1;
        for (iVar16 = iVar19; iVar16 != 0; iVar16 = iVar16 + -1) {
          piVar5[3] = piVar15[1];
          if (*piVar15 != 0) {
            *piVar5 = piVar4[*piVar15 + -1];
          }
          piVar5 = piVar5 + 5;
          piVar15 = piVar15 + 2;
          piVar12 = local_14;
        }
        param_1 = param_1 + iVar19 * 2;
        piVar5 = piVar12 + iVar19 * 5;
        local_14 = piVar5;
      }
      piVar14 = piVar14 + 7;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  iVar16 = piVar3[6];
  piVar5 = (int *)piVar3[10];
  uVar8 = FUN_0049a930(piVar5,iVar16);
  puVar6 = (undefined4 *)FUN_0049c7d0(uVar8,s_config_elements_0055d7a8);
  piVar3[0x12] = (int)puVar6;
  for (uVar11 = uVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  piVar14 = (int *)piVar3[0x12];
  local_14 = piVar14;
  for (; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (piVar5[3] != 0) {
      piVar12 = (int *)piVar5[6];
      for (iVar19 = piVar5[3] + 1; iVar19 != 0; iVar19 = iVar19 + -1) {
        iVar9 = piVar12[3];
        piVar12[4] = (int)piVar14;
        piVar15 = piVar14;
        piVar10 = param_1;
        for (iVar17 = iVar9; iVar17 != 0; iVar17 = iVar17 + -1) {
          piVar14[2] = *piVar12;
          piVar14[1] = *piVar5;
          piVar14[3] = piVar10[1];
          iVar2 = *piVar10;
          *piVar14 = iVar2;
          if (((*(byte *)(piVar14 + 3) & 4) != 0) && (iVar2 != 0)) {
            *piVar14 = piVar4[iVar2 + -1];
            piVar15 = local_14;
          }
          piVar14 = piVar14 + 5;
          piVar10 = piVar10 + 2;
        }
        piVar12 = piVar12 + 5;
        param_1 = param_1 + iVar9 * 2;
        piVar14 = piVar15 + iVar9 * 5;
        local_14 = piVar14;
      }
    }
    piVar5 = piVar5 + 7;
  }
  if (piVar4 != (int *)0x0) {
    FUN_0049c810(piVar4);
  }
  if (DAT_006040ec != 0) {
    FUN_004bd0d6(piVar3[10],piVar3[6],0x1c,&LAB_0049a1a0);
  }
  return 1;
}

