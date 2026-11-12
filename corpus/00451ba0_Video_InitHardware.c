
/* hw_3dfx.dll / hw_d3d.dll */

undefined4 * Video_InitHardware(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (DAT_005b2adc == 1) {
    iVar1 = Hw3d_LoadDriver(DAT_00603960,GLBL_WindowHandle_,s_hw_3dfx_dll_00548784);
    if (iVar1 != 0) {
      return (undefined4 *)0x0;
    }
  }
  else {
    iVar1 = Hw3d_LoadDriver(DAT_00603960,GLBL_WindowHandle_,s_hw_d3d_dll_00548778);
    if (iVar1 != 0) {
      return (undefined4 *)0x0;
    }
    iVar1 = Gfx_HwControl(DAT_005b2ae4 + 0x20);
    if (iVar1 != 0) {
      Gfx_HwControl(0x20);
    }
  }
  Hw3d_Activate();
  puVar2 = (undefined4 *)Video_FindModeEntry(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    (*DAT_00604510)(*puVar2,puVar2[1],puVar2[2],1);
    Vid_SetPixelScale(puVar2[2]);
    Pal_SetTableDepth(puVar2[2]);
    Pal_SetMemPool2(0);
    DAT_005a67e8 = puVar2[2];
    Gfx_HwSetState(6,1);
    Gfx_HwControl(0x42);
    Gfx_HwControl(0x31);
    DAT_00562cd8 = Gfx_HwControl(7);
    Gfx_HwSetOption(0xfffffc00);
    uVar3 = Gfx_HwControl(3);
    DAT_0058f418 = uVar3 & 0xfffffffd;
    g_PalBrightness = 0x80;
    DAT_005a681c = Gfx_HwControl(7);
    if (DAT_005b2ad0 != 0) {
      Gfx_HwSetState(4,1);
    }
    return puVar2;
  }
  Hw3d_Deactivate();
  Hw3d_UnloadDriver();
  DAT_00564ae4 = puVar2;
  return (undefined4 *)0x0;
}

