
/* refine: client, from kind 1 +0x32: pick the mode table by id (once), call its client init +0xc */

void MpRules_SelectGameType(undefined4 param_1)

{
  if (DAT_00590d78 == 0) {
    if ((g_FlightStateFlags & 1) == 0) {
      DAT_00590238 = GameType_GetName(param_1);
    }
    if (*(code **)(DAT_00590238 + 0xc) != (code *)0x0) {
      (**(code **)(DAT_00590238 + 0xc))();
    }
    DAT_00590d78 = 1;
  }
  return;
}

