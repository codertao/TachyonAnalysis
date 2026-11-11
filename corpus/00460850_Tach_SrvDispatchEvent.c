
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
        FUN_0045f880(data);
        break;
      case 0x2009:
        TachSrv_OnCollision(data);
        break;
      case 0x2018:
        FUN_00460460(data);
        break;
      case 0x2019:
        FUN_00460480(data);
        break;
      case 0x2020:
        FUN_004604f0(data);
        break;
      case 0x2026:
        FUN_00460790(data);
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
        FUN_00460300(data);
        return;
      }
      if ((uint)type < 0x2009) {
        if (type == 0x2008) {
          FUN_0045fa10(data);
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
            FUN_0045f150(data);
            return;
          }
        }
        else if (type == 0x2007) {
          FUN_0045f8e0(data);
          return;
        }
      }
      else {
        switch(type) {
        case 0x2010:
          FUN_0045ff00(data);
          return;
        case 0x2011:
          FUN_0045ff80(data);
          return;
        case 0x2012:
          FUN_0045ffa0(data);
          return;
        case 0x2013:
          FUN_00460000(data);
          return;
        }
      }
    }
    else {
      switch(type) {
      case 0x2015:
        FUN_00460220(data);
        return;
      case 0x2016:
        FUN_004601a0(data);
        return;
      case 0x2017:
        TachSrv_OnAttach(data);
        return;
      case 0x2021:
        FUN_00460530(data);
        return;
      case 0x2022:
        FUN_00460600(data);
        return;
      case 0x2023:
        FUN_00460120(data);
        return;
      case 0x2024:
        FUN_00460720(data);
        return;
      case 0x2025:
        FUN_00460770(data);
      }
    }
  }
  return;
}

