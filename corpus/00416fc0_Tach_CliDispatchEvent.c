
/* server->client 0x10xx/0x11xx app events */

void Tach_CliDispatchEvent(uint param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_1 < 0x1029) {
      if (param_1 == 0x1028) {
        CliOn_NavSecondary(param_2);
        goto code_r0x004171de;
      }
      switch(param_1) {
      case 0x1001:
        CliOn_TextMsg(param_2);
        break;
      case 0x1002:
        CliOn_ProjectileFired(param_2);
        break;
      case 0x1003:
        CliOn_EntityDestroyed(param_2);
        break;
      case 0x1004:
        CliOn_ProjectileImpact(param_2);
        break;
      case 0x1005:
        CliOn_YouTookDamage(param_2);
        break;
      case 0x1006:
        CliOn_YouDied(param_2);
        break;
      case 0x1008:
        CliOn_MinePlaced(param_2);
        break;
      case 0x1009:
        CliOn_GateState(param_2);
        break;
      case 0x1010:
        CliOn_PlayScene(param_2);
        break;
      case 0x1011:
        CliOn_Despawn(param_2);
        break;
      case 0x1012:
        CliOn_Respawn(param_2);
        break;
      case 0x1013:
        CliOn_PlayNamedSound(param_2);
        break;
      case 0x1014:
        CliOn_EntityStateOp(param_2);
        break;
      case 0x1015:
        CliOn_NavPrimary(param_2);
        break;
      case 0x1016:
        CliOn_OrderAdd(param_2);
        break;
      case 0x1017:
        CliOn_OrderUpdate(param_2);
        break;
      case 0x1020:
        CliOn_EntityFiredAt(param_2);
      }
    }
    else {
      switch(param_1) {
      case 0x1032:
        CliOn_RoundResult(param_2);
        break;
      case 0x1034:
        CliOn_UiSound(param_2);
        break;
      case 0x1100:
        CliOn_EntityClassInfo(param_2);
        break;
      case 0x1101:
        CliOn_DropPredicted(param_2);
        break;
      case 0x1102:
        CliOn_MineRemoved(param_2);
        break;
      case 0x1103:
        CliOn_EntityFired(param_2);
        break;
      case 0x1104:
        CliOn_DecoyDropped(param_2);
        break;
      case 0x1105:
        CliOn_ThreatList(param_2);
        break;
      case 0x1106:
        CliOn_SpawnEntity(param_2);
        break;
      case 0x1107:
        CliOn_TeamShipDesc(param_2);
        break;
      case 0x1111:
        CliOn_StartupComplete(param_2);
        break;
      case 0x1113:
        CliOn_EntityLabel(param_2);
        break;
      case 0x1114:
        CliOn_Allegiance(param_2);
        break;
      case 0x1115:
        CliOn_VoiceWav(param_2);
        break;
      case 0x1117:
        CliOn_ResupplyNotice(param_2);
        break;
      case 0x1118:
        CliOn_BeamImpact(param_2);
        break;
      case 0x1119:
        CliOn_RoundFreeze(param_2);
        break;
      case 0x1121:
        CliOn_CampaignCheck(param_2);
        break;
      case 0x1122:
        CliOn_RankProgress(param_2);
        break;
      case 0x1123:
        CliOn_FactionProgress(param_2);
        break;
      case 0x1124:
        CliOn_Ammo(param_2);
        break;
      case 0x1125:
        CliOn_SubpartAttach(param_2);
        break;
      case 0x1126:
        CliOn_SubpartDestroy(param_2);
        break;
      case 0x1127:
        CliOn_RankChange(param_2);
      }
    }
  }
  if (0x1108 < param_1) {
    if (param_1 == 0x1110) {
      CliOn_RosterEntry(param_2);
      return;
    }
    if (param_1 != 0x1112) {
      if (param_1 != 0x1120) {
        return;
      }
      CliOn_RoundResume(param_2);
      return;
    }
    CliOn_Scoreboard(param_2);
    return;
  }
  if (param_1 == 0x1108) {
    CliOn_PlayerPortrait(param_2);
    return;
  }
code_r0x004171de:
  switch(param_1) {
  case 0x1007:
    Quadrant_OnEnter(param_2);
    return;
  default:
    return;
  case 0x1029:
    CliOn_RosterClear(param_2);
    return;
  case 0x1031:
    CliOn_MissionEnd(param_2);
    return;
  case 0x1033:
    CliOn_SessionBump(param_2);
    return;
  }
}

