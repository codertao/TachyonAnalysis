
void FUN_004ade60(char *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  ushort *puVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  undefined4 local_e8 [25];
  undefined1 local_84 [100];
  undefined2 *local_20;
  undefined2 *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  char *local_8;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    puVar6 = &GLBL_some_str;
    puVar8 = local_e8;
    for (iVar9 = 0x19; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar6 = &DAT_00604420;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar6 = param_2;
    for (iVar9 = 0xe; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar15 = param_1;
    do {
      pcVar16 = pcVar15;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    local_8 = (char *)(param_2 + 4);
    pcVar15 = pcVar16 + -uVar10;
    pcVar16 = local_8;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar16 = pcVar16 + 1;
    }
    param_2[0xc] = param_3;
    if ((param_3 & 0x100000) == 0) {
      call_Font_Load(param_1,&DAT_00604420,10);
    }
    else {
      call_Font_Load(param_1,&DAT_00604420,2);
      uVar5 = Pal_Load(param_1);
      param_2[2] = uVar5;
    }
    puVar6 = (undefined4 *)FUN_0049c500(0xc00,4,0,s_polyfont_entry_table_0055ea30,param_4);
    *param_2 = puVar6;
    for (iVar9 = 0x300; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    FUN_004af050(DAT_00604420,DAT_00604428);
    DAT_005a62fc = 8;
    local_1c = (undefined2 *)*param_2;
    local_c = 0;
    local_8 = (char *)0x100;
    puVar13 = DAT_00604424;
    puVar6 = param_2;
    do {
      if ((7 < local_c) || (local_20 = puVar13, param_2[1] == 0)) {
        local_c = 0;
        local_20 = puVar13;
        puVar6 = (undefined4 *)FUN_0049c500(0x20,4,0,s_polyfont_material_0055ea1c,param_4);
        puVar8 = puVar6;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        puVar6[7] = param_2[1];
        if (param_2[1] != 0) {
          *(undefined4 **)(param_2[1] + 0x18) = puVar6;
        }
        param_2[1] = puVar6;
        uVar10 = 0;
        iVar12 = 0;
        pbVar14 = (byte *)(puVar13 + 2);
        iVar9 = 8;
        do {
          if (uVar10 < *pbVar14) {
            uVar10 = (uint)*pbVar14;
          }
          puVar1 = (ushort *)(pbVar14 + -2);
          pbVar14 = pbVar14 + 8;
          iVar12 = iVar12 + (uint)*puVar1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        uVar10 = uVar10 + 2;
        local_18 = iVar12 + 0x10;
        local_14 = 0x1f;
        if (local_18 != 0) {
          for (; local_18 >> local_14 == 0; local_14 = local_14 + -1) {
          }
        }
        local_10 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> local_10 == 0; local_10 = local_10 + -1) {
          }
        }
        uVar11 = 1 << ((byte)local_14 & 0x1f);
        if (uVar11 < local_18) {
          local_14 = local_14 + 1;
          uVar11 = 1 << ((byte)local_14 & 0x1f);
        }
        uVar7 = 1 << ((byte)local_10 & 0x1f);
        if (uVar7 < uVar10) {
          local_10 = local_10 + 1;
          uVar7 = 1 << ((byte)local_10 & 0x1f);
        }
        uVar17 = uVar11 * uVar7;
        puVar8 = (undefined4 *)FUN_0049c500(uVar17,4,0,s_polyfont_strip_0055ea0c,param_4);
        *puVar6 = puVar8;
        for (uVar10 = uVar17 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        *(undefined1 *)(puVar6 + 2) = (undefined1)local_14;
        *(undefined1 *)((int)puVar6 + 9) = (undefined1)local_10;
        puVar6[3] = param_3 | 0x30000009;
        FUN_004af030(*puVar6,uVar11);
        FUN_004af000(0,0,uVar11 - 1,uVar7 - 1);
        FUN_004adcd0(local_84,*puVar6,uVar11,uVar7,1);
        copy_str32_to_some_global(local_84);
        param_1 = (char *)0x1;
        local_18 = 1;
      }
      puVar4 = local_1c;
      puVar3 = local_20;
      *(undefined1 *)((int)local_1c + 5) = *(undefined1 *)((int)local_20 + 5);
      local_1c[1] = local_20[1];
      *(undefined1 *)(local_1c + 2) = *(undefined1 *)(local_20 + 2);
      *local_1c = (short)param_1;
      local_1c[3] = (short)local_18;
      *(undefined4 **)(local_1c + 4) = puVar6;
      FUN_004af070(param_1,local_18,local_20[1],*(undefined1 *)(local_20 + 2),*local_20,local_20[3])
      ;
      puVar13 = puVar3 + 4;
      local_1c = puVar4 + 6;
      local_20 = puVar13;
      param_1 = param_1 + (ushort)puVar3[1] + 2;
      local_c = local_c + 1;
      local_8 = (char *)((int)local_8 + -1);
    } while (local_8 != (char *)0x0);
    if (DAT_00604420 != 0) {
      OurFreeMem(DAT_00604420);
      DAT_00604420 = 0;
    }
    if (DAT_00604424 != (undefined2 *)0x0) {
      OurFreeMem(DAT_00604424);
      DAT_00604424 = (undefined2 *)0x0;
    }
    puVar6 = local_e8;
    puVar8 = &GLBL_some_str;
    for (iVar9 = 0x19; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  return;
}

