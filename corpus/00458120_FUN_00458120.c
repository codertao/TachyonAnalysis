
uint FUN_00458120(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_20 [32];
  
  uVar3 = 0;
  iVar1 = Cbin_CountEntries(param_1,param_2);
  Cbin_SelectGroup(param_1);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_0049bdb0(param_2,local_20,0x20,0,4,1);
    uVar2 = FUN_00458100(local_20);
    uVar3 = uVar3 | uVar2;
  }
  return uVar3;
}

