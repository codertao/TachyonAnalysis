
void FUN_0049d050(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 0x24);
    do {
      if ((*piVar1 != 0) && (*(char *)((int)piVar1 + -1) != '\0')) {
        FUN_0049c530(*piVar1);
        *piVar1 = 0;
        *(undefined1 *)((int)piVar1 + -1) = 0;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0xd;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return;
}

