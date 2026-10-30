
/* alloc server DCB pools: DRONE(0x58afc4) AI(0x58af9c) BASE/station(0x58afec)
   ROID/asteroid(0x58b014) COMMON(0x58b03c) player(0x58af74) */

void Server_InitDcbPools(void)

{
  undefined4 uVar1;
  
  DcbPool_Init(&DAT_0058afc4,0xb4,0x358,s_Server_DRONE_DCBS_00549684,&DAT_005897ec);
  uVar1 = FUN_0041da70(s_Server_AI_DCBS_00549674,&DAT_005897ec);
  DcbPool_Init(&DAT_0058af9c,600,uVar1);
  DcbPool_Init(&DAT_0058afec,0x5dc,0x100,s_Server_BASE_DCBS_00549660,&DAT_005897ec);
  DcbPool_Init(&DAT_0058b014,0x5dc,0xcc,s_Server_Roid_DCBS_0054964c,&DAT_005897ec);
  uVar1 = FUN_0041da80(s_Server_common_DCBS_00549638,&DAT_005897ec);
  DcbPool_Init(&DAT_0058b03c,500,uVar1);
  DcbPool_Init(&DAT_0058af74,0x20,0x170,s_Server_player_DCBS_00549624,&DAT_005897ec);
  return;
}

