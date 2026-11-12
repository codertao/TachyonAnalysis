
/* sweep */

void ShipBuy_RenderPreview(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  Gfx_Lock(1);
  uVar4 = DAT_0060446c;
  uVar3 = DAT_00604468;
  uVar2 = DAT_00604464;
  uVar1 = DAT_00604460;
  piVar6 = &DAT_0056f584;
  iVar5 = 5;
  do {
    if ((piVar6[-0x14] != 0) && (*piVar6 != 0)) {
      Gfx_UnlockSurface();
      Viewport_SetScaled(piVar6[-0x18],piVar6[-0x17],piVar6[-0x16],piVar6[-0x15],1);
      copy_str32_to_some_global(&DAT_005a67a0);
      if (DAT_00564ae4 == 0) {
        Gfx_LockSurface();
      }
      Ent_ToCameraSpace(piVar6 + -0x13);
      Ent_DrawAtLod(piVar6 + -0x13,DAT_00564ae4 == 0);
    }
    piVar6 = piVar6 + 0x52;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  Gfx_UnlockSurface();
  Viewport_Set(uVar1,uVar2,uVar3,uVar4,1);
  copy_str32_to_some_global(&DAT_005a67a0);
  return;
}

