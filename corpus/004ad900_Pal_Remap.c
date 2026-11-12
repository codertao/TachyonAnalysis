
/* (pal, gamma, sat, r, g, b): rebuild pal+0x300 from pal+0 via curve + saturation, skip protected
   indices, then rebuild 8/16-bit lookup */

void Pal_Remap(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
  byte *pal;
  int iVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    Pal_SetCurveParams(param_2,param_3,param_4,param_5,param_6);
    pal = (byte *)(param_1 + 0xc0);
    puVar2 = param_1;
    pbVar3 = pal;
    for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pbVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      pbVar3 = pbVar3 + 4;
    }
    Pal_SaturateAll(pal,param_1 + 0x180);
    if (DAT_0055e964 == 0x10) {
      call_Pix_PaletteToNative(pal,(void *)param_1[0x1c2]);
      if (param_1[0x1c3] != 0) {
        PalAsm_UseMasksB();
        call_Pix_BuildShadeTable(pal,(void *)param_1[0x1c3]);
      }
      if (param_1[0x1c4] != 0) {
        PalAsm_UseMasksA();
        call_Pix_BuildShadeTable(pal,(void *)param_1[0x1c4]);
        return;
      }
    }
    else {
      Pal_IdentityRemap();
    }
  }
  return;
}

