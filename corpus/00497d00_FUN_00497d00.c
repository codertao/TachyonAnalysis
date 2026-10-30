
void FUN_00497d00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0xa4);
  iVar2 = *(int *)(param_1 + 0x108) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x10c) = iVar1;
  *(int *)(param_1 + 0x108) = iVar2;
  iVar3 = *(int *)(param_1 + 0x110) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0x110) = iVar3;
  *(int *)(param_1 + 0x34) = (iVar2 - *(int *)(param_1 + 0x34) >> 4) + *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x38) = (iVar1 - *(int *)(param_1 + 0x38) >> 4) + *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x4c) =
       ((*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0x4c)) * 0x80 >> 0xc) +
       *(int *)(param_1 + 0x4c) & 0x1ffffff;
  *(uint *)(param_1 + 0x50) =
       ((*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0x50)) * 0x80 >> 0xc) +
       *(int *)(param_1 + 0x50) & 0x1ffffff;
  *(int *)(param_1 + 0x3c) = (iVar3 - *(int *)(param_1 + 0x3c) >> 4) + *(int *)(param_1 + 0x3c);
  *(uint *)(param_1 + 0x54) =
       ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54)) * 0x80 >> 0xc) +
       *(int *)(param_1 + 0x54) & 0x1ffffff;
  return;
}

