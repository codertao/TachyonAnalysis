
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* default ships BORA_CUTLASS / GALSPAN_ORION when lookup fails */

void Profile_LoadoutInit(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int local_104;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  puVar7 = &g_JoinBlob;
  for (iVar5 = 0x31; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  DAT_005a64f4 = &g_JoinBlob;
  DAT_005a64f8 = 0xc4;
  _DAT_005916d8 = _atoi(&g_NwJoinKey);
  if (g_PlayerVarStore != 0) {
    DAT_005a6148 = g_PlayerVarStore;
    Systems_Reload(0);
    DAT_005a6148 = 0;
  }
  uVar1 = Ship_GetCurrentModel();
  str_sprintf(&DAT_005a6114,uVar1);
  str_sprintf(&DAT_00591704,s_GALSPAN_ORION_00547f00);
  _DAT_00591700 = Race_FindByName(s_GALSPAN_00533548);
  iVar5 = ShipDef_Find(&DAT_005a6114);
  if (iVar5 != 0) {
    _strncpy(&DAT_00591704,(char *)(iVar5 + 0x20),0x1f);
    if ((*(uint *)(iVar5 + 0x44) & 1) == 0) {
      if ((*(uint *)(iVar5 + 0x44) & 2) == 0) goto LAB_0044be16;
      pcVar8 = &DAT_00533540;
    }
    else {
      pcVar8 = s_GALSPAN_00533548;
    }
    _DAT_00591700 = Race_FindByName(pcVar8);
  }
LAB_0044be16:
  uVar1 = Player_GetCurrentShip();
  str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar1);
  iVar5 = 0;
  puVar6 = &DAT_005916b8;
  do {
    iVar5 = iVar5 + 1;
    str_sprintf(local_100,s_MOUNT__d_0053fa18,iVar5);
    iVar2 = Var_GetInt(g_PlayerVarStore,local_80,local_100,&local_104);
    if (iVar2 != 0) {
      *puVar6 = (undefined2)local_104;
    }
    puVar6 = puVar6 + 1;
  } while ((int)puVar6 < 0x5916c8);
  uVar3 = 0;
  do {
    uVar3 = uVar3 + 1;
    str_sprintf(local_100,s_SLOT__d_00536454,uVar3);
    iVar5 = Var_GetInt(g_PlayerVarStore,local_80,local_100,&local_104);
    if (iVar5 != 0) {
      uVar1 = Var_FindSection(local_80,local_100);
      iVar5 = Var_FindKey(uVar1);
      if (((local_104 != 0) && (iVar5 != 0)) && (*(int *)(iVar5 + 8) != 0)) {
        uVar1 = Var_GetKeyByIndex(*(int *)(iVar5 + 8),local_104);
        uVar4 = Systems_FindByName(uVar1);
        DAT_005916b4 = DAT_005916b4 | uVar4;
      }
    }
  } while (uVar3 < 0x10);
  _DAT_005916a0 = DAT_00545bd0;
  DAT_005a6134 = DAT_00545bd0;
  iVar5 = ShipDef_Find(&DAT_005a60d4);
  iVar2 = ShipDef_Find(&DAT_005a60f4);
  if (iVar5 == 0) {
    str_sprintf(&g_JoinBlob,s_GALSPAN_ORION_00547f00);
  }
  else {
    _strncpy((char *)&g_JoinBlob,(char *)(iVar5 + 0x20),0x1f);
  }
  if (iVar2 == 0) {
    str_sprintf(&DAT_00591680,s_BORA_CUTLASS_00547ef0);
  }
  else {
    _strncpy(&DAT_00591680,(char *)(iVar2 + 0x20),0x1f);
  }
  _strncpy(&DAT_005916a4,&DAT_005a60c4,0xf);
  _DAT_005916d0 = Stub_ReturnZeroB();
  _DAT_005916d4 = Stub_ReturnZeroB();
  _DAT_005916cc = Stub_ReturnZeroB();
  _DAT_005916dc = 0x1002;
  DAT_005916e0 = 0;
  return;
}

