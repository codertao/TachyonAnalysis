
void FUN_004528a0(code *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_005b3300 != 0) {
    iVar2 = *(int *)(DAT_005b3300 + 0x90);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar2;
    }
    while (iVar2 = (*param_1)(DAT_005b3300,iVar2), iVar2 != iVar4) {
      if (iVar4 == 0) {
        iVar4 = iVar2;
      }
      if (iVar2 == 0) goto LAB_0045291a;
      if (((*(int *)(iVar2 + 0x8c) == 0) ||
          (pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x5c), pcVar1 == (code *)0x0)) ||
         (iVar3 = (*pcVar1)(iVar2), iVar3 != 0)) break;
    }
    if (((iVar2 == 0) || (*(int *)(iVar2 + 0x8c) == 0)) ||
       ((pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x5c), pcVar1 == (code *)0x0 ||
        (iVar4 = (*pcVar1)(iVar2), iVar4 != 0)))) {
LAB_0045291a:
      if (iVar2 != *(int *)(DAT_005b3300 + 0x90)) {
        FUN_004527e0(iVar2,*(int *)(DAT_005b3300 + 0x90));
      }
    }
  }
  return;
}

