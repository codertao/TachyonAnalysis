
/* after snapshot: unrefreshed replicas count down +0xec then removed */

void TachCli_ExpireReplicas(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_005b3280;
  if (DAT_005b3280 == 0) {
    DAT_005b3280 = DAT_005b3284;
    DAT_005b3284 = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar3 + 8);
    if ((*(int *)(iVar3 + 0xec) == -1) ||
       (iVar4 = *(int *)(iVar3 + 0xec) + -1, *(int *)(iVar3 + 0xec) = iVar4, -1 < iVar4)) {
      FUN_0041b890(iVar3,&DAT_005b3284);
    }
    else {
      FUN_00415ee0(iVar3,1);
    }
    uVar2 = DAT_005b3284;
    iVar3 = iVar1;
  } while (iVar1 != 0);
  DAT_005b3284 = iVar1;
  DAT_005b3280 = uVar2;
  return;
}

