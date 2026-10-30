
undefined4 FUN_00456910(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_80 [128];
  
  iVar1 = *(int *)(param_2 + 0x104);
  iVar2 = *(int *)(*(int *)(param_2 + 0x8c) + 0x6c0);
  if (iVar2 <= iVar1) {
    return 0;
  }
  iVar2 = iVar2 - iVar1;
  if (*(int *)(param_1 + 0xb4) < iVar2) {
    iVar2 = *(int *)(param_1 + 0xb4);
  }
  *(int *)(param_2 + 0x104) = iVar1 + iVar2;
  uVar3 = FUN_0048e800(DAT_005a6140,0x6a);
  str_sprintf(local_80,s__d__s_00548cd8,iVar2,uVar3);
  FUN_004568e0(local_80,*(undefined4 *)(param_2 + 0xdc));
  if (*(code **)(DAT_005b1dc4 + 0x58) != (code *)0x0) {
    (**(code **)(DAT_005b1dc4 + 0x58))(*(undefined4 *)(param_2 + 0xdc));
  }
  FUN_0045d810(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),
               *(undefined4 *)(param_2 + 0xdc));
  return 1;
}

