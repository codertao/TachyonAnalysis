
undefined2 * FUN_00461ea0(undefined4 param_1,undefined2 *param_2,short *param_3)

{
  short *psVar1;
  char cVar2;
  undefined2 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined2 *puVar6;
  char *pcVar7;
  
  puVar3 = param_2;
  psVar1 = param_2 + 2;
  *param_2 = 5;
  *psVar1 = 0;
  puVar6 = param_2 + 3;
  param_2 = (undefined2 *)0x0;
  piVar5 = DAT_006af660;
  if (DAT_005897e0 != 0) {
    do {
      if (*piVar5 != 0) {
        *psVar1 = *psVar1 + 1;
        FUN_0045d9f0(puVar6,piVar5);
        uVar4 = 0xffffffff;
        pcVar7 = (char *)(puVar6 + 4);
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        puVar6 = (undefined2 *)(~uVar4 + 10 + (int)puVar6 & 0xfffffffe);
      }
      param_2 = (undefined2 *)((int)param_2 + 1);
      piVar5 = piVar5 + 0x82;
    } while (param_2 < DAT_005897e0);
  }
  *param_3 = *param_3 + 1;
  puVar3[1] = (short)puVar6 - (short)puVar3;
  return puVar6;
}

