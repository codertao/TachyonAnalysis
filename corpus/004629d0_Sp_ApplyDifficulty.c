
/* SP: 0x58b078 = 2*difficulty+1 -> player ship +0xca (max AI attackers) */

void Sp_ApplyDifficulty(int param_1)

{
  if ((g_FlightStateFlags & 4) != 0) {
    DAT_0058b078 = param_1 * 2 + 1;
    if ((DAT_0058b068 != 0) && (*(int *)(DAT_0058b068 + 200) != 0)) {
      *(short *)(*(int *)(DAT_0058b068 + 200) + 0xca) = (short)DAT_0058b078;
    }
  }
  return;
}

