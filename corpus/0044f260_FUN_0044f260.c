
void FUN_0044f260(int param_1,int param_2)

{
  DAT_00590d58 = param_1;
  if (param_1 == 0) {
    FUN_00430210(&PTR_DAT_0053eaa8);
    if (param_2 != 0) {
      FUN_00466590(0x11,0,0,0xff);
    }
  }
  else {
    FUN_00430150();
    if (param_2 != 0) {
      FUN_00466590(0x10,0,0,0xff);
      return;
    }
  }
  return;
}

