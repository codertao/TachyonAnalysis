
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b02d0(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  bool bVar13;
  char local_c;
  uint local_8;
  
  local_8 = (uint)*(ushort *)(param_1 + 0xe);
  if ((local_8 & 0x4100) == 0x4100) {
    local_8 = local_8 & 0xffffbeef | 0x12000000;
  }
  else if ((local_8 & 0x6000) == 0x6000) {
    local_8 = local_8 & 0xffff9fef | 0x11000000;
  }
  else if ((local_8 & 0x2100) == 0x2100) {
    local_8 = local_8 & 0xffffdeef | 0x10200000;
  }
  else if ((local_8 & 0x4000) == 0x4000) {
    local_8 = local_8 & 0xffffbfef | 0x10102000;
  }
  else if ((local_8 & 0x110) == 0x110) {
    local_8 = local_8 & 0xfffffeef | 0x400000;
  }
  else if (((byte)*(ushort *)(param_1 + 0xe) & 0x88) == 0x88) {
    local_8 = local_8 & 0xffffff6f | 0x10020000;
  }
  pcVar4 = (char *)FUN_004af180();
  uVar6 = DAT_00668f90;
  uVar7 = 0xffffffff;
  pcVar4[0x24] = -1;
  pcVar4[0x25] = -1;
  pcVar4[0x26] = -1;
  pcVar4[0x27] = -1;
  *(undefined4 *)(pcVar4 + 0x44) = uVar6;
  do {
    pcVar9 = param_2;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar9 + -uVar7;
  pcVar11 = pcVar4;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  uVar8 = local_8 & 0x1000000;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if (uVar8 == 0) {
    iVar5 = FUN_0049c3b0(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14),4,0,pcVar4);
    if (DAT_00668f58 != -1) {
      FUN_0049c670(iVar5,DAT_00668f5c);
    }
  }
  else {
    iVar5 = FUN_0049c5c0(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14));
    FUN_0049c840(iVar5,s_ALPHA_PAL_IMAGE_0055ec48);
  }
  if (iVar5 == 0) {
    FUN_004b0180();
  }
  _DAT_00603100 = *(uint *)(param_1 + 0x10);
  DAT_00603104 = *(uint *)(param_1 + 0x14);
  uVar7 = 0x1f;
  if (_DAT_00603100 != 0) {
    for (; _DAT_00603100 >> uVar7 == 0; uVar7 = uVar7 - 1) {
    }
  }
  uVar2 = 0x1f;
  if (DAT_00603104 != 0) {
    for (; DAT_00603104 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  param_2._0_1_ = (byte)uVar2;
  pcVar4[0x31] = (byte)param_2;
  *(int *)(pcVar4 + 0x28) = iVar5;
  pcVar4[0x30] = (byte)uVar7;
  *(undefined2 *)(pcVar4 + 0x20) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)(pcVar4 + 0x22) = *(undefined2 *)(param_1 + 0x14);
  *(uint *)(pcVar4 + 0x34) = DAT_00668f60 | local_8;
  pcVar4[0x4c] = '\0';
  if ((uVar7 < 2) || (uVar2 < 2)) {
    FUN_004b0280(param_1,1 << ((byte)uVar7 & 0x1f),1 << ((byte)param_2 & 0x1f));
  }
  if (((DAT_00668f60 | local_8) & 0x800) != 0) {
    pcVar4[0x4c] = pcVar4[0x4c] + '\x01';
  }
  if (((DAT_00668f60 | local_8) & 0x1000) == 0) {
    pcVar4[0x4c] = pcVar4[0x4c] + '\x01';
  }
  uVar7 = FUN_004af590(DAT_00668f60 | local_8);
  *(uint *)(pcVar4 + 0x34) = uVar7;
  if ((uVar7 & 7) != 0) {
    pcVar4[0x4c] = pcVar4[0x4c] + '\x01';
  }
  if (5 < (byte)pcVar4[0x4c]) {
    pcVar4[0x4c] = '\x05';
  }
  FUN_004a34c0(param_1 + 0x1c,iVar5,*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14));
  if ((DAT_0062c128 != 0) && ((local_8 & 0x400) == 0)) {
    _DAT_00603100 = *(uint *)(param_1 + 0x10);
    DAT_00603104 = *(uint *)(param_1 + 0x14);
    FUN_004a3290(iVar5);
    if (uVar8 == 0) {
      uVar6 = FUN_0049c6f0(*(undefined4 *)(pcVar4 + 0x28),
                           (uint)(*(ushort *)(pcVar4 + 0x22) >> 1) *
                           (uint)(*(ushort *)(pcVar4 + 0x20) >> 1),4);
      *(undefined4 *)(pcVar4 + 0x28) = uVar6;
    }
    iVar5 = 0x1f;
    if (_DAT_00603100 != 0) {
      for (; _DAT_00603100 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar3 = 0x1f;
    if (DAT_00603104 != 0) {
      for (; DAT_00603104 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    local_c = (char)iVar5;
    param_2._0_1_ = (byte)iVar3;
    pcVar4[0x30] = local_c;
    pcVar4[0x31] = (byte)param_2;
    *(undefined2 *)(pcVar4 + 0x20) = DAT_00603100;
    *(undefined2 *)(pcVar4 + 0x22) = (undefined2)DAT_00603104;
  }
  if ((local_8 & 0x20000) == 0) {
    if ((local_8 & 0x400000) == 0) {
      bVar13 = DAT_00668f7c == 0;
      puVar10 = (undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c + param_1);
      puVar12 = &DAT_00602e00;
      for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      if (bVar13) {
        if ((local_8 & 0x8000) == 0) {
          FUN_004a2dc0(*(undefined4 *)(pcVar4 + 0x28),
                       (uint)*(ushort *)(pcVar4 + 0x22) * (uint)*(ushort *)(pcVar4 + 0x20));
        }
        else {
          FUN_004ada90(DAT_00668f90,2);
          FUN_004a2dc0(*(undefined4 *)(pcVar4 + 0x28),
                       (uint)*(ushort *)(pcVar4 + 0x22) * (uint)*(ushort *)(pcVar4 + 0x20));
          FUN_004ada90(DAT_00668f90,1);
        }
      }
    }
  }
  else {
    pcVar4[0x2c] = '\0';
    pcVar4[0x2d] = '\0';
    pcVar4[0x2e] = '\0';
    pcVar4[0x2f] = '\0';
  }
  if (uVar8 != 0) {
    param_1 = FUN_004b01d0(pcVar4,param_1);
  }
  if (DAT_00668f78 != (code *)0x0) {
    (*DAT_00668f78)(*(undefined4 *)(pcVar4 + 0x28),*(undefined2 *)(pcVar4 + 0x20),
                    *(undefined2 *)(pcVar4 + 0x22),*(undefined4 *)(pcVar4 + 0x34));
  }
  return param_1;
}

