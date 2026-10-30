
void FUN_00427ff0(int param_1,int param_2)

{
  if ((param_1 != DAT_005b1b48) && (param_1 != 0)) {
    FUN_00466380(DAT_005b1b30,param_1,0xff);
    DAT_005b1b48 = param_1;
  }
  if (param_2 != 0) {
    FUN_00466430(DAT_005b1b30,0);
    return;
  }
  FUN_00466430(DAT_005b1b30,1);
  return;
}

