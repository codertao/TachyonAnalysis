
undefined4
FUN_0041e7e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_5 + 0x5c);
  iVar2 = something_list_related_get_next(iVar1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x18) = param_1;
  *(undefined4 *)(iVar2 + 0x1c) = param_2;
  *(undefined4 *)(iVar2 + 0x20) = param_4;
  *(undefined4 *)(iVar2 + 0x2c) = param_7;
  *(undefined4 *)(iVar2 + 0x28) = param_6;
  *(undefined4 *)(iVar2 + 0x24) = param_8;
  if (((*(int *)(iVar1 + 0x24) == 0) && (*(int *)(iVar1 + 0x28) == 0)) && (param_3 != 0)) {
    *(int *)(iVar1 + 0x28) = param_3;
  }
  FUN_004b78f0(iVar2,(int *)(iVar1 + 0x24));
  return 1;
}

