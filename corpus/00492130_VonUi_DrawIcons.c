
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void VonUi_DrawIcons(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_40;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar6 = 0;
  local_c = 0;
  local_8 = 0;
  lVar2 = (longlong)DAT_00565860;
  lVar3 = (longlong)DAT_005a67e4;
  if (DAT_00565884 == 0) {
    DAT_00565a40 = 0;
    DAT_00565a44 = 0;
    DAT_00565a48 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = DAT_00563e5c + DAT_00565a60;
    if (0x19 < uVar10) {
      DAT_00565a48 = DAT_00565a48 + DAT_00565a60;
    }
    if (DAT_00565a48 != 0) {
      if (DAT_00565a44 < (uint)(DAT_00565a60 * 0x48)) {
        DAT_00565a44 = 0;
      }
      else {
        DAT_00565a44 = DAT_00565a44 + DAT_00565a60 * -0x48;
      }
    }
    if (DAT_00565a44 < DAT_00565a40) {
      DAT_00565a44 = DAT_00565a40;
    }
  }
  puVar5 = (uint *)&DAT_00559e68;
  do {
    uVar4 = uVar6;
    if (DAT_00565a40 <= *puVar5) break;
    puVar5 = puVar5 + 1;
    uVar6 = uVar6 + 1;
    uVar4 = local_8;
  } while ((int)puVar5 < 0x559eb8);
  local_8 = uVar4;
  uVar6 = 0;
  puVar5 = (uint *)&DAT_00559e68;
  do {
    uVar4 = uVar6;
    if (DAT_00565a44 <= *puVar5) break;
    puVar5 = puVar5 + 1;
    uVar6 = uVar6 + 1;
    uVar4 = local_c;
  } while ((int)puVar5 < 0x559eb8);
  local_c = uVar4;
  if ((local_c == local_8) || (DAT_00565a44 == 0)) {
    DAT_00565a48 = 0;
    DAT_00563e5c = 0;
  }
  else {
    DAT_00563e5c = uVar10 + DAT_00565a60;
    if (0x19 < DAT_00563e5c) {
      DAT_00565a48 = DAT_00565a48 + DAT_00565a60;
    }
  }
  local_10 = (uint)((longlong)DAT_005a67e4 * 0x232) >> 0x10 |
             (int)((ulonglong)((longlong)DAT_005a67e4 * 0x232) >> 0x20) << 0x10;
  iVar8 = (int)((uint)((longlong)DAT_005a67e4 * 0x46) >> 0x10 |
               (int)((ulonglong)((longlong)DAT_005a67e4 * 0x46) >> 0x20) << 0x10) / 0x14;
  DAT_005a62e0 = (uint)(iVar8 * 3) >> 2;
  iVar8 = iVar8 - DAT_005a62e0;
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  iVar8 = iVar8 + DAT_005a62e0;
  DAT_005a62d0 = 0;
  DAT_005a62d4 = 0;
  DAT_005a64cc = 2;
  DAT_005a64d0 = 5;
  DAT_005a62e4 = (uint)((longlong)DAT_005a67e4 * 5) >> 0x10 |
                 (int)((ulonglong)((longlong)DAT_005a67e4 * 5) >> 0x20) << 0x10;
  DAT_005a64c4 = 0xffffffff;
  DAT_005a64c8 = &DAT_005657d4;
  DAT_005a64c0 = DAT_005657e0;
  uVar6 = 0;
  do {
    if (uVar6 < 0xc) {
      iVar7 = 0;
      iVar9 = 0xff;
    }
    else {
      iVar7 = 0xff;
      if (uVar6 < 0x11) {
        iVar9 = 0xff;
      }
      else {
        iVar9 = 0;
      }
    }
    if (uVar6 < local_8) {
      local_40 = 0xff;
    }
    else if (uVar6 == local_8) {
      if (local_8 == 0x13) {
        local_40 = 0xff;
      }
      else if (uVar6 == 0) {
        local_40 = (int)(longlong)ROUND(((float)DAT_00565a40 / (float)DAT_00559e68) * _DAT_0052ed8c)
        ;
        local_40 = 0x40 - local_40;
      }
      else if ((uint)(&DAT_00559e68)[uVar6] < DAT_00565a40) {
        iVar1 = *(int *)(uVar6 * 4 + 0x559e64);
        local_40 = (int)(longlong)
                        ROUND(((float)(DAT_00565a40 - iVar1) /
                              (float)((&DAT_00559e68)[uVar6] - iVar1)) * _DAT_0052ed8c);
        local_40 = 0x40 - local_40;
      }
      else {
        local_40 = 0x40;
      }
    }
    else if ((uVar6 <= local_8) || (local_40 = 0x40, uVar6 == local_c)) {
      local_40 = 0xc0;
    }
    VonUi_SetIconPos(local_10,(uint)(lVar2 * lVar3) >> 0x10 |
                              (int)((ulonglong)(lVar2 * lVar3) >> 0x20) << 0x10,
                     (iVar7 * local_40 & 0xffff00U) * 0x100 + (iVar9 * local_40 & 0xffffff00U));
    local_10 = local_10 + iVar8;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x14);
  return;
}

