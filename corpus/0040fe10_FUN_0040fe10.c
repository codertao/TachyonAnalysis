
void FUN_0040fe10(int param_1,int param_2,int param_3)

{
  int local_c;
  int local_8;
  int local_4;
  
  FUN_0040f380(&DAT_005b9600,param_1 + 0x34,&local_c);
  if (param_2 != 0) {
    FUN_0040f460(param_1,&local_c);
  }
  if (param_3 != 0) {
    DAT_005b95e8 = DAT_005b95e8 + (local_c * 0x80 + DAT_005b95e8 * -0x80 >> 8);
    DAT_005b95ec = DAT_005b95ec + (local_8 * 0x80 + DAT_005b95ec * -0x80 >> 8);
    DAT_005b95f0 = DAT_005b95f0 + (local_4 * 0x80 + DAT_005b95f0 * -0x80 >> 8);
    return;
  }
  DAT_005b95e8 = local_c;
  DAT_005b95ec = local_8;
  DAT_005b95f0 = local_4;
  return;
}

