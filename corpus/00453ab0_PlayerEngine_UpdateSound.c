
/* engine loop: volume+pitch from smoothed throttle (0x5b1ee4, slews 16/frame toward 0x5b1ee0);
   afterburner (0x5b1ee8) -> *_BURNER_PITCH; INTERNAL_* vs EXTERNAL_* DES values by view flag; not
   camera shake (that is View_ShakeStep) */

void PlayerEngine_UpdateSound(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_005b1f0c;
  iVar2 = DAT_005b1ee0 - DAT_005b1ee4;
  if (iVar2 < 0x11) {
    if (iVar2 < -0x10) {
      iVar2 = -0x10;
    }
  }
  else {
    iVar2 = 0x10;
  }
  DAT_005b1ee4 = DAT_005b1ee4 + iVar2;
  if ((*(byte *)(DAT_005b95e0 + 0xc) & 4) != 0) {
    if (DAT_005b1ee8 == 0) {
      iVar3 = *(int *)(DAT_005b1f0c + 0x21c);
      uVar1 = *(undefined4 *)(DAT_005b1f0c + 0x248);
      iVar2 = (*(int *)(DAT_005b1f0c + 0x228) * DAT_005b1ee4 >> 10) + *(int *)(DAT_005b1f0c + 0x22c)
      ;
    }
    else {
      iVar3 = *(int *)(DAT_005b1f0c + 0x220);
      iVar2 = *(int *)(DAT_005b1f0c + 0x234);
      uVar1 = *(undefined4 *)(DAT_005b1f0c + 0x24c);
    }
    if ((*(int *)(param_1 + 0xfc) != iVar3) || (*(int *)(param_1 + 0x114) == 0)) {
      *(undefined4 *)(param_1 + 0x114) = 1;
      *(int *)(param_1 + 0xfc) = iVar3;
      Ent_SetSound3DVolume(param_1,iVar3,uVar1);
    }
    PlayerEngine_UpdateSpeedHum(param_1);
    Snd3D_SetVar50(*(undefined4 *)(param_1 + 200),0);
    Snd3D_UpdateAt(*(undefined4 *)(param_1 + 200),&DAT_005b9600,param_1 + 0xa0);
    Ent_SetSound3DPitch(param_1,iVar2);
    return;
  }
  if (DAT_005b1ee8 == 0) {
    iVar2 = *(int *)(DAT_005b1f0c + 0x1b8);
    iVar4 = (*(int *)(DAT_005b1f0c + 0x1c4) * DAT_005b1ee4 >> 10) + *(int *)(DAT_005b1f0c + 0x1c8);
  }
  else {
    iVar2 = *(int *)(DAT_005b1f0c + 0x1bc);
    iVar4 = *(int *)(DAT_005b1f0c + 0x1d0);
  }
  if ((*(int *)(param_1 + 0xfc) != iVar2) || (*(int *)(param_1 + 0x114) != 0)) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(int *)(param_1 + 0xfc) = iVar2;
    Ent_SetSound3DVolume(param_1,iVar2,*(undefined4 *)(iVar3 + 0x23c));
  }
  Snd3D_SetVar50(*(undefined4 *)(param_1 + 0x104),1);
  Snd3D_SetVar50(*(undefined4 *)(param_1 + 200),2);
  Ent_UpdateSound3D(param_1);
  Ent_SetSound3DPitch(param_1,iVar4);
  return;
}

