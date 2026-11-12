
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Ent_UpdateSound3D(int param_1)

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
    Camera_WorldToView(param_1 + 0x34,&local_4c);
    local_1c = (float)local_4c * _DAT_0052e5d8;
    local_18 = (float)local_48 * _DAT_0052e5d8;
    local_40 = *(int *)(param_1 + 0xa0) - (DAT_005b9600 - DAT_005b960c);
    local_3c = *(int *)(param_1 + 0xa4) - (DAT_005b9604 - DAT_005b9610);
    local_38 = *(int *)(param_1 + 0xa8) - (DAT_005b9608 - DAT_005b9614);
    local_14 = (float)local_44 * _DAT_0052e5d8;
    Rot_ApplyCurrent(&local_40,&local_4c);
    local_10 = (float)local_4c * _DAT_0052eb90;
    local_c = (float)local_48 * _DAT_0052eb90;
    local_8 = (float)local_44 * _DAT_0052eb90;
    Snd3D_SetParams(*(undefined4 *)(param_1 + 200),local_34,0x18);
  }
  return;
}

