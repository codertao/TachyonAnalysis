
void FUN_0041f590(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_80 [128];
  
  FUN_0041ebe0(local_80,param_1);
  iVar1 = FUN_0041e6d0(local_80,param_3);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x6c) = param_2;
    *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) | 1;
  }
  return;
}

