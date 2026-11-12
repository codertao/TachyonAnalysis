
/* refine: game variable slot read */

undefined4 MusScr_GetVar(int param_1)

{
  if (DAT_006695ec != 0) {
    return *(undefined4 *)(DAT_006695ec + param_1 * 4);
  }
  return 0;
}

