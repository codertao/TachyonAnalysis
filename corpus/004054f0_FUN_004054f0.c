
void FUN_004054f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = (int *)(param_1 + 0x30c);
  *piVar1 = *piVar1 + -1;
  *(undefined2 *)(param_1 + 0x312) = 0x300;
  if (*piVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa4) = 3000;
    return;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar2 = FUN_00405d60(*(int *)(param_1 + 0x90));
    if (iVar2 != 0) {
      local_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
      local_4 = *(undefined4 *)(iVar2 + 0x20);
      local_18 = 1;
      local_8 = 1;
      local_10 = 0xc;
      local_c = 0;
      Mission_PostEvent(&local_18,*(undefined4 *)(param_1 + 100));
    }
  }
  Ai_ReturnToDefault(param_1);
  return;
}

