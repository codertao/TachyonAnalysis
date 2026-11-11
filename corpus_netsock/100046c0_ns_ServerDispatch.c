
void __cdecl ns_ServerDispatch(in_addr param_1,int param_2)

{
  switch((short)*DAT_10019c5c) {
  case 0x1010:
    ns_SrvOnEnum(DAT_10019c5c,(int)param_1.S_un,param_2);
    return;
  case 0x1012:
    NwPing_OnReply((int)DAT_10019c5c);
    break;
  case 0x1020:
    ns_SrvOnJoin(DAT_10019c5c,(int)param_1.S_un,param_2);
    return;
  case 0x1030:
    ns_SrvOnCreatePlayer((int)DAT_10019c5c,param_1,param_2);
    return;
  case 0x1032:
    FUN_10004550((int)DAT_10019c5c,(int)param_1.S_un,param_2);
    return;
  case 0x1040:
    FUN_10004660(DAT_10019c5c,(int)param_1.S_un,param_2);
    return;
  case 0x1060:
    FUN_100029d0(DAT_10019c5c);
    return;
  case 0x1080:
    ns_SrvOnGameData((int)DAT_10019c5c,(int)param_1.S_un,param_2);
    return;
  }
  return;
}

