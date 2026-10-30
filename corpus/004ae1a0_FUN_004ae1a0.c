
void FUN_004ae1a0(byte *param_1,int *param_2,int param_3,int param_4,uint param_5,byte param_6,
                 uint *param_7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined2 uVar9;
  int local_a8 [33];
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  byte *local_8;
  
  local_c = *param_7;
  local_20 = *param_2;
  local_1c = param_4;
  local_10 = param_7[1];
  local_18 = param_5;
  local_14 = 1;
  if ((param_1 != (byte *)0x0) && (bVar5 = *param_1, bVar5 != 0)) {
    piVar8 = local_a8;
    for (iVar7 = 0x21; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    if (DAT_00564ae4 == 0) {
      local_a8[0] = 1;
    }
    else {
      local_8 = param_1;
      do {
        iVar7 = local_20 + (uint)bVar5 * 0xc;
        piVar8 = local_a8;
        if (local_a8[0] != 0) {
          iVar6 = local_a8[0];
          do {
            if (iVar6 == *(int *)(iVar7 + 8)) goto LAB_004ae243;
            iVar6 = piVar8[1];
            piVar8 = piVar8 + 1;
          } while (iVar6 != 0);
        }
        *piVar8 = *(int *)(iVar7 + 8);
LAB_004ae243:
        local_8 = local_8 + 1;
        bVar5 = *local_8;
      } while (bVar5 != 0);
    }
    uVar2 = param_2[3];
    if (((uVar2 != 0) && (uVar3 = param_7[5], uVar3 != 0)) && (uVar3 != uVar2)) {
      local_8 = (byte *)((longlong)((ulonglong)uVar3 << 0x20) / (longlong)(int)uVar2);
      local_c = (uint)((longlong)(int)*param_7 * (longlong)(int)local_8) >> 0x10 |
                (int)((ulonglong)((longlong)(int)*param_7 * (longlong)(int)local_8) >> 0x20) << 0x10
      ;
    }
    uVar2 = param_2[3];
    if (((uVar2 != 0) && (uVar3 = param_7[6], uVar3 != 0)) && (uVar3 != uVar2)) {
      local_8 = (byte *)((longlong)((ulonglong)uVar3 << 0x20) / (longlong)(int)uVar2);
      local_10 = (uint)((longlong)(int)param_7[1] * (longlong)(int)local_8) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)param_7[1] * (longlong)(int)local_8) >> 0x20) <<
                 0x10;
    }
    local_24 = local_c >> 0x10;
    if ((param_6 & 2) != 0) {
      local_14 = 2;
    }
    if (((*(uint *)(param_2[1] + 0xc) & 0x100000) != 0) || ((param_7[4] & 0x100000) != 0)) {
      FUN_004ad9c0(param_2[2],1);
    }
    iVar7 = param_3;
    if (local_14 != 0) {
      do {
        piVar8 = local_a8;
        iVar4 = local_14;
        iVar6 = local_a8[0];
        while (iVar6 != 0) {
          if (iVar4 == 2) {
            local_18 = param_7[7];
            local_1c = (param_7[9] * param_7[1] >> 0x10) + param_4;
            iVar7 = (param_7[8] * *param_7 >> 0x10) + param_3;
          }
          else if (iVar4 == 1) {
            local_18 = param_5;
            local_1c = param_4;
            iVar7 = param_3;
          }
          bVar5 = *param_1;
          local_8 = param_1;
          while (bVar5 != 0) {
            DAT_005a62d0 = (uint)*(ushort *)(local_20 + (uint)*local_8 * 0xc);
            iVar6 = local_20 + (uint)*local_8 * 0xc;
            DAT_005a62d4 = (uint)*(ushort *)(iVar6 + 6);
            DAT_005a62e0 = (*(ushort *)(iVar6 + 2) * local_c >> 0x10) + 1;
            DAT_005a62e4 = *(byte *)(iVar6 + 4) * local_10 >> 0x10;
            DAT_005a64cc = *(ushort *)(iVar6 + 2) + 1;
            DAT_005a64d0 = (uint)*(byte *)(iVar6 + 4);
            DAT_005a64c4 = 0xffffffff;
            iVar4 = *(int *)(*(int *)(iVar6 + 8) + 0xc);
            DAT_005a62d8 = iVar7;
            DAT_005a62dc = local_1c;
            *(uint *)(*(int *)(iVar6 + 8) + 0xc) = param_7[4] + iVar4;
            DAT_005a64c8 = *(int *)(iVar6 + 8);
            DAT_005a64c0 = *(undefined4 *)(*(int *)(iVar6 + 8) + 0xc);
            *(uint *)(DAT_005a64c8 + 4) = local_18;
            if (param_7[3] != 0) {
              if (DAT_00564ae4 == 0) {
                uVar9 = (undefined2)param_7[3];
              }
              else {
                if (*piVar8 != *(int *)(iVar6 + 8)) goto LAB_004ae451;
                uVar9 = (undefined2)param_7[3];
              }
              FUN_004acde0(uVar9);
            }
LAB_004ae451:
            *(int *)(*(int *)(iVar6 + 8) + 0xc) = iVar4;
            local_8 = local_8 + 1;
            iVar7 = iVar7 + -1 + DAT_005a62e0 + local_24;
            iVar4 = local_14;
            bVar5 = *local_8;
          }
          piVar1 = piVar8 + 1;
          piVar8 = piVar8 + 1;
          iVar6 = *piVar1;
        }
        if (iVar4 != 2) break;
        local_14 = 1;
      } while( true );
    }
    if (DAT_00604584 != 0) {
      FUN_004ad9c0(DAT_00604584,1);
    }
  }
  return;
}

