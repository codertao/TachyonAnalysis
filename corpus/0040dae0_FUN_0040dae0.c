
void FUN_0040dae0(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != *(byte *)(param_2 + 0xc2)) {
    iVar1 = FUN_0040cf70(param_1);
    if (iVar1 != 0) {
      BaseWars_AddPoints(param_2,*(int *)(iVar1 + 4) * 0x19);
      FUN_0040cff0(param_2,*(int *)(iVar1 + 4) * 100);
      FUN_0040d120(*(undefined1 *)(param_2 + 0xc2),0,1);
    }
  }
  return;
}

