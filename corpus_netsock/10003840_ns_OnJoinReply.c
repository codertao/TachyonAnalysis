
/* 0x1021 */

void __cdecl ns_OnJoinReply(undefined4 param_1,undefined2 param_2)

{
  if ((*DAT_10019c5c == 0x1021) && (DAT_10019c5c[1] == 0xc)) {
    if (DAT_10019c5c[2] == 1) {
      DAT_10019c4c = *(undefined4 *)(DAT_10019c5c + 4);
      FUN_100037f0(param_1,param_2);
      DAT_100199ec = 0;
      DAT_100199e8 = 1;
      return;
    }
    if (DAT_10019c5c[2] == 2) {
      DAT_10019c4c = 0xffffffff;
      if (DAT_10019c5c[3] == 1) {
        DAT_100199ec = 0xf;
        DAT_100199e8 = 1;
        return;
      }
      DAT_100199ec = (-(uint)(DAT_10019c5c[3] != 3) & 0x2fb) + 5;
    }
    DAT_100199e8 = 1;
  }
  return;
}

