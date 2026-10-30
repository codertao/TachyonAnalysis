
void FUN_00430400(void)

{
  int iVar1;
  
  if (DAT_005653a0 == 0) {
    FUN_00466590(1,9,0,0xff);
  }
  else {
    iVar1 = FUN_004250f0(5,1);
    if (iVar1 != 0) {
      FUN_00430150(&PTR_DAT_0053e728);
      FUN_00466590(0x10,0,0,0xff);
      return;
    }
  }
  return;
}

