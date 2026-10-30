
void FUN_004aca50(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 local_c0 [20];
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined1 local_94 [20];
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_68 [20];
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [20];
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(DAT_00604504 + 0x1c) == 0) {
    (*DAT_00604578)(7,1);
    *(uint *)(DAT_005a64c8 + 0xc) = *(uint *)(DAT_005a64c8 + 0xc) | 0x20000000;
    *(uint *)(DAT_005a64c8 + 0xc) = *(uint *)(DAT_005a64c8 + 0xc) & 0xefffffff;
    DAT_004e4a28 = *(uint *)(DAT_005a64c8 + 0xc);
    DAT_004e4adc = (uint)*(byte *)(DAT_005a64c8 + 8);
    local_78 = DAT_005a62dc << 7;
    DAT_004e4ae0 = (uint)*(byte *)(DAT_005a64c8 + 9);
    DAT_004e4a34 = DAT_005a64c4;
    local_98 = param_1 + 0xffff00;
    local_80 = 0xbb80000;
    local_7c = DAT_005a62d8 << 7;
    local_a4 = (DAT_005a62e4 + DAT_005a62dc) * 0x80;
    local_a8 = (DAT_005a62d8 + DAT_005a62e0) * 0x80;
    local_54 = 0xbb80000;
    local_28 = 0xbb80000;
    local_ac = 0xbb80000;
    DAT_005a64c0 = DAT_004e4a28;
    local_6c = local_98;
    local_50 = local_7c;
    local_4c = local_a4;
    local_40 = local_98;
    local_24 = local_a8;
    local_20 = local_78;
    local_14 = local_98;
    iVar1 = (*DAT_0060451c)(0xf);
    if (iVar1 == 0) {
      local_10 = 0;
      iVar1 = 0;
      local_8 = 0;
      local_c = 0;
    }
    else {
      bVar3 = 0xf - *(char *)(DAT_005a64c8 + 8);
      iVar1 = 1 << (bVar3 & 0x1f);
      bVar4 = 0xf - *(char *)(DAT_005a64c8 + 9);
      local_10 = 1 << (bVar4 & 0x1f);
      local_c = -1 << (bVar3 & 0x1f);
      local_8 = -1 << (bVar4 & 0x1f);
    }
    if ((DAT_005a64c0 & 8) == 0) {
      uVar2 = *(uint *)(DAT_005a64c8 + 4);
      uVar2 = ((uVar2 & 0xfe0000) >> 8 | (uVar2 & 0xfe00) << 8 | (uVar2 & 0xfe) << 0x18) >> 8;
      (*DAT_00604550)(local_94,local_68,local_3c,uVar2,DAT_004e4a28,DAT_004e4a34);
      (*DAT_00604550)(local_c0,local_68,local_3c,uVar2,DAT_004e4a28,DAT_004e4a34);
    }
    else {
      local_74 = (DAT_005a62d0 << (0x10U - *(char *)(DAT_005a64c8 + 8) & 0x1f)) + iVar1;
      local_70 = (DAT_005a62d4 << (0x10U - *(char *)(DAT_005a64c8 + 9) & 0x1f)) + local_10;
      local_48 = (DAT_005a62d0 << (0x10U - *(char *)(DAT_005a64c8 + 8) & 0x1f)) + iVar1;
      local_44 = (DAT_005a64d0 + DAT_005a62d4 << (0x10U - *(char *)(DAT_005a64c8 + 9) & 0x1f)) -
                 local_8;
      local_1c = (DAT_005a62d0 + DAT_005a64cc << (0x10U - *(char *)(DAT_005a64c8 + 8) & 0x1f)) -
                 local_c;
      local_18 = (DAT_005a62d4 << (0x10U - *(char *)(DAT_005a64c8 + 9) & 0x1f)) + local_10;
      local_a0 = (DAT_005a62d0 + DAT_005a64cc << (0x10U - *(char *)(DAT_005a64c8 + 8) & 0x1f)) -
                 local_c;
      local_9c = (DAT_005a64d0 + DAT_005a62d4 << (0x10U - *(char *)(DAT_005a64c8 + 9) & 0x1f)) -
                 local_8;
      if ((DAT_005a64c0 & 0x20000) == 0) {
        if ((DAT_005a64c0 & 0x2000000) == 0) {
          if ((DAT_005a64c0 & 0x200000) != 0) {
            DAT_004e4a34 = param_1;
          }
        }
        else {
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
      (*DAT_00604554)(local_94,local_68,local_3c,DAT_005a64c8,DAT_004e4a28,DAT_004e4a34);
      (*DAT_00604554)(local_c0,local_68,local_3c,DAT_005a64c8,DAT_004e4a28,DAT_004e4a34);
    }
    (*DAT_00604578)(7,0);
  }
  return;
}

