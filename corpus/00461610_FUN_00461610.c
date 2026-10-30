
void FUN_00461610(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  iVar1 = FUN_004b87d0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x3c);
    FUN_004615c0(param_1,(undefined4 *)(param_1 + 0x34),iVar1);
    local_4 = *(undefined4 *)(param_1 + 100);
    local_18 = 0x800;
    local_14 = 0x20;
    FUN_004b87f0(iVar1,0x1106,0x28,&local_18);
  }
  return;
}

