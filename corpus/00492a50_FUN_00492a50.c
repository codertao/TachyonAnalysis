
void FUN_00492a50(void)

{
  int *piVar1;
  
  piVar1 = (int *)((int)DAT_005657ac + 0x24);
  DAT_005657ac = (undefined **)((int)DAT_005657ac + 0x24);
  if (*piVar1 == 0) {
    DAT_005657ac = &PTR_s_VON_OPTIONS_00559ef0;
  }
  FUN_00466590(1,9,0,0xff);
  return;
}

