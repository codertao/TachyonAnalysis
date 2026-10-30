
void FUN_00401b30(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18 [24];
  
  iVar2 = *(int *)(param_1 + 0xf8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x100) + 0x24);
    piVar1 = (int *)(iVar3 + (uint)*(ushort *)(param_1 + 0xf4) * 0xc);
    *param_2 = *piVar1;
    param_2[1] = piVar1[1];
    param_2[2] = piVar1[2];
    piVar1 = (int *)(iVar3 + (uint)*(ushort *)(iVar2 + 0xf4) * 0xc);
    iVar3 = piVar1[1];
    iVar4 = piVar1[2];
    *param_2 = *param_2 - *piVar1;
    param_2[1] = param_2[1] - iVar3;
    param_2[2] = param_2[2] - iVar4;
    FUN_004b1bb0(local_18,iVar2 + 0x4c);
    FUN_004b24d0(param_2,param_2);
    *param_2 = *param_2 + *(int *)(iVar2 + 0x34);
    param_2[1] = param_2[1] + *(int *)(iVar2 + 0x38);
    param_2[2] = param_2[2] + *(int *)(iVar2 + 0x3c);
  }
  return;
}

