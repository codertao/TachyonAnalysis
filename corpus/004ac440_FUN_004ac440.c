
void FUN_004ac440(void)

{
  undefined1 local_84 [20];
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined1 local_58 [20];
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_2c [20];
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  DAT_005a64c8[3] = DAT_005a64c8[3] | 0x20000000;
  DAT_005a64c8[3] = DAT_005a64c8[3] & 0xefffffff;
  DAT_004e4a28 = DAT_005a64c8[3];
  DAT_004e4adc = (uint)(byte)DAT_005a64c8[2];
  DAT_004e4ae0 = (uint)*(byte *)((int)DAT_005a64c8 + 9);
  DAT_004e4a34 = DAT_005a64c4;
  if (((DAT_004e4a28 & 0x200000) == 0) || (DAT_0060f874 == 0)) {
    DAT_004e4a2c = DAT_005a64c8[1];
  }
  else {
    DAT_004e4a2c = (DAT_005a64c8[1] & 0xff) * 2;
    if (0xff < DAT_004e4a2c) {
      DAT_004e4a2c = 0xff;
    }
  }
  local_6c = DAT_005a62d8 << 7;
  local_70 = 0x40000000;
  local_68 = DAT_005a62dc << 7;
  local_64 = DAT_005a62d0 << (0x10U - (char)DAT_005a64c8[2] & 0x1f);
  local_44 = 0x40000000;
  local_60 = DAT_005a62d4 << (0x10U - *(char *)((int)DAT_005a64c8 + 9) & 0x1f);
  local_3c = (DAT_005a62e4 + DAT_005a62dc) * 0x80;
  local_38 = DAT_005a62d0 << (0x10U - (char)DAT_005a64c8[2] & 0x1f);
  local_18 = 0x40000000;
  local_34 = DAT_005a64d0 + DAT_005a62d4 << (0x10U - *(char *)((int)DAT_005a64c8 + 9) & 0x1f);
  local_14 = (DAT_005a62e0 + DAT_005a62d8) * 0x80;
  local_c = DAT_005a64cc + DAT_005a62d0 << (0x10U - (char)DAT_005a64c8[2] & 0x1f);
  local_8 = DAT_005a62d4 << (0x10U - *(char *)((int)DAT_005a64c8 + 9) & 0x1f);
  DAT_005a64c0 = DAT_004e4a28;
  local_40 = local_6c;
  local_10 = local_68;
  call_Sw_DrawTriangleFlags(local_84,local_58,local_2c,GLBL_some_str,*DAT_005a64c8,DAT_004e4a28);
  local_6c = (DAT_005a62e0 + DAT_005a62d8) * 0x80;
  local_68 = (DAT_005a62e4 + DAT_005a62dc) * 0x80;
  local_64 = DAT_005a64cc + DAT_005a62d0 << (0x10U - (char)DAT_005a64c8[2] & 0x1f);
  local_60 = DAT_005a64d0 + DAT_005a62d4 << (0x10U - *(char *)((int)DAT_005a64c8 + 9) & 0x1f);
  call_Sw_DrawTriangleFlags(local_84,local_2c,local_58,GLBL_some_str,*DAT_005a64c8,DAT_004e4a28);
  return;
}

