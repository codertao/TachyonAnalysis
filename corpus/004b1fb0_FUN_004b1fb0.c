
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1fb0(byte *param_1,int *param_2,int param_3)

{
  int iVar1;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if ((*param_1 & 0x10) == 0) {
    local_3c = 0x10000;
  }
  else {
    local_3c = *(undefined4 *)(param_1 + 4);
  }
  iVar1 = param_2[10];
  local_2c = local_3c;
  local_1c = local_3c;
  FUN_0052db6a(local_18,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
               *(undefined4 *)(param_1 + 0x3c));
  FUN_0052db6a(iVar1,param_2[1],param_2[2],param_2[3]);
  FUN_0052dbcd(iVar1);
  FUN_004b24d0(&local_3c,&local_60);
  FUN_004b24d0(&local_30,&local_54);
  FUN_004b24d0(&local_24,&local_48);
  for (iVar1 = param_2[8]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    FUN_0052db6a(*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8)
                 ,*(undefined4 *)(iVar1 + 0xc));
    FUN_0052dbcd(*(undefined4 *)(iVar1 + 0x28));
    FUN_004b24d0(&local_60,&local_60);
    FUN_004b24d0(&local_54,&local_54);
    FUN_004b24d0(&local_48,&local_48);
  }
  FUN_0052dbcd(local_18);
  FUN_004b24d0(&local_60,&local_60);
  FUN_004b24d0(&local_54,&local_54);
  FUN_004b24d0(&local_48,&local_48);
  DAT_0062c100 = (float)local_60 * _DAT_0052e5d8;
  DAT_0062c104 = (float)local_5c * _DAT_0052e5d8;
  _DAT_0062c108 = (float)local_58 * _DAT_0052e5d8;
  _DAT_0062c10c = (float)local_54 * _DAT_0052e5d8;
  _DAT_0062c110 = (float)local_50 * _DAT_0052e5d8;
  _DAT_0062c114 = (float)local_4c * _DAT_0052e5d8;
  _DAT_0062c118 = (float)local_48 * _DAT_0052e5d8;
  _DAT_0062c11c = (float)local_44 * _DAT_0052e5d8;
  _DAT_0062c120 = (float)local_40 * _DAT_0052e5d8;
  if (*(char *)((int)param_2 + 0x1b) != '\0') {
    FUN_004b1df0(param_2);
  }
  if (param_3 == 0) {
    iVar1 = param_2[10];
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  if (*(int *)(*param_2 + 0x38) != 0) {
    FUN_004b1ee0(param_2);
  }
  return;
}

