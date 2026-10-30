
undefined4 FUN_0049cf30(char *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  puVar2 = param_2;
  if (param_2[0x32] == 0) {
    puVar8 = param_2;
    for (iVar4 = 0x33; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    iVar4 = FUN_004a1310(param_1);
    if (iVar4 == -1) {
      return 0;
    }
    uVar5 = 0xffffffff;
    puVar2[0x31] = param_3;
    do {
      pcVar7 = param_1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar7 + -uVar5;
    pcVar9 = (char *)(puVar2 + 0xf);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_004a1490(&param_2,4);
    FUN_004a14f0(0,0);
    FUN_004a1490(puVar2,param_2);
    uVar3 = FUN_0049c500(puVar2[2] * 0x34,4,0,s_SNDTRIG_DATA_0055de70,puVar2[0x31]);
    puVar2[7] = uVar3;
    FUN_004a1490(uVar3,puVar2[2] * 0x34);
    uVar3 = FUN_0049c500(puVar2[3] * 0xc,4,0,s_SNDTRIG_TRIGGERS_0055de5c,puVar2[0x31]);
    puVar2[8] = uVar3;
    FUN_004a1490(uVar3,puVar2[3] * 0xc);
    FUN_0049da70(puVar2);
    puVar2[0x32] = 1;
    FUN_004a1220();
    if (DAT_00563e94 == 0) {
      FUN_0049cf00();
    }
  }
  return 1;
}

