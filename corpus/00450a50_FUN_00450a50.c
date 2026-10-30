
void FUN_00450a50(void)

{
  int iVar1;
  
  for (iVar1 = DAT_005b3244; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (*(int *)(iVar1 + 0x90) != 2) {
      if (*(int *)(iVar1 + 0x94) == 0) {
        if (*(int *)(iVar1 + 0x8c) != 0) {
          *(int *)(iVar1 + 0x8c) = *(int *)(iVar1 + 0x8c) + -1;
          *(undefined4 *)(iVar1 + 0x94) = 0xc;
          *(uint *)(iVar1 + 0x90) = (uint)(*(int *)(iVar1 + 0x90) == 0);
        }
      }
      else {
        *(int *)(iVar1 + 0x94) = *(int *)(iVar1 + 0x94) + -1;
      }
    }
  }
  return;
}

