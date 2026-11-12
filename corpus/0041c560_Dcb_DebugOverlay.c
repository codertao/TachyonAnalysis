
/* DCB_DEBUG overlay: NEW/KEPT DCBS, NUM HOSTILES, free counts per pool (Server/Client
   DRONE/AI/BASE/ROID/COMMON) */

void Dcb_DebugOverlay(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_80 [128];
  
  Gfx_Lock(1);
  uVar2 = (uint)*(byte *)(*DAT_005b2770 + 4);
  Ui_DrawBox(DAT_005b276c,0x14,0x14,200,0xdc,0x80,DAT_005b2770,s_DCB_DEBUG_00534e0c,0xffff00,80000,2
            );
  str_sprintf(local_80,s_NEW_DCBS___d_KEPT_DCBS__d_00534df0,DAT_005b909c,DAT_005b9060);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,0x2c,0x4040ff,0xffff,0x10000,2);
  str_sprintf(local_80,s_NUM_HOSTILES___d_00534ddc,DAT_005b39a8);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,uVar2 + 0x2c,0x4040ff,0xffff,0x10000,2);
  iVar3 = uVar2 + 0x2c + uVar2;
  Text_DrawAligned(s_SERVER_005339a0,DAT_005b2770,0x1c,iVar3,0x4040ff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar2;
  uVar1 = List_GetCount(&g_PoolBase);
  str_sprintf(local_80,s_Free_Base_DCBS___d_00534dc8,uVar1);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar3,0xff40ff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar2;
  uVar1 = List_GetCount(&g_PoolAI);
  str_sprintf(local_80,s_Free_AI_DCBS___d_00534db4,uVar1);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar3,0xff40ff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar2;
  uVar1 = List_GetCount(&g_PoolDrone);
  str_sprintf(local_80,s_Free_DRONE_DCBS___d_00534da0,uVar1);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar3,0xff40ff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar2;
  uVar1 = List_GetCount(&g_PoolCommon);
  str_sprintf(local_80,s_Free_COMMON_DCBS___d_00534d88,uVar1);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar3,0xff40ff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar2;
  uVar1 = List_GetCount(&g_PoolRoid);
  str_sprintf(local_80,s_Free_ROID_DCBS___d_00534d74,uVar1);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar3,0xff40ff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar2;
  Text_DrawAligned(s_CLIENT_00534d6c,DAT_005b2770,0x1c,iVar3,0x4040ff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar2;
  uVar1 = List_GetCount(&DAT_005b32b0);
  str_sprintf(local_80,s_Free_COMMON_DCBS___d_00534d88,uVar1);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar3,0xff40ff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar2;
  uVar1 = List_GetCount(&DAT_005b3288);
  str_sprintf(local_80,s_Free_CLIENT_DCBS___d_00534d54,uVar1);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar3,0xff40ff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar2;
  uVar1 = List_GetCount(&DAT_005b32d8);
  str_sprintf(local_80,s_Free_PARTICLE_DCBS___d_00534d3c,uVar1);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar3,0xff40ff,0xffff,0x10000,2);
  uVar1 = Dcb_CountChain(DAT_005b31e0);
  str_sprintf(local_80,s_Large_List___d_00534d2c,uVar1);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar3 + uVar2,0xff40ff,0xffff,0x10000,2);
  return;
}

