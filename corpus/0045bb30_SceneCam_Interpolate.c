
/* sweep */

void SceneCam_Interpolate(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [12];
  
  local_18 = DAT_005b95e8;
  local_14 = DAT_005b95ec;
  local_10 = DAT_005b95f0;
  iVar1 = *param_2;
  if (*DAT_005b95e0 == 0) {
    if ((*(uint *)(iVar1 + 0x20) & 0x2e0) == 0) {
      DAT_005b9688 = DAT_005b9688 - (DAT_005b9688 >> 3);
      DAT_005b968c = DAT_005b968c - (DAT_005b968c >> 3);
      DAT_005b9690 = DAT_005b9690 - (DAT_005b9690 >> 3);
    }
    DAT_005b9604 = DAT_005b9604 + DAT_005b968c;
    DAT_005b9600 = DAT_005b9600 + DAT_005b9688;
    DAT_005b9608 = DAT_005b9608 + DAT_005b9690;
  }
  else {
    Camera_ChaseStep(*DAT_005b95e0);
  }
  if (DAT_005b95e0[1] == 0) {
    iVar2 = param_2[8] * 0x80 + DAT_005b95f4 * -0x80 >> 7;
    if (iVar2 < 0x401) {
      if (iVar2 < -0x400) {
        iVar2 = -0x400;
      }
    }
    else {
      iVar2 = 0x400;
    }
    DAT_005b95f4 = DAT_005b95f4 + iVar2;
    iVar2 = param_2[9] * 0x80 + DAT_005b95f8 * -0x80 >> 7;
    if (iVar2 < 0x401) {
      if (iVar2 < -0x400) {
        iVar2 = -0x400;
      }
    }
    else {
      iVar2 = 0x400;
    }
    DAT_005b95e8 = DAT_005b95e8 + DAT_005b95f4;
    DAT_005b95f8 = DAT_005b95f8 + iVar2;
    DAT_005b95ec = DAT_005b95ec + DAT_005b95f8;
    DAT_005b95f0 = DAT_005b95f0 + DAT_005b95fc;
  }
  else {
    Camera_TrackTarget(DAT_005b95e0[1],0,1);
  }
  if ((*(uint *)(iVar1 + 0x20) & 0x400) != 0) {
    DAT_005b9644 = DAT_005b9644 + param_2[4];
    DAT_005b9654 = DAT_005b9654 + param_2[5];
    DAT_005b9658 = DAT_005b9658 + param_2[6];
    DAT_005b965c = DAT_005b965c + param_2[7];
  }
  Camera_LookAt(local_c,&local_18,&DAT_005b95e8);
  Camera_ApplyAnglesFixed(local_c);
  Camera_SetFromAngles(&DAT_005b9688,&DAT_005b95e8);
  return;
}

