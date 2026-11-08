
/* client->server 0x2xxx app events */

void Tach_SrvDispatchEvent(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  DAT_0058b068 = param_3;
  DAT_0058b064 = *(undefined4 *)(param_3 + 200);
  if (param_4 != 0) {
    if (*(int *)(param_3 + 0x1d0) == 0) {
      switch(param_1) {
      case 0x2001:
        TachSrv_OnFire(param_2);
        break;
      case 0x2003:
        TachSrv_OnHitReport(param_2);
        break;
      case 0x2004:
        TachSrv_OnFireGuided(param_2);
        break;
      case 0x2006:
        FUN_0045f880(param_2);
        break;
      case 0x2009:
        TachSrv_OnCollision(param_2);
        break;
      case 0x2018:
        FUN_00460460(param_2);
        break;
      case 0x2019:
        FUN_00460480(param_2);
        break;
      case 0x2020:
        FUN_004604f0(param_2);
        break;
      case 0x2026:
        FUN_00460790(param_2);
        break;
      case 0x2027:
        TachSrv_OnPartHitReport(param_2);
        break;
      case 0x2028:
        FUN_004607b0(param_2);
      }
    }
    if (param_1 < 0x2015) {
      if (param_1 == 0x2014) {
        FUN_00460300(param_2);
        return;
      }
      if (param_1 < 0x2009) {
        if (param_1 == 0x2008) {
          FUN_0045fa10(param_2);
          return;
        }
        if (param_1 < 0x2006) {
          if (param_1 == 0x2005) {
            FUN_0045f2a0(param_2);
            return;
          }
          if (param_1 == 0x1116) {
            Sector_LaunchMission(param_2);
            return;
          }
          if (param_1 == 0x2002) {
            FUN_0045f150(param_2);
            return;
          }
        }
        else if (param_1 == 0x2007) {
          FUN_0045f8e0(param_2);
          return;
        }
      }
      else {
        switch(param_1) {
        case 0x2010:
          FUN_0045ff00(param_2);
          return;
        case 0x2011:
          FUN_0045ff80(param_2);
          return;
        case 0x2012:
          FUN_0045ffa0(param_2);
          return;
        case 0x2013:
          FUN_00460000(param_2);
          return;
        }
      }
    }
    else {
      switch(param_1) {
      case 0x2015:
        FUN_00460220(param_2);
        return;
      case 0x2016:
        FUN_004601a0(param_2);
        return;
      case 0x2017:
        TachSrv_OnAttach(param_2);
        return;
      case 0x2021:
        FUN_00460530(param_2);
        return;
      case 0x2022:
        FUN_00460600(param_2);
        return;
      case 0x2023:
        FUN_00460120(param_2);
        return;
      case 0x2024:
        FUN_00460720(param_2);
        return;
      case 0x2025:
        FUN_00460770(param_2);
      }
    }
  }
  return;
}

