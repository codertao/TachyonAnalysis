
/* mission/sector launch(desc): Sector_Transition(desc+0x20, desc+0x10=spxName) then create player
   ship via Desc_CreateByType */

void Sector_LaunchMission(int param_1)

{
  Quadrant *quadrant;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0044eaa0();
  local_c = 0;
  local_8 = 0;
  local_14 = 0;
  DAT_005b3394 = 0;
  local_4 = 0;
  local_10 = 0;
  FUN_0044eaa0();
  Sector_Transition(*(undefined4 *)(param_1 + 0x20),param_1 + 0x10);
  Desc_CreateByType(&DAT_005b8f74,&DAT_005b1f0c,1,local_18,1,0xffffffff);
  *(undefined4 *)(GLBL_SOME_CONTEXT + 0x8c) = DAT_005b1f0c;
  FUN_0044eab0();
  quadrant = (Quadrant *)FUN_00435390(param_1 + 0x10);
  if (quadrant != (Quadrant *)0x0) {
    Ent_SetQuadrant((SpED *)g_SrvCurShip,g_SrvCurConn,quadrant);
    FUN_0045f460(g_SrvCurConn,quadrant);
    SrvSend_EnterQuadrant(&local_c,&local_14,quadrant,param_1,1,1,g_SrvCurConn);
    FUN_0044eab0();
  }
  return;
}

