
void FUN_00440d20(void)

{
  int iVar1;
  
  for (iVar1 = DAT_005a4b48; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xd0)) {
    if (*(int *)(iVar1 + 0x7c) == 0) {
      FUN_00440cb0(iVar1);
    }
    else {
      FUN_004408d0();
    }
  }
  return;
}

