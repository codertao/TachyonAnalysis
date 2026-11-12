
/* sweep */

void SbPak_Render(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_10;
  
  if ((DAT_005635c4 != 0) && (DAT_005878c0 != 0)) {
    Gfx_Lock(1);
    Ent_ToCameraSpace(&DAT_00587880);
    iVar4 = DAT_0060446c;
    iVar3 = DAT_00604468;
    iVar2 = DAT_00604464;
    iVar1 = DAT_00604460;
    if (DAT_005878d0 < 0) {
      DAT_005878d0 = 0;
    }
    if (DAT_005878d4 < 0) {
      DAT_005878d4 = 0;
    }
    if (0x27f < DAT_005878d0) {
      DAT_005878d0 = 0x27f;
    }
    if (0x1df < DAT_005878d4) {
      DAT_005878d4 = 0x1df;
    }
    local_10 = DAT_005878d0;
    if (DAT_005878d0 < DAT_00604460) {
      local_10 = DAT_00604450;
    }
    iVar5 = DAT_005878d4;
    if (DAT_005878d4 < DAT_00604464) {
      iVar5 = DAT_00604454;
    }
    iVar7 = DAT_005878d8;
    if (DAT_00604468 < DAT_005878d8) {
      iVar7 = DAT_00604458;
    }
    iVar6 = DAT_005878dc;
    if (DAT_0060446c < DAT_005878dc) {
      iVar6 = DAT_0060445c;
    }
    Gfx_UnlockSurface();
    Viewport_SetScaled(local_10,iVar5,iVar7,iVar6,1);
    copy_str32_to_some_global(&DAT_005a67a0);
    if ((DAT_00564ae4 == 0) && (Gfx_LockSurface(), DAT_00564ae4 == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    Ent_DrawAtLod(&DAT_00587880,uVar8);
    Ui_RefreshWindow(param_1,param_2,&DAT_005878d0,0);
    Gfx_UnlockSurface();
    Viewport_Set(iVar1,iVar2,iVar3,iVar4,1);
    copy_str32_to_some_global(&DAT_005a67a0);
  }
  return;
}

