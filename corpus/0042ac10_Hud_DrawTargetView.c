
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: target ship view panel */

void Hud_DrawTargetView(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x8c) != 0)) {
    DAT_005b1b78 = 0;
    Gfx_Lock(1);
    if (*(int *)(param_1 + 0x654) != 0) {
      *(uint *)(*(int *)(param_1 + 0x654) + 4) =
           (*(int *)(param_1 + 0x674) << 8 | *(uint *)(param_1 + 0x678)) << 8 |
           *(uint *)(param_1 + 0x67c);
      Hud_DrawSprite(*(undefined4 *)(param_1 + 0x654),*(undefined4 *)(param_1 + 0x658),
                     *(undefined4 *)(param_1 + 0x65c),0,0xffffffff,*(undefined4 *)(param_1 + 0x660),
                     *(undefined4 *)(param_1 + 0x664),*(undefined4 *)(param_1 + 0x668),
                     *(undefined4 *)(param_1 + 0x66c));
    }
    if (*(int *)(param_1 + 0x654) != 0) {
      *(uint *)(*(int *)(param_1 + 0x5fc) + 4) =
           (*(int *)(param_1 + 0x61c) << 8 | *(uint *)(param_1 + 0x620)) << 8 |
           *(uint *)(param_1 + 0x624);
      Hud_DrawSprite(*(undefined4 *)(param_1 + 0x5fc),*(undefined4 *)(param_1 + 0x600),
                     *(undefined4 *)(param_1 + 0x604),0,0xffffffff,*(undefined4 *)(param_1 + 0x608),
                     *(undefined4 *)(param_1 + 0x60c),*(undefined4 *)(param_1 + 0x610),
                     *(undefined4 *)(param_1 + 0x614));
    }
    _DAT_005b0148 = DAT_005a67a0;
    _DAT_005b019c = DAT_005a67f4;
    _DAT_005b01a8 = DAT_005a6800;
    Hud_DrawTargetFrame(*(undefined4 *)(param_1 + 0x6ac),*(undefined4 *)(param_1 + 0x6b0),
                        *(undefined4 *)(param_1 + 0x6b4),*(undefined4 *)(param_1 + 0x6b8),
                        &DAT_005b0148);
    Rend_SetCamera(&local_c,GLBL_SOME_CONTEXT + 0x4c);
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x44) = 0;
    pcVar1 = *(code **)(*(int *)(param_2 + 0x8c) + 0x44);
    if (pcVar1 == (code *)0x0) {
      param_2 = *(int *)(*(int *)(param_2 + 0x58) + 0x30);
    }
    else {
      param_2 = (*pcVar1)(param_2,*(int *)(param_2 + 0x8c),1);
    }
    local_20 = (undefined4)
               (longlong)
               ROUND(((float10)_DAT_005a67d0 * (float10)param_2) / (float10)(DAT_005a67a8 >> 1));
    *(undefined4 *)(iVar2 + 0x48) = local_20;
    Rend_SetForceClip(1);
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x54);
    if (pcVar1 == (code *)0x0) {
      Ent_DrawAtLod(iVar2 + 0x18,1);
    }
    else {
      (*pcVar1)(iVar2,GLBL_SOME_CONTEXT + 0x4c);
    }
    Rend_SetForceClip(0);
    Pipe_FlushBatches();
    if (DAT_005b1b78 != 0) {
      Hud_DrawWaypointMarker();
    }
    Rend_SetViewport(DAT_005a67c0,DAT_005a67c4,DAT_005a67c8,DAT_005a67cc,DAT_005a67dc,DAT_005a67e0,
                     0x32,1);
    Rend_SetCamera(&DAT_005b9600,&DAT_005b95e8);
    Gfx_Lock(1);
    if (((byte)DAT_005b2154 & 2) != 0) {
      uStack_18 = *(undefined4 *)(param_1 + 0x2e8);
      uStack_14 = *(undefined4 *)(param_1 + 0x2ec);
      uStack_10 = *(undefined4 *)(param_1 + 0x2f0);
      Hud_HealthColorRGB(DAT_005b39f8,&uStack_18);
      HudBar_Draw(param_1 + 0x2c8,DAT_005b39f8,100,uStack_18,uStack_14,uStack_10);
      uStack_18 = *(undefined4 *)(param_1 + 0x33c);
      uStack_14 = *(undefined4 *)(param_1 + 0x340);
      uStack_10 = *(undefined4 *)(param_1 + 0x344);
      Hud_HealthColorRGB(DAT_005b39f4,&uStack_18);
      HudBar_Draw(param_1 + 0x31c,DAT_005b39f4,100,uStack_18,uStack_14,uStack_10);
    }
  }
  return;
}

