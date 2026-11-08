
void FUN_0043bec0(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x28) + 0x44);
    do {
      if (*piVar2 != 0) {
        OurFreeMem(*piVar2);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x24;
    } while (uVar1 < *(uint *)(param_1 + 0x60));
  }
  FUN_0043bf40(param_1,*(undefined4 *)(param_1 + 0x60));
  return;
}

