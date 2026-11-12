
/* (rt, key) -> record, searching all keys regardless of group */

undefined4 Rtxt_FindKey(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_1 != 0) {
    uVar5 = 0;
    pcVar6 = *(char **)(*(int *)(param_1 + 4) + 4);
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        iVar2 = __stricmp(pcVar6,param_2);
        if (iVar2 == 0) {
          uVar3 = Rtxt_GetRecord(param_1,uVar5);
          return uVar3;
        }
        uVar4 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar5 = uVar5 + 1;
        pcVar6 = pcVar6 + ~uVar4;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
  }
  return 0;
}

