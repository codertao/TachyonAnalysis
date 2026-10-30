
void FUN_0040bfc0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 0xe8);
    if ((iVar1 != 0) && (iVar1 != param_1)) {
      FUN_0045e200(*param_2,param_2[1],param_2[2],*(undefined4 *)(iVar1 + 0x78),param_2[4],
                   param_2[5],1,*(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x44));
      return;
    }
    FUN_0045e200(*param_2,param_2[1],param_2[2],*(undefined4 *)(param_1 + 0x78),param_2[4],
                 param_2[5],0,0);
  }
  return;
}

