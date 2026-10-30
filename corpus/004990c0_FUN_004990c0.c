
undefined4 FUN_004990c0(void)

{
  int local_4;
  
  local_4 = 0;
  *(undefined1 *)(DAT_005653a0 + 0x324) = 1;
  *(undefined4 *)(DAT_005653a0 + 0x354) = 0;
  FUN_00427210(DAT_005a5e20,DAT_005a5e1c,*(undefined4 *)(DAT_005653a0 + 100),
               *(undefined4 *)(DAT_005653a0 + 100),0,&local_4,0);
  if (local_4 != 0) {
    *(int *)(DAT_005653a0 + 0x90) = local_4;
    FUN_00401080(DAT_005653a0,0xe);
  }
  return 0;
}

