
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: up to 5 additive screen quads (notes/formats.md) */

void FogSheets_Render(void)

{
  undefined4 *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float local_f4;
  int local_f0;
  int local_e8;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined2 local_ca;
  float local_c8 [4];
  uint local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0 [4];
  uint local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78 [4];
  uint local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [4];
  uint local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [4];
  uint local_18;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_de = 1;
  local_da = 1;
  local_d8 = 2;
  local_d4 = 2;
  local_d2 = 3;
  local_ce = 3;
  local_e0 = 0;
  local_dc = 4;
  local_d6 = 4;
  local_d0 = 4;
  local_cc = 0;
  local_ca = 4;
  if (DAT_00564d14 != 0) {
    Gfx_HwControl50();
    local_f4 = DAT_0055f1dc;
    if (_DAT_0052efd8 < DAT_0055f1dc) {
      local_f4 = DAT_0055f1dc - _DAT_0052e548;
      _DAT_00564d18 = _DAT_00564d18 - _DAT_0052efd4;
      _DAT_00564d1c = _DAT_00564d1c - _DAT_0052efd0;
      puVar8 = &DAT_006c9094;
      do {
        puVar1 = puVar8 + -3;
        *puVar8 = *puVar1;
        puVar8[1] = puVar8[-2];
        puVar8[2] = puVar8[-1];
        puVar8 = puVar1;
      } while (0x6c9040 < (int)puVar1);
    }
    if (local_f4 <= _DAT_0052e59c) {
      local_f4 = local_f4 + _DAT_0052e548;
      _DAT_00564d18 = _DAT_00564d18 + _DAT_0052efd4;
      _DAT_00564d1c = _DAT_00564d1c + _DAT_0052efd0;
      puVar8 = &DAT_006c9040;
      do {
        puVar1 = puVar8 + 3;
        *puVar8 = *puVar1;
        puVar8[1] = puVar8[4];
        puVar8[2] = puVar8[5];
        puVar8 = puVar1;
      } while ((int)puVar1 < 0x6c9094);
    }
    local_c8[2] = 0.9998;
    local_c8[3] = 1.0;
    local_b4 = 0;
    fVar3 = (float)_DAT_006b0824 - _DAT_0052e59c;
    pfVar10 = local_c8;
    pfVar11 = local_a0;
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    pfVar10 = local_c8;
    pfVar11 = local_78;
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    pfVar10 = local_c8;
    pfVar11 = local_50;
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    pfVar10 = local_c8;
    pfVar11 = local_28;
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    local_78[1] = (float)_DAT_006b0828 - _DAT_0052e59c;
    local_28[0] = (float)_DAT_006b0824 * _DAT_0052e594;
    local_c8[0] = 0.0;
    local_c8[1] = 0.0;
    local_a0[1] = 0.0;
    local_50[0] = 0.0;
    local_28[1] = (float)_DAT_006b0828 * _DAT_0052e594;
    local_a0[0] = fVar3;
    local_78[0] = fVar3;
    local_50[1] = local_78[1];
    GetTickCount();
    GetTickCount();
    local_e8 = 0;
    pfVar10 = (float *)&DAT_006c9044;
    do {
      if (local_f4 < _DAT_0052efcc) {
        bVar2 = local_f4 < _DAT_0052efc8;
        pfVar10[-1] = local_f4;
        if (bVar2) {
          if (_DAT_0052efc0 <= local_f4) {
            local_f0 = (int)(longlong)
                            ROUND((local_f4 - _DAT_0052efc8) * _DAT_0052efbc * _DAT_0052efb8);
            local_f0 = 0x1e - local_f0;
            goto LAB_004b9531;
          }
          if (local_f4 < _DAT_0052efb4) {
            local_f0 = (int)(longlong)
                            ROUND((local_f4 - _DAT_0052efb4) * _DAT_0052efc4 * _DAT_0052efb0);
            local_f0 = 0x3c - local_f0;
            goto LAB_004b9531;
          }
LAB_004b953e:
          local_f0 = 0x3c;
        }
        else {
          local_f0 = (int)(longlong)
                          ROUND((local_f4 - _DAT_0052efcc) * _DAT_0052efc4 * _DAT_0052ea78);
LAB_004b9531:
          if (local_f0 < 0) {
            local_f0 = 0;
          }
          else if (0x3c < local_f0) goto LAB_004b953e;
        }
        fVar3 = _DAT_0052efac / local_f4;
        local_c8[2] = _DAT_0052efa8;
        if ((_DAT_0052efa8 <= fVar3) && (local_c8[2] = fVar3, _DAT_0052efa4 < fVar3)) {
          local_c8[2] = _DAT_0052efa4;
        }
        fVar3 = (float)local_e8 * _DAT_0052efd4 + _DAT_00564d18 + *pfVar10;
        fVar4 = (float)local_e8 * _DAT_0052efd0 + _DAT_00564d1c + pfVar10[1];
        fVar5 = local_f4 * _DAT_0052ecac;
        fVar7 = (local_c8[0] - _DAT_006b082c) * fVar5 * _DAT_006c9020;
        local_b8 = ((DAT_0055f1ec & 0xff0000) * local_f0 & 0xff00ffff |
                    (DAT_0055f1ec & 0xff00) * local_f0 & 0xffff00ff |
                   (DAT_0055f1ec & 0xff) * local_f0) >> 8 | 0xff000000;
        fVar6 = (local_c8[1] - _DAT_006b0830) * fVar5 * _DAT_006c9020;
        local_b0 = fVar7 * _DAT_006c9030 + fVar6 * _DAT_006c9028 + fVar3 + _DAT_006c9b44;
        local_ac = fVar7 * _DAT_006c9034 + fVar6 * _DAT_006c902c + fVar4 + _DAT_006c9b3c;
        local_a4 = local_b0 * _DAT_0052efa0;
        local_a8 = local_ac * _DAT_0052efa0;
        fVar7 = (local_a0[0] - _DAT_006b082c) * fVar5 * _DAT_006c9020;
        fVar6 = (local_a0[1] - _DAT_006b0830) * fVar5 * _DAT_006c9020;
        local_88 = fVar7 * _DAT_006c9030 + fVar6 * _DAT_006c9028 + fVar3 + _DAT_006c9b44;
        local_84 = fVar7 * _DAT_006c9034 + fVar6 * _DAT_006c902c + fVar4 + _DAT_006c9b3c;
        local_7c = local_88 * _DAT_0052efa0;
        local_80 = local_84 * _DAT_0052efa0;
        fVar7 = (local_78[0] - _DAT_006b082c) * fVar5 * _DAT_006c9020;
        fVar6 = (local_78[1] - _DAT_006b0830) * fVar5 * _DAT_006c9020;
        local_60 = fVar7 * _DAT_006c9030 + fVar6 * _DAT_006c9028 + fVar3 + _DAT_006c9b44;
        local_5c = fVar7 * _DAT_006c9034 + fVar6 * _DAT_006c902c + fVar4 + _DAT_006c9b3c;
        local_54 = local_60 * _DAT_0052efa0;
        local_58 = local_5c * _DAT_0052efa0;
        fVar7 = (local_50[0] - _DAT_006b082c) * fVar5 * _DAT_006c9020;
        fVar6 = (local_50[1] - _DAT_006b0830) * fVar5 * _DAT_006c9020;
        local_38 = fVar7 * _DAT_006c9030 + fVar6 * _DAT_006c9028 + fVar3 + _DAT_006c9b44;
        local_34 = fVar7 * _DAT_006c9034 + fVar6 * _DAT_006c902c + fVar4 + _DAT_006c9b3c;
        local_2c = local_38 * _DAT_0052efa0;
        local_30 = local_34 * _DAT_0052efa0;
        fVar6 = (local_28[0] - _DAT_006b082c) * fVar5 * _DAT_006c9020;
        fVar5 = (local_28[1] - _DAT_006b0830) * fVar5 * _DAT_006c9020;
        local_10 = fVar6 * _DAT_006c9030 + fVar5 * _DAT_006c9028 + fVar3 + _DAT_006c9b44;
        local_c = fVar6 * _DAT_006c9034 + fVar5 * _DAT_006c902c + fVar4 + _DAT_006c9b3c;
        local_4 = local_10 * _DAT_0052efa0;
        local_8 = local_c * _DAT_0052efa0;
        local_a0[2] = local_c8[2];
        local_90 = local_b8;
        local_78[2] = local_c8[2];
        local_68 = local_b8;
        local_50[2] = local_c8[2];
        local_40 = local_b8;
        local_28[2] = local_c8[2];
        local_18 = local_b8;
        Gfx_SelectPalRefStage(DAT_006c90dc,0);
        Gfx_SelectPalRefStage(DAT_006c961c,1);
        Gfx_SetTextureMulti(&DAT_006c90c0,DAT_006c90cc,&DAT_006c9600,DAT_006c960c,2);
        Gfx_DrawPolyBatch(local_c8,5,&local_e0,4,DAT_006c90cc);
      }
      local_f4 = local_f4 + _DAT_0052e548;
      local_e8 = local_e8 + 1;
      pfVar10 = pfVar10 + 3;
    } while ((int)pfVar10 < 0x6c9075);
  }
  return;
}

