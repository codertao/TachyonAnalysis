
void FUN_00457ac0(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  iVar1 = FUN_0045d080(param_1,param_2 + 0x14);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xc3) = 1;
    FUN_0048b330(param_1);
    FUN_0048b140(param_1);
    FUN_0041b950(param_1);
    FUN_0045cf80(param_1,param_2 + 0x14);
  }
  return;
}

