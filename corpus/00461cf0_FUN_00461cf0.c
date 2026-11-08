
char * FUN_00461cf0(int param_1,char *param_2,short *param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  param_2[0] = '\x01';
  param_2[1] = '\0';
  param_2[2] = '4';
  param_2[3] = '\0';
  *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(*(int *)(param_1 + 200) + 0x78);
  uVar4 = 0xffffffff;
  pcVar7 = (char *)(*(int *)(*(int *)(*(int *)(param_1 + 200) + 100) + 0x3c) + 0x2c);
  do {
    pcVar6 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = param_2;
  for (uVar5 = uVar4 >> 2; pcVar7 = pcVar7 + 4, uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = (char *)&DAT_005a5dd0;
  do {
    pcVar6 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar6 + -uVar4;
  pcVar6 = param_2 + 0x12;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = (**(code **)(g_ActiveRules + 0x38))();
  *(undefined4 *)(param_2 + 0x26) = uVar3;
  *(undefined2 *)(param_2 + 0x2a) = (undefined2)DAT_005a5dcc;
  *(undefined2 *)(param_2 + 0x2c) = *(undefined2 *)(*(int *)(*(int *)(param_1 + 200) + 100) + 0x30);
  *(undefined2 *)(param_2 + 0x2e) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)(param_2 + 0x30) = (undefined2)DAT_005897e0;
  if (*(code **)(g_ActiveRules + 0x50) != (code *)0x0) {
    uVar2 = (**(code **)(g_ActiveRules + 0x50))();
    *(undefined2 *)(param_2 + 0x32) = uVar2;
    *param_3 = *param_3 + 1;
    return param_2 + *(ushort *)(param_2 + 2);
  }
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  *param_3 = *param_3 + 1;
  return param_2 + *(ushort *)(param_2 + 2);
}

