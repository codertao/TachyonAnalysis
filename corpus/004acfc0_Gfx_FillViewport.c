
void Gfx_FillViewport(void)

{
  uint uVar1;
  undefined1 local_bc [20];
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_94;
  undefined1 local_90 [20];
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_68;
  undefined1 local_64 [20];
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 local_3c;
  undefined1 local_38 [20];
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  if (DAT_00604494 == 0) {
    Sw_FillViewport();
    return;
  }
  if (*(int *)(DAT_00604504 + 0x1c) == 0) {
    local_78 = DAT_005a62d8 << 7;
    local_a4 = (DAT_005a62d8 + DAT_005a62e0) * 0x80;
    local_74 = DAT_005a62dc << 7;
    local_a0 = (DAT_005a62e4 + DAT_005a62dc) * 0x80;
    local_8 = *(uint *)(&DAT_005a6440 + DAT_005a62e8 * 4);
    local_7c = 0x400;
    local_50 = 0x400;
    local_24 = 0x400;
    local_a8 = 0x400;
    local_68 = 0x808080;
    local_3c = 0x808080;
    local_10 = 0x808080;
    local_94 = 0x808080;
    uVar1 = ((local_8 & 0xff0000) >> 8 | (local_8 & 0xff00) << 8 | local_8 << 0x18) >> 8;
    local_4c = local_78;
    local_48 = local_a0;
    local_20 = local_a4;
    local_1c = local_74;
    local_c = uVar1;
    (*DAT_00604550)(local_90,local_64,local_38,uVar1,0x20000000,0xffffffff);
    (*DAT_00604550)(local_bc,local_64,local_38,uVar1,0x20000000,0xffffffff);
  }
  return;
}

