
undefined4 __cdecl FUN_10001b40(undefined4 param_1)

{
  DAT_10019c04 = param_1;
  DAT_10019c00 = 0x10000;
  DAT_10019bfc = 0;
  DAT_10019bf8 = 1;
  do {
    Sleep(10);
  } while (DAT_10019bfc == 0);
  return 0;
}

