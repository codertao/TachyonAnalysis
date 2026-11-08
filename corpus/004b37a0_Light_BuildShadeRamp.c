
/* uses sector RGB tint 0x669200..08 [l] */

void Light_BuildShadeRamp(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar5 = DAT_006691f8;
  iVar8 = DAT_006691f8 + -0x80;
  iVar6 = DAT_006691fc;
  if (0x80 < DAT_006691fc) {
    iVar6 = DAT_006691fc * 4 + -0x180;
  }
  local_4 = iVar8;
  Pal_SetCurveParams(DAT_006691f4,0x80,0x80,0x80,0x80);
  local_8 = (iVar5 + -0x200) * iVar6;
  iVar5 = -0x100;
  iVar7 = 0;
  do {
    if (iVar7 < 0x400) {
      iVar1 = DAT_00666b00 + iVar5;
      uVar2 = iVar1 * DAT_00669200;
      uVar4 = iVar1 * DAT_00669208;
      uVar3 = iVar1 * DAT_00669204;
    }
    else {
      uVar2 = DAT_00666b00 * DAT_00669200 + DAT_006691e8 * iVar5;
      uVar3 = DAT_00669204 * DAT_00666b00 + DAT_006691ec * iVar5;
      uVar4 = DAT_00669208 * DAT_00666b00 + DAT_006691f0 * iVar5;
      iVar8 = local_4;
    }
    local_14 = ((int)((iVar8 + -0x80 + (uVar2 >> 8)) * iVar6) >> 7) + 0x80;
    local_10 = ((int)((iVar8 + -0x80 + (uVar3 >> 8)) * iVar6) >> 7) + 0x80;
    local_c = ((int)((iVar8 + -0x80 + (uVar4 >> 8)) * iVar6) >> 7) + 0x80;
    if (local_14 < 0x100) {
      if (local_14 < 0) {
        local_14 = 0;
      }
    }
    else {
      local_14 = 0xff;
    }
    if (local_10 < 0x100) {
      if (local_10 < 0) {
        local_10 = 0;
      }
    }
    else {
      local_10 = 0xff;
    }
    if (local_c < 0x100) {
      if (local_c < 0) {
        local_c = 0;
      }
    }
    else {
      local_c = 0xff;
    }
    FUN_004aef50(&local_14,&local_10,&local_c);
    if (local_14 < 0xfd) {
      if (local_14 < 4) {
        local_14 = 4;
      }
    }
    else {
      local_14 = 0xfc;
    }
    if (local_10 < 0xfd) {
      if (local_10 < 4) {
        local_10 = 4;
      }
    }
    else {
      local_10 = 0xfc;
    }
    if (local_c < 0xfd) {
      if (local_c < 4) {
        local_c = 4;
      }
    }
    else {
      local_c = 0xfc;
    }
    (&DAT_00610482)[iVar7] = (char)local_14;
    (&DAT_00610481)[iVar7] = (char)local_10;
    (&DAT_00610480)[iVar7] = (char)local_c;
    local_14 = (local_8 >> 7) + 0x80;
    if (local_14 < 0x100) {
      if (local_14 < 0) {
        local_14 = 0;
      }
    }
    else {
      local_14 = 0xff;
    }
    local_10 = local_14;
    local_c = local_14;
    FUN_004aef50(&local_14,&local_10,&local_c);
    (&DAT_0060f882)[iVar7] = (undefined1)local_14;
    (&DAT_0060f881)[iVar7] = (undefined1)local_10;
    (&DAT_0060f880)[iVar7] = (undefined1)local_c;
    local_8 = local_8 + iVar6;
    iVar7 = iVar7 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar7 < 0xbfc);
  return;
}

