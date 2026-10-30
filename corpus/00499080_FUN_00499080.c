
undefined4 FUN_00499080(void)

{
  int iVar1;
  
  iVar1 = DAT_0058b064;
  if (DAT_0058b064 != 0) {
    *(undefined1 *)(DAT_005653a0 + 0x324) = 1;
    *(int *)(DAT_005653a0 + 0x354) = iVar1;
    FUN_00401080(DAT_005653a0,0xd);
    return 1;
  }
  return 0;
}

