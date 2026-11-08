
void FUN_00461280(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [128];
  
  DAT_0058b088 = DAT_0058b088 + 1;
  DAT_0058b068 = param_1;
  if (param_2 != 0) {
    if ((g_FlightStateFlags & 4) == 0) {
      FUN_00461100(param_1,param_2,param_3);
    }
    FUN_0045d620(param_1,*(undefined4 *)(param_2 + 0x6c),*(undefined4 *)(param_2 + 0x70),
                 *(undefined4 *)(param_2 + 0x74));
  }
  FUN_004552a0(&DAT_005897f0,param_1,param_2);
  DAT_0058b064 = *(undefined4 *)(param_1 + 200);
  FUN_00461180(param_1);
  FUN_0045f460(param_1,*(undefined4 *)(*(int *)(param_1 + 200) + 100));
  Ent_SetQuadrant(DAT_0058b064,param_1,*(undefined4 *)(*(int *)(param_1 + 200) + 100));
  *(undefined4 *)(param_1 + 0x13c) = 3;
  if (*(int *)(param_1 + 4) == 0) {
    pcVar2 = (char *)(param_1 + 0x3c);
  }
  else {
    pcVar2 = (char *)FUN_004a70a0(DAT_0055e404);
  }
  uVar3 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d4) = 1;
  do {
    pcVar5 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = pcVar5 + -uVar3;
  pcVar5 = (char *)(param_1 + 0xcc);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar5 = pcVar5 + 1;
  }
  str_sprintf(auStack_80,s__s_is_entering_the_game_00549500,(char *)(param_1 + 0xcc));
  SrvSend_TextMsg(auStack_80,0,2,param_1,0,0,DAT_005a6324 & 0xff);
  FUN_0045db40(1,0x17,0);
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 3;
  uStack_8c = 0;
  uStack_88 = 0xffffffff;
  uStack_84 = 0xffffffff;
  Mission_PostEventAll(&uStack_98);
  SrvSend_RosterEntry(param_1);
  FUN_00490300(param_1);
  SrvSend_Scoreboard();
  return;
}

