
void FUN_0040e470(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 200) != 0) {
    FUN_0040ce10(*(int *)(param_1 + 200));
    uVar1 = FUN_0040cf70(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 200));
    FUN_0040ce50(uVar1);
    uVar1 = FUN_0040cf70(*(undefined1 *)(*(int *)(param_1 + 200) + 0xc2));
    FUN_0040d630(param_1,uVar1);
    FUN_00454580(*(undefined4 *)(param_1 + 200));
    FUN_0040d6e0(param_1);
  }
  return;
}

