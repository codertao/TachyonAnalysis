
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: FOGPCX/FOGPALREF */

void Fog_LoadFromBdf(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_00564ae4 != 0) && (DAT_005b8f48 != 0)) {
    iVar1 = Image_Load(param_2);
    if (iVar1 != 0) {
      Mem_SetTag(iVar1,s_FOGPCX_00535b88);
      mark_alloc_memory_with_flags(iVar1,0xcccc);
      FogSheets_SetSlotTexture(0,iVar1,_DAT_00603100,DAT_00603104);
      iVar2 = PalRef_Load(&DAT_00602e00);
      if (iVar2 != 0) {
        Mem_SetTag(iVar1,s_FOGPALREF_00535b7c);
        mark_alloc_memory_with_flags(iVar1,0xcccc);
        FogSheets_SetSlotPalette(0,iVar2);
      }
    }
    FogSheets_SetFrontRgb
              (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x38));
    FogSheets_SetBackRgb
              (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c));
    FogSheets_SetDoa(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                     *(undefined4 *)(param_1 + 0x44));
    FogSheets_Enable(1);
  }
  return;
}

