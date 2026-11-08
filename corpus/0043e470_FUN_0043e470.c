
int FUN_0043e470(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  pcVar3 = *(char **)(param_1 + 0x24);
  uVar2 = 0;
  local_14 = 0;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0xf0) & 2) != 0)) {
    if (*(int *)(param_1 + 0x58) != 0) {
      do {
        if (*pcVar3 == '\0') {
          return local_14;
        }
        if ((((*(uint *)(pcVar3 + 0x11c) & 4) == 0) && ((*(uint *)(pcVar3 + 0x11c) & 0x10000) == 0))
           && (iVar1 = str_cmp(pcVar3 + 0x40,param_2), iVar1 == 0)) {
          local_10 = *(int *)(param_2 + 0x44) + *(int *)(pcVar3 + 0x10c);
          local_c = *(int *)(param_2 + 0x48) + *(int *)(pcVar3 + 0x110);
          local_8 = (*(int *)(pcVar3 + 0x114) - *(int *)(pcVar3 + 0x10c)) + local_10;
          local_4 = (*(int *)(pcVar3 + 0x118) - *(int *)(pcVar3 + 0x110)) + local_c;
          iVar1 = FUN_0043af70(&local_10,param_3);
          if (iVar1 != 0) {
            local_14 = local_14 + 1;
            *(uint *)(pcVar3 + 0x11c) = *(uint *)(pcVar3 + 0x11c) | 4;
          }
        }
        uVar2 = uVar2 + 1;
        pcVar3 = pcVar3 + 0x134;
      } while (uVar2 < *(uint *)(param_1 + 0x58));
    }
    return local_14;
  }
  return 0;
}

