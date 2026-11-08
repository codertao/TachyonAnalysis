
void FUN_004368b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = something_list_related_get_next(param_4 + 0x94);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_1;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    *(undefined4 *)(iVar1 + 0x20) = param_3;
    FUN_004b78f0(iVar1,param_4 + 0xb8);
  }
  return;
}

