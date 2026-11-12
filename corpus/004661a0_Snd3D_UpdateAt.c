
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Snd3D_UpdateAt(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [24];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((byte)DAT_005b3304 & 3) == 0) {
    Camera_WorldToView(param_2,&local_4c);
    local_1c = (float)local_4c * _DAT_0052e5d8;
    local_18 = (float)local_48 * _DAT_0052e5d8;
    local_40 = *param_3 - (DAT_005b9600 - DAT_005b960c);
    local_3c = param_3[1] - (DAT_005b9604 - DAT_005b9610);
    local_38 = param_3[2] - (DAT_005b9608 - DAT_005b9614);
    local_14 = (float)local_44 * _DAT_0052e5d8;
    Rot_ApplyCurrent(&local_40,&local_4c);
    local_10 = (float)local_4c * _DAT_0052eb90;
    local_c = (float)local_48 * _DAT_0052eb90;
    local_8 = (float)local_44 * _DAT_0052eb90;
    Snd3D_SetParams(param_1,local_34,0x18);
  }
  return;
}

