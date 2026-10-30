
void FUN_0040dde0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x34) & 0x2000) != 0) {
    iVar1 = FUN_0040cf70(param_2);
    if (iVar1 != 0) {
      FUN_0040cf10(iVar1,*(undefined4 *)(DAT_005b97bc + 4));
      FUN_0045d900(s_YOUR_BASE_IS_UNDER_ATTACK____005338b0,0,0x10,0,param_2,0,DAT_005a6320._2_1_);
      if ((param_3 != 0) && (*(short *)(param_3 + 0x76) == 1)) {
        FUN_0040dae0(param_2,param_3);
      }
    }
  }
  if ((*(uint *)(param_1 + 0x34) & 0x4000) != 0) {
    FUN_0040dda0(param_2);
  }
  return;
}

