
void FUN_00467760(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00431960(param_1 + 0x10);
  FUN_00431960(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0xcc);
  uVar2 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    do {
      FUN_00431960(iVar1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 100;
    } while (uVar2 < *(uint *)(param_1 + 200));
  }
  FUN_0049c530(*(undefined4 *)(param_1 + 0xcc));
  FUN_0048e380(param_1,0x144);
  return;
}

