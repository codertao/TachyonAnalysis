
void FUN_00495da0(int param_1)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  iVar1 = *(int *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  FUN_004b1bb0(local_18,(undefined4 *)(param_1 + 0x4c));
  FUN_004b24d0(param_1 + 0xfc,&local_24);
  *(int *)(param_1 + 0x34) = *(int *)(iVar1 + 0x34) + local_24;
  *(int *)(param_1 + 0x38) = *(int *)(iVar1 + 0x38) + local_20;
  *(int *)(param_1 + 0x3c) = *(int *)(iVar1 + 0x3c) + local_1c;
  return;
}

