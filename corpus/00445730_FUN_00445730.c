
int FUN_00445730(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_stack_00001714;
  int in_stack_00001718;
  int in_stack_0000171c;
  int in_stack_00001720;
  
  FUN_004bd340();
  str_sprintf();
  iVar1 = FUN_0043a7a0();
  if (iVar1 == 0) {
    iVar1 = Fs_Exists();
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)&stack0x00000080;
      for (iVar1 = 0x5a3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      str_sprintf();
      str_sprintf();
      str_sprintf();
      iVar1 = FUN_0043a130();
      if (iVar1 != 0) {
        if ((in_stack_00001720 != 0) && (in_stack_00001720 != 0xff)) {
          *(uint *)(iVar1 + 0x167c) = *(uint *)(iVar1 + 0x167c) | 8;
        }
        if (((in_stack_00001714 != 0) && (in_stack_00001718 < 0x101)) &&
           (in_stack_0000171c / in_stack_00001714 < 0x101)) {
          FUN_00439cc0();
          return iVar1;
        }
        FUN_004398b0();
        return iVar1;
      }
    }
    return 0;
  }
  if ((in_stack_00001720 != 0) && (in_stack_00001720 != 0xff)) {
    *(uint *)(iVar1 + 0x167c) = *(uint *)(iVar1 + 0x167c) | 8;
  }
  if (((in_stack_00001714 != 0) && (in_stack_00001718 < 0x101)) &&
     (in_stack_0000171c / in_stack_00001714 < 0x101)) {
    FUN_00439cc0();
    return iVar1;
  }
  FUN_004398b0();
  return iVar1;
}

