
/* SP: 0x58b078 = 2*difficulty+1 -> player ship +0xca (max AI attackers) */

void Sp_ApplyDifficulty(int param_1)

{
  if ((g_FlightStateFlags & 4) != 0) {
    DAT_0058b078 = param_1 * 2 + 1;
    if ((g_SrvCurConn != (TachConn *)0x0) && (g_SrvCurConn->ship != (SpED_SrvPlayer *)0x0)) {
      g_SrvCurConn->ship->maxAttackers = (short)DAT_0058b078;
    }
  }
  return;
}

