
void FUN_004944f0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  iVar3 = *(int *)(param_1 + 0xf4);
  FUN_004b1bb0(local_18,iVar3 + 0x4c);
  FUN_004b24d0(param_1 + 0xfc,&local_24);
  *(int *)(param_1 + 0x34) = *(int *)(iVar3 + 0x34) + local_24;
  *(int *)(param_1 + 0x38) = *(int *)(iVar3 + 0x38) + local_20;
  *(int *)(param_1 + 0x3c) = *(int *)(iVar3 + 0x3c) + local_1c;
  if ((((((*(uint *)(param_1 + 0xd0) ^ DAT_005897e4) & 7) == 0) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 0xf4), iVar1 != 0)) &&
      (*(int *)(iVar3 + 0x8c) != 0)) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 0x8c) + 0x34), pcVar2 != (code *)0x0)) {
    (*pcVar2)(iVar3,0x11,iVar1);
  }
  if ((*(int *)(param_1 + 0xd4) != 0) &&
     (iVar3 = *(int *)(param_1 + 0xd4) + -1, *(int *)(param_1 + 0xd4) = iVar3, iVar3 == 0)) {
    FUN_00494450(param_1);
  }
  return;
}

