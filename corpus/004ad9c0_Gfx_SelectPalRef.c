
/* refine: select PalRef remap tables (+0x708..) for the sw rasterizer and driver stage 0 (19
   callers) */

void Gfx_SelectPalRef(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (DAT_0055e964 == 0x10) {
      if (param_2 == 1) {
        PTR_DAT_00505650 = *(undefined **)(param_1 + 0x708);
        PTR_DAT_00505654 = *(undefined **)(param_1 + 0x70c);
      }
      else if (param_2 == 2) {
        PTR_DAT_00505650 = *(undefined **)(param_1 + 0x708);
        PTR_DAT_00505654 = *(undefined **)(param_1 + 0x710);
      }
    }
    else {
      DAT_0050291c = *(undefined4 *)(param_1 + 0x708);
    }
    if (DAT_00604504 != 0) {
      *(int *)(DAT_00604504 + 0xc) = param_1 + 0x300;
    }
    DAT_00604584 = param_1;
  }
  return;
}

