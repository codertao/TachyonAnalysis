
/* client->server 0x2xxx app events */

void __cdecl Tach_SrvDispatchEvent(int type,void *data,TachConn *conn,int live)

{
  g_SrvCurConn = conn;
  g_SrvCurShip = conn->ship;
  if (live != 0) {
    if (conn->dead == 0) {
      switch(type) {
      case 0x2001:
        TachSrv_OnFire(data);
        break;
      case 0x2003:
        TachSrv_OnHitReport(data);
        break;
      case 0x2004:
        TachSrv_OnFireGuided(data);
        break;
      case 0x2006:
        TachSrv_OnGateJump(data);
        break;
      case 0x2009:
        TachSrv_OnCollision(data);
        break;
      case 0x2018:
        TachSrv_OnMineHit(data);
        break;
      case 0x2019:
        TachSrv_OnMineFired(data);
        break;
      case 0x2020:
        TachSrv_OnDecoyDropped(data);
        break;
      case 0x2026:
        TachSrv_OnRulesEvent(data);
        break;
      case 0x2027:
        TachSrv_OnPartHitReport(data);
        break;
      case 0x2028:
        TachSrv_OnLoadout(data);
      }
    }
    if ((uint)type < 0x2015) {
      if (type == 0x2014) {
        TachSrv_OnCargoPickup(data);
        return;
      }
      if ((uint)type < 0x2009) {
        if (type == 0x2008) {
          TachSrv_OnDataChunk(data);
          return;
        }
        if ((uint)type < 0x2006) {
          if (type == 0x2005) {
            TachSrv_OnPowerOp(data);
            return;
          }
          if (type == 0x1116) {
            Sector_LaunchMission(data);
            return;
          }
          if (type == 0x2002) {
            TachSrv_OnClassInfoReq(data);
            return;
          }
        }
        else if (type == 0x2007) {
          TachSrv_OnEnterWorld(data);
          return;
        }
      }
      else {
        switch(type) {
        case 0x2010:
          TachSrv_OnClientReady(data);
          return;
        case 0x2011:
          TachSrv_OnRespawnReq(data);
          return;
        case 0x2012:
          TachSrv_OnQuadrantEntered(data);
          return;
        case 0x2013:
          TachSrv_OnDocked(data);
          return;
        }
      }
    }
    else {
      switch(type) {
      case 0x2015:
        TachSrv_OnUndocking(data);
        return;
      case 0x2016:
        TachSrv_OnTractorEvent2(data);
        return;
      case 0x2017:
        TachSrv_OnAttach(data);
        return;
      case 0x2021:
        TachSrv_OnPostEvent(data);
        return;
      case 0x2022:
        TachSrv_OnDropItem(data);
        return;
      case 0x2023:
        TachSrv_OnTractorEvent(data);
        return;
      case 0x2024:
        TachSrv_OnWingFormOnMe(data);
        return;
      case 0x2025:
        TachSrv_OnWingCommand(data);
      }
    }
  }
  return;
}

