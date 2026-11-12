
/* sweep */

void Hud_DrawLockOn(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_64 [24];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30 [24];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((((*(int *)(param_1 + 0x8d8) == 0) || (param_2 == 0)) || (DAT_005b213c == 0)) ||
     ((DAT_005b2148 != 0 || (DAT_005b2138 == DAT_005b213c)))) {
    Hud_StopLockSound();
  }
  else {
    local_18 = *(int *)(param_2 + 0x34) - *(int *)(GLBL_SOME_CONTEXT + 0x34);
    local_14 = *(int *)(param_2 + 0x38) - *(int *)(GLBL_SOME_CONTEXT + 0x38);
    local_10 = *(int *)(param_2 + 0x3c) - *(int *)(GLBL_SOME_CONTEXT + 0x3c);
    Rot_FromAnglesInv(local_30,GLBL_SOME_CONTEXT + 0x4c);
    Rot_ApplyCurrent(&local_18,&local_18);
    if (0 < local_10) {
      View_ProjectPointFixed(&local_18,&local_c);
      iVar4 = (DAT_005b2138 << 0x10) / DAT_005b213c;
      lVar1 = (longlong)(DAT_005a67dc - (local_c >> 7)) * (longlong)iVar4;
      lVar2 = (longlong)(DAT_005a67e0 - (local_8 >> 7)) * (longlong)iVar4;
      iVar4 = (DAT_005b2138 << 0xf) / DAT_005b213c + 0xc000;
      lVar3 = (longlong)*(int *)(param_1 + 0x8ec) * (longlong)iVar4;
      uVar5 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
      lVar3 = (longlong)*(int *)(param_1 + 0x8f0) * (longlong)iVar4;
      uVar6 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
      lVar3 = (longlong)(int)(uVar5 >> 1) * (longlong)DAT_005a67e4;
      local_c = ((local_c >> 7) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)) -
                ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      lVar1 = (longlong)(int)(uVar6 >> 1) * (longlong)DAT_005a67e4;
      local_8 = ((local_8 >> 7) + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10)) -
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      if (DAT_005b2138 == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x8d8) + 4) = 0xff2000;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x8d8) + 4) = 0x802000;
      }
      Gfx_Lock(1);
      Hud_DrawSpriteEx(*(undefined4 *)(param_1 + 0x8d8),local_c,local_8,4,0xffffffff,
                       *(undefined4 *)(param_1 + 0x8e4),*(undefined4 *)(param_1 + 0x8e8),uVar5,uVar6
                       ,*(undefined4 *)(param_1 + 0x8ec),*(undefined4 *)(param_1 + 0x8f0));
      if (DAT_005b2138 == 0) {
        Snd3D_SetVar50(DAT_005b1b2c,0);
        if (DAT_005b1b44 != DAT_005b1b38) {
          DAT_005b1b44 = DAT_005b1b38;
          Snd3D_SetVolume(DAT_005b1b2c,DAT_005b1b38,0xff);
          return;
        }
      }
      else {
        Snd3D_SetVar50(DAT_005b1b2c,0);
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        Snd3D_SetParams(DAT_005b1b2c,local_64,0x18);
        if (DAT_005b1b44 != DAT_005b1b34) {
          DAT_005b1b44 = DAT_005b1b34;
          Snd3D_SetVolume(DAT_005b1b2c,DAT_005b1b34,0xff);
          return;
        }
      }
    }
  }
  return;
}

