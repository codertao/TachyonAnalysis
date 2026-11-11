
/* 120 s */

void ns_SrvTimeouts(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  uVar3 = 0;
  piVar4 = DAT_10019af8;
  iVar5 = DAT_10019afc;
  if (DAT_100198b8 != 0) {
    do {
      if (((*piVar4 != 0) && (piVar4[1] != -1)) &&
         (iVar1 = piVar4[2], piVar4[2] = iVar1 + 1U, 0x78 < iVar1 + 1U)) {
        FUN_10002d30((int)piVar4);
        FUN_10004820(piVar4);
      }
      if (((*(int *)(iVar5 + 0x9c) != 0) && (*(int *)(iVar5 + 0x98) != 0)) &&
         (uVar2 = *(int *)(iVar5 + 0xac) + 1, *(uint *)(iVar5 + 0xac) = uVar2, 300 < uVar2)) {
        FUN_10002b80(iVar5,1);
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 6;
      iVar5 = iVar5 + 0xbc;
    } while (uVar3 < DAT_100198b8);
  }
  return;
}

