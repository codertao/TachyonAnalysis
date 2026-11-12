
/* sweep */

void SbStats_RenderShip(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  uVar3 = DAT_00604468;
  uVar2 = DAT_00604464;
  uVar1 = DAT_00604460;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = DAT_0060446c;
  Rend_SetCamera(&local_1c,&local_28);
  set_global_near_far(0x50000,0x2ee00000);
  Gfx_UnlockSurface();
  Viewport_SetScaled(DAT_005711f0,DAT_005711f4,DAT_005711f8,DAT_005711fc,1);
  copy_str32_to_some_global(&DAT_005a67a0);
  if (DAT_00564ae4 == 0) {
    Gfx_LockSurface();
  }
  Ent_ToCameraSpace(&DAT_005711a0);
  Ent_Draw(&DAT_005711a0);
  Gfx_UnlockSurface();
  Viewport_Set(uVar1,uVar2,uVar3,local_4,1);
  copy_str32_to_some_global(&DAT_005a67a0);
  set_global_near_far(0x2000,0x13880000);
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseStats_0055883c,&DAT_005711f0,0);
  return;
}

