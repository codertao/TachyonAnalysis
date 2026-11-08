
undefined4 FUN_0049e060(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  uVar6 = 0;
  pcVar7 = (char *)*param_2;
  if (param_2[1] != 0) {
    do {
      piVar2 = (int *)FUN_0049e2e0(param_1,pcVar7);
      if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
        iVar3 = str_cmp(*piVar2,param_3);
        if (iVar3 == 0) {
          uVar4 = FUN_0049e340(param_1,pcVar7);
          return uVar4;
        }
      }
      uVar5 = 0xffffffff;
      pcVar8 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar6 = uVar6 + 1;
      pcVar7 = pcVar7 + ~uVar5;
    } while (uVar6 < (uint)param_2[1]);
  }
  return 0xffffffff;
}

