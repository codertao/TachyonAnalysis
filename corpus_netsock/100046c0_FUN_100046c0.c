
void __cdecl FUN_100046c0(in_addr param_1,int param_2)

{
  switch((short)*DAT_10019c5c) {
  case 0x1010:
    FUN_10003f00(DAT_10019c5c,(int)param_1.S_un,param_2);
    return;
  case 0x1012:
    FUN_10002180((int)DAT_10019c5c);
    break;
  case 0x1020:
    FUN_100040c0(DAT_10019c5c,(int)param_1.S_un,param_2);
    return;
  case 0x1030:
    FUN_10004340((int)DAT_10019c5c,param_1,param_2);
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
    FUN_10004420((int)DAT_10019c5c,(int)param_1.S_un,param_2);
    return;
  }
  return;
}

