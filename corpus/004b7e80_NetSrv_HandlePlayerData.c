
/* MSG_PLAYERDATA(3): if session matches & newer, callback 0x6af7ac(player, body) */

void NetSrv_HandlePlayerData(int param_1)

{
  DAT_006af6ec = *(int *)(param_1 + 0xc);
  if (DAT_006af6ec == DAT_006af6e0) {
    if (*(int *)(DAT_006af7e0 + 0xb4) != 0) {
      NetSrv_DisconnectPlayer(DAT_006af7e0);
    }
    if (*(uint *)(DAT_006af7e0 + 0xb0) < *(uint *)(param_1 + 8)) {
      *(undefined4 *)(DAT_006af7e0 + 0xa4) = 1;
      *(undefined4 *)(DAT_006af7e0 + 0xb0) = *(undefined4 *)(param_1 + 8);
      *(int *)(DAT_006af7e0 + 0xa8) = *(int *)(DAT_006af7e0 + 0xa8) + DAT_006af6a8;
      if (DAT_006af7ac != (code *)0x0) {
        (*DAT_006af7ac)(DAT_006af7e0,param_1 + 0x10,
                        *(int *)(DAT_006af7e0 + 0xa8) - *(int *)(DAT_006af7e0 + 0xac));
      }
    }
  }
  return;
}

