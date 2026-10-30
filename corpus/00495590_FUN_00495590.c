
void FUN_00495590(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_004b1bb0(local_18,(undefined4 *)(param_1 + 0x4c));
  local_1c = *(int *)(*(int *)(param_1 + 0xdc) + 0x9c);
  FUN_004b24d0(&local_24,&local_24);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(param_1 + 0xf8);
  while (iVar1 != 0) {
    iVar3 = iVar3 + local_20;
    iVar2 = iVar2 + local_24;
    *(int *)(iVar1 + 0x34) = iVar2;
    *(int *)(iVar1 + 0x38) = iVar3;
    iVar4 = iVar4 + local_1c;
    *(int *)(iVar1 + 0x3c) = iVar4;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    iVar1 = *(int *)(iVar1 + 0xf8);
  }
  return;
}

