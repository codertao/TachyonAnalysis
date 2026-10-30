
void FUN_00407b50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  
  if (param_6 != 0) {
    iVar1 = FUN_00407900(param_6,param_2);
    if (iVar1 != 0) {
      FUN_0048e380(*(undefined4 *)(param_6 + 0x14),*(int *)(param_6 + 0xc) * 0xc);
      FUN_004070b0(param_1,param_6,*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(param_6 + 0x14),0);
      FUN_00406fe0(param_1 + 0x18,param_3,param_5,*(undefined4 *)(param_6 + 0x14),param_6);
    }
  }
  return;
}

