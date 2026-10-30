
int FUN_0043f920(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  pcVar3 = *(char **)(param_1 + 0x14);
  local_24 = 0;
  if (param_2 == 0) {
    return 0;
  }
  param_2 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    do {
      if (*pcVar3 == '\0') {
        return local_24;
      }
      if ((((*(uint *)(pcVar3 + 0x10c) & 0x40000) != 0) ||
          (iVar2 = FUN_004c67c0(pcVar3 + 0x40,iVar1), iVar2 == 0)) &&
         ((*(uint *)(pcVar3 + 0x10c) & 0x20400) == 0)) {
        local_20 = *(int *)(iVar1 + 0x44) + *(int *)(pcVar3 + 0xc4);
        local_1c = *(int *)(iVar1 + 0x48) + *(int *)(pcVar3 + 200);
        local_18 = (*(int *)(pcVar3 + 0xcc) - *(int *)(pcVar3 + 0xc4)) + local_20;
        local_14 = (*(int *)(pcVar3 + 0xd0) - *(int *)(pcVar3 + 200)) + local_1c;
        iVar2 = FUN_0043af70(&local_20,param_3);
        if (iVar2 != 0) {
          if ((*(int *)(pcVar3 + 0xd4) != 0) &&
             ((*(byte *)(*(int *)(pcVar3 + 0xd4) + 0x167c) & 8) != 0)) {
            FUN_0043b0a0(pcVar3 + 0xc4,(undefined4 *)(iVar1 + 0xf4),&local_10);
            *(undefined4 *)(iVar1 + 0xf4) = local_10;
            *(undefined4 *)(iVar1 + 0xf8) = local_c;
            *(undefined4 *)(iVar1 + 0xfc) = local_8;
            *(undefined4 *)(iVar1 + 0x100) = local_4;
          }
          local_24 = local_24 + 1;
          *(uint *)(pcVar3 + 0x10c) = *(uint *)(pcVar3 + 0x10c) | 0x400;
        }
      }
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 0x130;
    } while (param_2 < *(uint *)(param_1 + 0x48));
  }
  return local_24;
}

