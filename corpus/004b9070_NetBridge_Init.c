
/* loopback buffers (1 = to server, 2 = to client) */

void NetBridge_Init(int param_1)

{
  if (param_1 == 1) {
    FUN_004b9040(&DAT_006af560,DAT_006af790,DAT_006af7e8);
    return;
  }
  FUN_004b9040(&DAT_006af56c,DAT_006af580,DAT_006af644);
  return;
}

