
/* refine: driver colour slot 3 (halved in bright mode); also kept at 0x60f864.. */

void Gfx_SetFogColor(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_00564ae4 != 0) {
    uVar1 = param_1;
    uVar2 = param_2;
    uVar3 = param_3;
    if (DAT_0060f874 != 0) {
      uVar1 = param_1 >> 1;
      uVar2 = param_2 >> 1;
      uVar3 = param_3 >> 1;
    }
    (*DAT_00604574)(3,uVar1,uVar2,uVar3);
  }
  DAT_0060f868 = param_2;
  DAT_0060f86c = param_3;
  DAT_0060f864 = param_1;
  return;
}

