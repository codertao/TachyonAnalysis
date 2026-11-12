
/* refine: PalRef for driver texture stage 0/1 */

void Gfx_SelectPalRefStage(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      DAT_0050291c = *(undefined4 *)(param_1 + 0x708);
      if (DAT_00604504 != 0) {
        *(int *)(DAT_00604504 + 0xc) = param_1 + 0x300;
      }
      DAT_00604584 = param_1;
      return;
    }
    if ((param_2 == 1) && (DAT_00604504 != 0)) {
      *(int *)(DAT_00604504 + 0x20) = param_1 + 0x300;
    }
  }
  return;
}

