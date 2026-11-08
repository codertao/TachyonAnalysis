
void FUN_00442800(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_500 [256];
  undefined1 local_400 [256];
  char local_300 [768];
  
  if (DAT_005a4040 != 0) {
    if (DAT_005a4044 != 0) {
      DAT_005a4044 = DAT_005a4044 + -1;
      return;
    }
    DAT_005a404c = param_1;
    DAT_005a4044 = 0x640;
    if ((char)GLBL_spacesav[9] == '\0') {
      pcVar7 = s_ttfcus1_00540ea8;
    }
    else {
      pcVar7 = s_ttfpvt1_00540eb0;
    }
    str_sprintf(local_400,pcVar7);
    local_500[0] = '\0';
    FUN_0044ed30(local_500,0x100);
    str_sprintf(local_300,s__s_ServerName__s_GameType__s_Pla_00540e60,local_400,&DAT_005a4054,
                &DAT_005a4094,DAT_005a404c,DAT_005a4050,DAT_005a40b4);
    uVar2 = 0xffffffff;
    pcVar7 = local_500;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar7 = local_300;
    do {
      pcVar5 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = local_300;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004a7150(local_300,~uVar2 - 1,DAT_005a4048,0xf23);
  }
  return;
}

