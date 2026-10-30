
void FUN_00487b90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
    return;
  }
  if ((*(uint *)(param_1 + 0xcc) & 1) != 0) {
    piVar1 = (int *)(param_1 + 0xd4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xfffffffe | 2;
      FUN_0049da00(s_SLOTS_STOP_00558110,&DAT_005833e0,&DAT_00583498);
    }
    if (*(int *)(param_1 + 0xd8) == 0) {
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x84);
      *(undefined4 *)(param_1 + 0xd8) = 2;
      *(int **)(param_1 + 0x84) = *(int **)(param_1 + 0x40);
      iVar2 = **(int **)(param_1 + 0x40);
      do {
        iVar3 = _rand();
        *(undefined4 **)(param_1 + 0x40) = &DAT_0056c560 + (iVar3 % 100) * 0x11;
      } while (iVar2 == (&DAT_0056c560)[(iVar3 % 100) * 0x11]);
      FUN_0043f6e0(&DAT_00583420,param_1,&DAT_0056c564 + (iVar3 % 100) * 0x44);
      FUN_0043f6e0(&DAT_00583420,param_1 + 0x44,*(int *)(param_1 + 0x84) + 4);
      FUN_0043f6e0(&DAT_00583420,param_1 + 0x88,*(int *)(param_1 + 200) + 4);
    }
    else {
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + -1;
    }
  }
  if ((*(uint *)(param_1 + 0xcc) & 2) == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = 1;
  }
  if ((*(uint *)(param_1 + 0xcc) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xdc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return;
}

