
/* sweep: "REGION=%s BORA_CNT=%d ..." */

void BW_FormatServerInfo(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 local_60 [32];
  undefined1 local_40 [64];
  
  uVar6 = 0;
  uVar7 = 0;
  MpRegion_Hash(local_40);
  uVar1 = Race_FindByName(s_GALSPAN_00533548);
  uVar2 = Race_FindByName(&DAT_00533540);
  uVar3 = Srv_CountPlayersOnTeam(uVar1);
  uVar4 = Srv_CountPlayersOnTeam(uVar2);
  if (GLBL_spacesav[0x6c] == 0) {
    pcVar8 = s_PLAYER_005339a8;
  }
  else {
    pcVar8 = s_SERVER_005339a0;
  }
  str_sprintf(local_60,pcVar8);
  iVar5 = BW_FindBase(uVar1);
  if (iVar5 != 0) {
    uVar7 = *(undefined4 *)(iVar5 + 4);
  }
  iVar5 = BW_FindBase(uVar2);
  if (iVar5 != 0) {
    uVar6 = *(undefined4 *)(iVar5 + 4);
  }
  str_sprintf(param_1,s_REGION__s_BORA_CNT__d_GSPAN_CNT__00533948,local_40,uVar4,uVar3,uVar6,uVar7,
              GLBL_spacesav[100],local_60,GLBL_spacesav[0x6f]);
  return;
}

