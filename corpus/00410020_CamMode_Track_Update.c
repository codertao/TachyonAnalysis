
/* sweep */

void CamMode_Track_Update(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = DAT_005b95f0;
  iVar2 = DAT_005b95ec;
  iVar1 = DAT_005b95e8;
  Vec_DirAngles(&DAT_005b9600,param_1 + 0x34,&DAT_005b95e8);
  Angles_ToLocal(param_1 + 0x4c,&DAT_005b95e8);
  local_c = DAT_005b95e8 * 0x80 + iVar1 * -0x80 >> 7;
  local_8 = DAT_005b95ec * 0x80 + iVar2 * -0x80 >> 7;
  local_4 = DAT_005b95f0 * 0x80 + iVar3 * -0x80 >> 7;
  Camera_ApplyAnglesFixed(&local_c);
  Camera_SetFromAngles(&DAT_005b9688,&DAT_005b95e8);
  return;
}

