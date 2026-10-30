
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471a90(int param_1)

{
  float10 fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  undefined4 uStack_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 uStack_4;
  
  FUN_00493210(&local_54,&local_50,&local_4c);
  FUN_00493290(&local_44,&local_40,&local_3c);
  FUN_00493190(&local_58);
  FUN_004931d0(&local_38);
  local_54 = local_54 - local_44;
  local_58 = local_58 - local_38;
  local_50 = local_50 - local_40;
  fVar1 = (float10)log2((float10)local_54);
  local_4c = local_4c - local_3c;
  uStack_14 = 0;
  local_48 = 0;
  local_10 = (float)((float10)0.6931471805599453 * fVar1);
  uStack_4 = 0;
  fVar1 = (float10)log2((float10)local_50);
  local_c = (float)((float10)0.6931471805599453 * fVar1);
  fVar1 = (float10)log2((float10)local_4c);
  local_8 = (float)((float10)0.6931471805599453 * fVar1);
  fVar1 = (float10)log2((float10)local_58);
  local_18 = (float)((float10)0.6931471805599453 * fVar1);
  FUN_0048f670(s_WEAPON_TYPES_0054763c,param_1,&local_48);
  iVar3 = 0;
  if (local_48 != 0) {
    iVar3 = FUN_00493120(local_48 + -1);
  }
  iVar2 = 0;
  local_5c = 0;
  param_1 = 0;
  local_34 = 0.0;
  if (iVar3 != 0) {
    FUN_00493140(iVar3,&local_2c,&local_24,&local_1c);
    if (local_2c != 0) {
      iVar2 = local_2c - local_44;
      local_34 = (float)iVar2;
    }
    if (local_24 != 0) {
      param_1 = local_24 - local_40;
    }
    if (local_1c != 0) {
      local_5c = local_1c - local_3c;
    }
    uVar4 = *(int *)(iVar3 + 0x40) - local_38;
    if (uVar4 == 0) {
      local_30 = 0.0;
    }
    else {
      fVar1 = (float10)log2((float10)(int)uVar4);
      local_30 = (float)((float10)0.6931471805599453 * fVar1);
    }
    if (iVar2 == 0) {
      local_34 = 0.0;
    }
    else {
      fVar1 = (float10)log2((float10)(int)local_34);
      local_34 = (float)((float10)0.6931471805599453 * fVar1);
    }
    if (param_1 == 0) {
      local_28 = 0.0;
    }
    else {
      fVar1 = (float10)log2((float10)param_1);
      local_28 = (float)((float10)0.6931471805599453 * fVar1);
    }
    if (local_5c == 0) {
      local_20 = 0.0;
    }
    else {
      fVar1 = (float10)log2((float10)local_5c);
      local_20 = (float)((float10)0.6931471805599453 * fVar1);
    }
    iVar3 = FUN_004716e0(&DAT_005475f0);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x94) = 0x32;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(float *)(iVar3 + 0x88) = _DAT_0052e59c - local_30 / local_18;
      if (uVar4 == local_58) {
        *(undefined4 *)(iVar3 + 0x88) = 0x3d4ccccd;
      }
      *(float *)(iVar3 + 0x90) = *(float *)(iVar3 + 0x88) * _DAT_0052e6d0;
    }
    iVar3 = FUN_004716e0(s_HULL1_00547608);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x94) = 0x32;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(float *)(iVar3 + 0x88) = local_34 / local_10;
      if ((iVar2 == 0) && (local_2c != 0)) {
        *(undefined4 *)(iVar3 + 0x88) = 0x3d4ccccd;
      }
      *(float *)(iVar3 + 0x90) = *(float *)(iVar3 + 0x88) * _DAT_0052e6d0;
    }
    iVar3 = FUN_004716e0(s_SHLD1_00547600);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x94) = 0x32;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(float *)(iVar3 + 0x88) = local_28 / local_c;
      if ((param_1 == 0) && (local_24 != 0)) {
        *(undefined4 *)(iVar3 + 0x88) = 0x3d4ccccd;
      }
      *(float *)(iVar3 + 0x90) = *(float *)(iVar3 + 0x88) * _DAT_0052e6d0;
    }
    iVar3 = FUN_004716e0(&DAT_005475f8);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x94) = 0x32;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(float *)(iVar3 + 0x88) = local_20 / local_8;
      if ((local_5c == 0) && (local_1c != 0)) {
        *(undefined4 *)(iVar3 + 0x88) = 0x3d4ccccd;
      }
      *(float *)(iVar3 + 0x90) = *(float *)(iVar3 + 0x88) * _DAT_0052e6d0;
    }
  }
  return;
}

