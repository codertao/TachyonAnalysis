
undefined4 FUN_004c5080(undefined4 param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  init_andor_enter_crit_section_idx(0x19);
  CodePage = FUN_004c522d(param_1);
  if (CodePage != DAT_006c9b48) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_00562570;
LAB_004c50bd:
      if (*pUVar5 != CodePage) goto code_r0x004c50c1;
      local_8 = 0;
      puVar15 = &DAT_006c9c60;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x562580);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_00562568)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_006c9c60 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      DAT_006c9b5c = 1;
      DAT_006c9b48 = CodePage;
      DAT_006c9d64 = FUN_004c5277(CodePage);
      DAT_006c9b50 = *(undefined4 *)(iVar12 + 0x562574);
      DAT_006c9b54 = *(undefined4 *)(iVar12 + 0x562578);
      DAT_006c9b58 = *(undefined4 *)(iVar12 + 0x56257c);
      goto LAB_004c5211;
    }
    goto LAB_004c520c;
  }
  goto LAB_004c50a7;
code_r0x004c50c1:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x56265f < (int)pUVar5) goto code_r0x004c50cc;
  goto LAB_004c50bd;
code_r0x004c50cc:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_006c9d64 = 0;
    puVar15 = &DAT_006c9c60;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_006c9b5c = 0;
      DAT_006c9b48 = CodePage;
    }
    else {
      DAT_006c9b48 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_006c9c60 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_006c9c60 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_006c9d64 = FUN_004c5277(CodePage);
      DAT_006c9b5c = 1;
    }
    DAT_006c9b50 = 0;
    DAT_006c9b54 = 0;
    DAT_006c9b58 = 0;
  }
  else {
    if (DAT_005652b0 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_004c521e;
    }
LAB_004c520c:
    FUN_004c52aa();
  }
LAB_004c5211:
  FUN_004c52d3();
LAB_004c50a7:
  uVar14 = 0;
LAB_004c521e:
  leave_crit_section_idx(0x19);
  return uVar14;
}

