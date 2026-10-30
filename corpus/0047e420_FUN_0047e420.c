
void FUN_0047e420(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_005a6810;
  iVar1 = DAT_0056367c;
  FUN_00452180(1);
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
    if (*(int *)(iVar1 + 0x98) != 0) {
      FUN_0047e270(iVar1,*(int *)(iVar1 + 0x98));
    }
  }
  FUN_0047e270(&DAT_005712a0,0xffffffff);
  if (DAT_00571c98 != 0) {
    FUN_0047e270(&DAT_00571c00,0xffffffff);
  }
  FUN_00452180(uVar2);
  return;
}

