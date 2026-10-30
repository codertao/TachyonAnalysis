
void FUN_0043f0b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0xf0) & 2) != 0)) {
    pcVar3 = *(char **)(param_1 + 0x14);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      do {
        if (*pcVar3 == '\0') {
          return;
        }
        iVar1 = FUN_004c67c0(pcVar3 + 0x40,param_2);
        if (((iVar1 == 0) && ((*(uint *)(pcVar3 + 0x10c) & 0x400) != 0)) &&
           ((*(int *)(pcVar3 + 0xd4) != 0 &&
            ((*(byte *)(*(int *)(pcVar3 + 0xd4) + 0x167c) & 0x38) != 0)))) {
          local_10 = *(int *)(pcVar3 + 0xc4) + *(int *)(param_2 + 0x44);
          local_c = *(int *)(pcVar3 + 200) + *(int *)(param_2 + 0x48);
          local_8 = *(int *)(*(int *)(pcVar3 + 0xd4) + 0x166c) + local_10;
          local_4 = *(int *)(*(int *)(pcVar3 + 0xd4) + 0x1670) + local_c;
          FUN_0043b2f0(param_1,&local_10,0);
        }
        uVar2 = uVar2 + 1;
        pcVar3 = pcVar3 + 0x130;
      } while (uVar2 < *(uint *)(param_1 + 0x48));
    }
  }
  return;
}

