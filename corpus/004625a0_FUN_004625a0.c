
void FUN_004625a0(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_80 [128];
  
  FUN_00452180(1);
  bVar1 = *(byte *)(*DAT_0058b07c + 4);
  FUN_0044edc0(local_80);
  FUN_0048e970(local_80,DAT_0058b07c,0x140,2,0x20c4ff,0xffff,0x10000,4);
  if (DAT_005a4040 != 0) {
    str_sprintf(local_80,s_ID____d_005495fc,DAT_005a40b4);
    FUN_0048e970(local_80,DAT_0058b07c,0x1e0,2,0x20c4ff,0xffff,0x10000,4);
  }
  str_sprintf(local_80,s_PRESS__ESC__TO_END_SESSION_005495e0);
  FUN_0048e970(local_80,DAT_0058b07c,10,0x14,0xff4020,0xffff,0x10000,0);
  str_sprintf(local_80,s_TOTAL_LOGINS___d_005495cc,DAT_0058b088);
  FUN_0048e970(local_80,DAT_0058b07c,200,0x14,0x20c4ff,0xffff,0x10000,0);
  uVar2 = FUN_0044fd60();
  str_sprintf(local_80,s_AVERAGE_PLAYER_LOAD___d_005495b4,uVar2);
  FUN_0048e970(local_80,DAT_0058b07c,0x1e0,0x14,0x20c4ff,0xffff,0x10000,0);
  iVar3 = bVar1 + 0x12;
  str_sprintf(local_80,s_PLAYERS___d_005495a8,DAT_006af664);
  FUN_0048e970(local_80,DAT_0058b07c,10,iVar3,0xffff00,0xffff,0x10000,0);
  str_sprintf(local_80,s_HIGHEST_PLAYER_COUNT___d_0054958c,DAT_006af6f0);
  FUN_0048e970(local_80,DAT_0058b07c,200,iVar3,0xffff00,0xffff,0x10000,0);
  str_sprintf(local_80,s_FRAME___d_00549580,DAT_005897e4);
  FUN_0048e970(local_80,DAT_0058b07c,0x1e0,iVar3,0xffff00,0xffff,0x10000,0);
  iVar3 = iVar3 + (bVar1 - 2);
  str_sprintf(local_80,s_AVERAGE_PACKET_SIZE___d_00549568,DAT_006af6f8);
  FUN_0048e970(local_80,DAT_0058b07c,10,iVar3,0x20ff20,0xffff,0x10000,0);
  str_sprintf(local_80,s_LARGEST_PACKET_SENT___d_00549550,DAT_006af6f4);
  FUN_0048e970(local_80,DAT_0058b07c,200,iVar3,0x20ff20,0xffff,0x10000,0);
  return;
}

