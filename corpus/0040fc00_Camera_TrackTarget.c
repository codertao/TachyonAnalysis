
/* sweep */

void Camera_TrackTarget(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_c;
  int local_8;
  int local_4;
  
  Vec_DirAngles(&DAT_005b9600,param_1 + 0x34,&local_c);
  if (param_2 != 0) {
    Ent_AnglesToLocal(param_1,&local_c);
  }
  if (param_3 == 0) {
    DAT_005b95e8 = local_c;
    DAT_005b95ec = local_8;
    DAT_005b95f0 = local_4;
    return;
  }
  iVar1 = local_c * 0x80 + DAT_005b95e8 * -0x80;
  uVar2 = iVar1 >> 10;
  uVar4 = iVar1 >> 0x1f;
  if ((int)((uVar2 ^ uVar4) - uVar4) <
      (int)((DAT_005b95f4 ^ (int)DAT_005b95f4 >> 0x1f) - ((int)DAT_005b95f4 >> 0x1f))) {
LAB_0040fcb9:
    DAT_005b95f4 = uVar2;
  }
  else {
    iVar3 = (int)(uVar2 * 0x80 + DAT_005b95f4 * -0x80) >> 7;
    iVar1 = DAT_005b9694;
    if ((iVar3 <= DAT_005b9694) && (iVar1 = iVar3, iVar3 < -DAT_005b9694)) {
      iVar1 = -DAT_005b9694;
    }
    DAT_005b95f4 = DAT_005b95f4 + iVar1;
    uVar2 = DAT_005b9698;
    if (((int)DAT_005b9698 < (int)DAT_005b95f4) ||
       (uVar2 = -DAT_005b9698, (int)DAT_005b95f4 < (int)uVar2)) goto LAB_0040fcb9;
  }
  iVar1 = local_8 * 0x80 + DAT_005b95ec * -0x80;
  DAT_005b95e8 = DAT_005b95e8 + DAT_005b95f4;
  uVar2 = iVar1 >> 10;
  uVar4 = iVar1 >> 0x1f;
  if ((int)((DAT_005b95f8 ^ (int)DAT_005b95f8 >> 0x1f) - ((int)DAT_005b95f8 >> 0x1f)) <=
      (int)((uVar2 ^ uVar4) - uVar4)) {
    iVar3 = (int)(uVar2 * 0x80 + DAT_005b95f8 * -0x80) >> 7;
    iVar1 = DAT_005b9694;
    if ((iVar3 <= DAT_005b9694) && (iVar1 = iVar3, iVar3 < -DAT_005b9694)) {
      iVar1 = -DAT_005b9694;
    }
    DAT_005b95f8 = DAT_005b95f8 + iVar1;
    uVar2 = DAT_005b9698;
    if (((int)DAT_005b95f8 <= (int)DAT_005b9698) &&
       (uVar2 = -DAT_005b9698, (int)-DAT_005b9698 <= (int)DAT_005b95f8)) goto LAB_0040fd3f;
  }
  DAT_005b95f8 = uVar2;
LAB_0040fd3f:
  iVar1 = local_4 * 0x80 + DAT_005b95f0 * -0x80;
  uVar2 = iVar1 >> 10;
  uVar4 = iVar1 >> 0x1f;
  if ((int)((DAT_005b95fc ^ (int)DAT_005b95fc >> 0x1f) - ((int)DAT_005b95fc >> 0x1f)) <=
      (int)((uVar2 ^ uVar4) - uVar4)) {
    iVar3 = (int)(uVar2 * 0x80 + DAT_005b95fc * -0x80) >> 7;
    iVar1 = DAT_005b9694;
    if ((iVar3 <= DAT_005b9694) && (iVar1 = iVar3, iVar3 < -DAT_005b9694)) {
      iVar1 = -DAT_005b9694;
    }
    DAT_005b95fc = DAT_005b95fc + iVar1;
    uVar2 = DAT_005b9698;
    if (((int)DAT_005b9698 < (int)DAT_005b95fc) ||
       (uVar2 = -DAT_005b9698, (int)DAT_005b95fc < (int)uVar2)) {
      DAT_005b95fc = uVar2;
    }
    DAT_005b95ec = DAT_005b95ec + DAT_005b95f8 + DAT_005b95f8;
    return;
  }
  DAT_005b95fc = uVar2;
  DAT_005b95ec = DAT_005b95ec + DAT_005b95f8 + DAT_005b95f8;
  return;
}

