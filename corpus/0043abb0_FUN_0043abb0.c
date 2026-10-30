
void FUN_0043abb0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0xf0) & 2) != 0)) {
    pcVar3 = *(char **)(param_1 + 0x18);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      do {
        if (*pcVar3 == '\0') {
          return;
        }
        iVar1 = FUN_004c67c0(pcVar3 + 0x40,param_2);
        if (((iVar1 == 0) && ((*(uint *)(pcVar3 + 0x204) & 0x400) != 0)) &&
           ((*(int *)(pcVar3 + 0x1e8) != 0 &&
            ((*(byte *)(*(int *)(pcVar3 + 0x1e8) + 0x167c) & 0x38) != 0)))) {
          local_10 = *(int *)(pcVar3 + 0xd4) + *(int *)(param_2 + 0x44);
          local_c = *(int *)(pcVar3 + 0xd8) + *(int *)(param_2 + 0x48);
          local_8 = *(int *)(pcVar3 + 200) + local_10;
          local_4 = *(int *)(pcVar3 + 0xcc) + local_c;
          FUN_0043b2f0(param_1,&local_10,0);
        }
        uVar2 = uVar2 + 1;
        pcVar3 = pcVar3 + 0x23c;
      } while (uVar2 < *(uint *)(param_1 + 0x4c));
    }
  }
  return;
}

