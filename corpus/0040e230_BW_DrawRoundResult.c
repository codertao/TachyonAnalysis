
/* sweep */

void BW_DrawRoundResult(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined1 local_80 [128];
  
  Gfx_Lock(1);
  uVar1 = Race_GetAffiliation(DAT_005b97c0);
  str_sprintf(local_80,s__s_Has_Won_0053393c,uVar1);
  Text_DrawAligned(local_80,DAT_005b97a4,0x140,0x5a,&DAT_006060ff,0xffff,0x10000,6);
  iVar2 = Race_FindByName(s_GALSPAN_00533548);
  if (DAT_005b97c0 == iVar2) {
    uVar1 = Race_FindByName(s_GALSPAN_00533548,&DAT_005b97d4,0x82);
    uVar1 = BW_DrawTeamStats(uVar1);
    puVar4 = &DAT_005b97c4;
    pcVar3 = &DAT_00533540;
  }
  else {
    uVar1 = Race_FindByName(&DAT_00533540,&DAT_005b97c4,0x82);
    uVar1 = BW_DrawTeamStats(uVar1);
    puVar4 = &DAT_005b97d4;
    pcVar3 = s_GALSPAN_00533548;
  }
  uVar1 = Race_FindByName(pcVar3,puVar4,uVar1);
  BW_DrawTeamStats(uVar1);
  return;
}

