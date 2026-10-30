
void FUN_0045afa0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  iVar1 = *(int *)(param_1 + 0x144);
  iVar2 = *(int *)(*param_2 + 0x30);
  if (iVar2 != 0) {
    local_30 = param_2[4];
    local_2c = param_2[5];
    local_28 = param_2[6];
    if (iVar1 != 0) {
      FUN_0052db6a(local_18,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
                   *(undefined4 *)(iVar1 + 0x54));
      FUN_0052dbcd(local_18);
      FUN_004b24d0(&local_30,&local_30);
    }
    if ((*(byte *)(param_2 + 0xd) & 8) != 0) {
      *(int *)(iVar2 + 0x34) = param_2[10];
      *(int *)(iVar2 + 0x38) = param_2[0xb];
      *(int *)(iVar2 + 0x3c) = param_2[0xc];
      *(int *)(iVar2 + 0x4c) = param_2[7];
      *(int *)(iVar2 + 0x50) = param_2[8];
      *(int *)(iVar2 + 0x54) = param_2[9];
    }
    if ((*(byte *)(param_2 + 0xd) & 1) != 0) {
      if (iVar2 != iVar1) {
        local_30 = local_30 + *(int *)(iVar1 + 0x34);
        local_2c = local_2c + *(int *)(iVar1 + 0x38);
        local_28 = local_28 + *(int *)(iVar1 + 0x3c);
      }
      *(int *)(iVar2 + 0xa0) = (local_30 - *(int *)(iVar2 + 0x34)) / *param_3;
      *(int *)(iVar2 + 0xa4) = (local_2c - *(int *)(iVar2 + 0x38)) / *param_3;
      *(int *)(iVar2 + 0xa8) = (local_28 - *(int *)(iVar2 + 0x3c)) / *param_3;
    }
    if ((*(byte *)(param_2 + 0xd) & 0x10) != 0) {
      local_2c = param_2[5];
      local_30 = param_2[4];
      local_28 = param_2[6];
      *(int *)(iVar2 + 0xa0) = (local_30 - *(int *)(iVar2 + 0x34)) / *param_3;
      *(int *)(iVar2 + 0xa4) = (local_2c - *(int *)(iVar2 + 0x38)) / *param_3;
      *(int *)(iVar2 + 0xa8) = (local_28 - *(int *)(iVar2 + 0x3c)) / *param_3;
    }
    if ((*(byte *)(param_2 + 0xd) & 1) != 0) {
      if (iVar2 == iVar1) {
        local_24 = param_2[1];
        local_20 = param_2[2];
        local_1c = param_2[3];
      }
      else {
        local_24 = *(int *)(iVar1 + 0x4c) + param_2[1];
        local_20 = *(int *)(iVar1 + 0x50) + param_2[2];
        local_1c = *(int *)(iVar1 + 0x54) + param_2[3];
      }
      *(int *)(iVar2 + 0xac) = (local_24 * 0x80 + *(int *)(iVar2 + 0x4c) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb0) = (local_20 * 0x80 + *(int *)(iVar2 + 0x50) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb4) = (local_1c * 0x80 + *(int *)(iVar2 + 0x54) * -0x80) / *param_3 >> 7;
    }
    if ((*(byte *)(param_2 + 0xd) & 0x20) != 0) {
      local_24 = param_2[1];
      local_20 = param_2[2];
      local_1c = param_2[3];
      *(int *)(iVar2 + 0xac) = (local_24 * 0x80 + *(int *)(iVar2 + 0x4c) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb0) = (local_20 * 0x80 + *(int *)(iVar2 + 0x50) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb4) = (local_1c * 0x80 + *(int *)(iVar2 + 0x54) * -0x80) / *param_3 >> 7;
    }
    if ((*(byte *)(param_2 + 0xd) & 2) != 0) {
      *(int *)(iVar2 + 0xa0) = local_30;
      *(int *)(iVar2 + 0xa4) = local_2c;
      *(int *)(iVar2 + 0xa8) = local_28;
    }
    if ((*(byte *)(param_2 + 0xd) & 4) != 0) {
      FUN_0048e720(param_2 + 1,(int *)(iVar2 + 0x4c),&local_24);
      *(int *)(iVar2 + 0xac) = (local_24 * 0x80 + *(int *)(iVar2 + 0x4c) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb0) = (local_20 * 0x80 + *(int *)(iVar2 + 0x50) * -0x80) / *param_3 >> 7;
      *(int *)(iVar2 + 0xb4) = (local_1c * 0x80 + *(int *)(iVar2 + 0x54) * -0x80) / *param_3 >> 7;
    }
    if ((((*(byte *)(param_2 + 0xd) & 0x40) != 0) && (*(int *)(iVar2 + 0x8c) != 0)) &&
       (pcVar3 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x34), pcVar3 != (code *)0x0)) {
      (*pcVar3)(iVar2,0x1b,param_2[0xe]);
    }
  }
  return;
}

