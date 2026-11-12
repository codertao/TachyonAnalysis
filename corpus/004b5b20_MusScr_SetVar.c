
/* refine: game variable slot write (0x6695ec + slot*4) */

void MusScr_SetVar(int param_1,undefined4 param_2)

{
  if (DAT_006695ec != 0) {
    *(undefined4 *)(DAT_006695ec + param_1 * 4) = param_2;
  }
  return;
}

