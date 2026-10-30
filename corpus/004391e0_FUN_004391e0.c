
void FUN_004391e0(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int in_stack_00001680;
  
  FUN_004bd340();
  iVar1 = Cbin_SelectGroup();
  if (iVar1 != 0) {
    iVar1 = FUN_0049b480();
    while (iVar1 != 0) {
      puVar3 = (undefined4 *)register0x00000010;
      for (iVar1 = 0x5a3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      pcVar2 = (char *)FUN_004bcef7();
      if (pcVar2 != (char *)0x0) {
        _strncpy(&stack0x00000000,pcVar2,0x3f);
      }
      pcVar2 = (char *)FUN_004bcef7();
      if (pcVar2 != (char *)0x0) {
        _strncpy(&stack0x00000040,pcVar2,0xf);
      }
      pcVar2 = (char *)FUN_004bcef7();
      if (pcVar2 != (char *)0x0) {
        _strncpy(&stack0x00001654,pcVar2,0xf);
      }
      iVar1 = FUN_004bcef7();
      if (iVar1 != 0) {
        FUN_004bd32f();
      }
      iVar1 = FUN_004bcef7();
      if (iVar1 != 0) {
        in_stack_00001680 = FUN_004bd32f();
      }
      if (in_stack_00001680 == 0) {
        in_stack_00001680 = 1;
      }
      iVar1 = FUN_004bcef7();
      if (iVar1 != 0) {
        FUN_004bd32f();
      }
      iVar1 = FUN_004bcef7();
      if (iVar1 != 0) {
        FUN_004bd32f();
      }
      iVar1 = FUN_004bcef7();
      if (iVar1 != 0) {
        FUN_004bd32f();
      }
      iVar1 = FUN_004bcef7();
      if (iVar1 != 0) {
        FUN_004bd32f();
      }
      FUN_00439ff0();
      iVar1 = FUN_0049b480();
    }
  }
  return;
}

