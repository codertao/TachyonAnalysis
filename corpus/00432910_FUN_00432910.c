
void FUN_00432910(int param_1,int param_2)

{
  DAT_005a68c8 = param_1;
  if (param_1 == 0) {
    FUN_00430210(&PTR_DAT_0053ea10);
    if (param_2 != 0) {
      FUN_00432830();
      FUN_00454460();
      return;
    }
  }
  else {
    FUN_00432120();
    FUN_0044f260(0,0);
    FUN_00430150(&PTR_DAT_0053ea10);
  }
  return;
}

