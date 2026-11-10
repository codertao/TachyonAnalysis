
void FUN_004058b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Sped_FindById(param_2,*(undefined4 *)(param_1 + 100));
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x8c) + 0x58) != 0)) {
    Ai_SetState(param_1,7);
    *(int *)(param_1 + 0x90) = iVar1;
  }
  return;
}

