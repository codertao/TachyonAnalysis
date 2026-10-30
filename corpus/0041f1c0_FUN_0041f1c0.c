
void FUN_0041f1c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = (int *)(param_1 + 0x24);
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *piVar1 = 0;
    return;
  }
  do {
    iVar2 = *(int *)(iVar3 + 8);
    if (*(int *)(iVar3 + 0x24) != 0) {
      local_14 = *(undefined4 *)(iVar3 + 0x28);
      local_c = *(undefined4 *)(iVar3 + 0x2c);
      local_8 = 0xffffffff;
      local_4 = 0xffffffff;
      local_18 = 7;
      local_10 = 0;
      FUN_0048ddc0(&local_18,param_2);
    }
    FUN_004b7930(iVar3,piVar1);
    FUN_004b78a0(param_1,iVar3);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

