
/* (rt, grpHdr, key, baseIdx) -> record for key within one group */

undefined4
Rtxt_FindKeyInGroupHdr(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  pcVar6 = (char *)*param_2;
  if (param_2[1] != 0) {
    do {
      iVar2 = __stricmp(pcVar6,param_3);
      if (iVar2 == 0) {
        uVar3 = Rtxt_GetRecord(param_1,param_4);
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
      param_4 = param_4 + 1;
    } while (uVar5 < (uint)param_2[1]);
  }
  return 0;
}

