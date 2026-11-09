
void __cdecl FUN_10002f50(int param_1)

{
  if (param_1 == DAT_100199b4) {
    switch(*DAT_10019c5c) {
    case 0x1012:
      FUN_10002180((int)DAT_10019c5c);
      break;
    case 0x1031:
      FUN_10002e00((int)DAT_10019c5c);
      DAT_10019c50 = 0;
      DAT_10019c58 = 0;
      return;
    case 0x1033:
      FUN_10002ec0((int)DAT_10019c5c);
      DAT_10019c50 = 0;
      DAT_10019c58 = 0;
      return;
    case 0x1041:
      FUN_10002f00((int)DAT_10019c5c);
      DAT_10019c50 = 0;
      DAT_10019c58 = 0;
      return;
    case 0x1052:
      FUN_10002f20();
      DAT_10019c50 = 0;
      DAT_10019c58 = 0;
      return;
    case 0x1080:
      FUN_10002e70((int)DAT_10019c5c);
      DAT_10019c50 = 0;
      DAT_10019c58 = 0;
      return;
    }
    DAT_10019c50 = 0;
    DAT_10019c58 = 0;
  }
  return;
}

