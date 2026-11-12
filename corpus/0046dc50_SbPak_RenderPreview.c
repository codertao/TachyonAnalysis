
/* sweep: guess */

void SbPak_RenderPreview(undefined4 param_1,undefined4 *param_2)

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
  Viewport_SetScaled(*param_2,param_2[1],param_2[2],param_2[3],1);
  copy_str32_to_some_global(&DAT_005a67a0);
  if (DAT_00564ae4 == 0) {
    Gfx_LockSurface();
  }
  Ent_ToCameraSpace(param_1);
  Ent_Draw(param_1);
  Gfx_UnlockSurface();
  Viewport_Set(uVar1,uVar2,uVar3,local_4,1);
  copy_str32_to_some_global(&DAT_005a67a0);
  set_global_near_far(0x2000,0x13880000);
  return;
}

