
void FUN_00454f30(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  DAT_005b1ee0 = 0x400;
  DAT_005b1edc = 0;
  DAT_005aeebc = 0;
  FUN_00424d00(param_1);
  FUN_00454040(param_1);
  if ((*(int *)(param_1 + 0xf8) != 0) &&
     (iVar2 = *(int *)(param_1 + 0xf8) + -1, *(int *)(param_1 + 0xf8) = iVar2, iVar2 == 0)) {
    pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x90) + 0x8c) + 0x38);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(int *)(param_1 + 0x90),0x1c,param_1);
    }
  }
  return;
}

