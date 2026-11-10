
/* (rt, grpHdr, i) -> record of the i-th key in group (re-found by key name) */

undefined4 Rtxt_GetGroupItem(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar2 = (char *)*param_2;
  if ((uint)param_2[1] <= param_3) {
    return 0;
  }
  do {
    if (param_3 == 0) {
      uVar3 = Rtxt_FindKey(param_1,pcVar2);
      return uVar3;
    }
    uVar4 = 0xffffffff;
    pcVar5 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_3 = param_3 - 1;
    pcVar2 = pcVar2 + ~uVar4;
  } while( true );
}

