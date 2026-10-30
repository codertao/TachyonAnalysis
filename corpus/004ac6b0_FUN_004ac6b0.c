
void FUN_004ac6b0(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 local_c4 [20];
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98 [20];
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined1 local_6c [20];
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [20];
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(DAT_00604504 + 0x1c) == 0) {
    (*DAT_00604578)(7,1);
    local_14 = (*DAT_0060451c)(0x1010,0xc0,0);
    *(uint *)(DAT_005a64c8 + 0xc) = *(uint *)(DAT_005a64c8 + 0xc) | 0x20000000;
    *(uint *)(DAT_005a64c8 + 0xc) = *(uint *)(DAT_005a64c8 + 0xc) & 0xefffffff;
    DAT_004e4a28 = *(uint *)(DAT_005a64c8 + 0xc);
    DAT_004e4adc = (uint)*(byte *)(DAT_005a64c8 + 8);
    DAT_004e4ae0 = (uint)*(byte *)(DAT_005a64c8 + 9);
    DAT_004e4a34 = DAT_005a64c4;
    local_80 = DAT_005a62d8 << 7;
    local_7c = DAT_005a62dc << 7;
    local_a8 = (DAT_005a62e4 + DAT_005a62dc) * 0x80;
    local_ac = (DAT_005a62d8 + DAT_005a62e0) * 0x80;
    local_84 = 0xbb80000;
    local_70 = 0xffff00;
    local_2c = 0xbb80000;
    local_18 = 0xffff00;
    local_58 = 0xbb80000;
    local_44 = 0xffff00;
    local_b0 = 0xbb80000;
    local_9c = 0xffff00;
    DAT_005a64c0 = DAT_004e4a28;
    local_54 = local_ac;
    local_50 = local_7c;
    local_28 = local_80;
    local_24 = local_a8;
    iVar1 = (*DAT_0060451c)(0xf);
    if (iVar1 == 0) {
      local_c = 0;
      iVar1 = 0;
      local_8 = 0;
      local_10 = 0;
    }
    else {
      bVar3 = 0xf - *(char *)(DAT_005a64c8 + 8);
      bVar4 = 0xf - *(char *)(DAT_005a64c8 + 9);
      iVar1 = 1 << (bVar3 & 0x1f);
      local_c = 1 << (bVar4 & 0x1f);
      local_10 = -1 << (bVar3 & 0x1f);
      local_8 = -1 << (bVar4 & 0x1f);
    }
    if ((DAT_005a64c0 & 8) == 0) {
      uVar2 = *(uint *)(DAT_005a64c8 + 4);
      uVar2 = ((uVar2 & 0xfe0000) >> 8 | (uVar2 & 0xfe00) << 8 | (uVar2 & 0xfe) << 0x18) >> 8;
      local_c = uVar2;
      (*DAT_00604550)(local_98,local_40,local_6c,uVar2,DAT_004e4a28,DAT_004e4a34);
      (*DAT_00604550)(local_c4,local_40,local_6c,uVar2,DAT_004e4a28,DAT_004e4a34);
    }
    else {
      local_78 = (DAT_005a62d0 << (0x10U - *(char *)(DAT_005a64c8 + 8) & 0x1f)) + iVar1;
      local_74 = (DAT_005a62d4 << (0x10U - *(char *)(DAT_005a64c8 + 9) & 0x1f)) + local_c;
      local_20 = (DAT_005a62d0 << (0x10U - *(char *)(DAT_005a64c8 + 8) & 0x1f)) + iVar1;
      local_1c = (DAT_005a64d0 + DAT_005a62d4 << (0x10U - *(char *)(DAT_005a64c8 + 9) & 0x1f)) -
                 local_8;
      local_4c = (DAT_005a62d0 + DAT_005a64cc << (0x10U - *(char *)(DAT_005a64c8 + 8) & 0x1f)) -
                 local_10;
      local_48 = (DAT_005a62d4 << (0x10U - *(char *)(DAT_005a64c8 + 9) & 0x1f)) + local_c;
      local_a4 = (DAT_005a62d0 + DAT_005a64cc << (0x10U - *(char *)(DAT_005a64c8 + 8) & 0x1f)) -
                 local_10;
      local_a0 = (DAT_005a64d0 + DAT_005a62d4 << (0x10U - *(char *)(DAT_005a64c8 + 9) & 0x1f)) -
                 local_8;
      if ((DAT_005a64c0 & 0x20000) == 0) {
        if ((DAT_005a64c0 & 0x2200000) != 0) {
          DAT_004e4a34 = *(int *)(DAT_005a64c8 + 4) << 0x18;
        }
      }
      else {
        uVar2 = *(uint *)(DAT_005a64c8 + 4);
        DAT_004e4a34 = ((uVar2 & 0xfe0000) >> 8 | (uVar2 & 0xfe00) << 8 | (uVar2 & 0xfe) << 0x18) >>
                       8;
      }
      if ((DAT_00604448 == 0x280) && (DAT_005a62e0 < (uint)(DAT_005a64cc * 5) >> 2)) {
        DAT_004e4a28 = DAT_004e4a28 | 0x40000000;
      }
      (*DAT_00604554)(local_98,local_40,local_6c,DAT_005a64c8,DAT_004e4a28,DAT_004e4a34);
      (*DAT_00604554)(local_c4,local_40,local_6c,DAT_005a64c8,DAT_004e4a28,DAT_004e4a34);
    }
    (*DAT_00604578)(7,0);
    (*DAT_0060451c)(0x1010,local_14,0);
  }
  return;
}

