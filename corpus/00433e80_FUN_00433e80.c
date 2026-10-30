
void FUN_00433e80(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0xd8) != 0) {
    if (*(byte *)(*(int *)(param_1 + 0xd8) + 0x3a) <= param_2) {
      FUN_00433e00(param_1,1);
      return;
    }
    FUN_00433e00(param_1,0);
  }
  return;
}

