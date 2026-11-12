
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

int * Net_AddSession(char *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,
                    int param_7,int param_8,int param_9,int param_10)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  
  if (param_1 == (char *)0x0) {
    uVar3 = 0x55;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 + 0x54;
  }
  piVar2 = (int *)Mem_AllocTemp(uVar3,s_Net_Session_Buffer_0055e89c);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar5 = piVar2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)piVar5 = 0;
    piVar5 = (int *)((int)piVar5 + 1);
  }
  piVar2[3] = (int)(piVar2 + 0x15);
  if (param_1 != (char *)0x0) {
    uVar3 = 0xffffffff;
    do {
      pcVar6 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    piVar5 = (int *)(pcVar6 + -uVar3);
    piVar7 = piVar2 + 0x15;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar7 = (char)*piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      piVar7 = (int *)((int)piVar7 + 1);
    }
  }
  if (param_2 != (int *)0x0) {
    piVar2[4] = *param_2;
    piVar2[5] = param_2[1];
    piVar2[6] = param_2[2];
    piVar2[7] = param_2[3];
  }
  if (param_3 != (int *)0x0) {
    piVar2[8] = *param_3;
    piVar2[9] = param_3[1];
    piVar2[10] = param_3[2];
    piVar2[0xb] = param_3[3];
  }
  piVar2[0xc] = param_4;
  piVar2[0xd] = param_5;
  piVar2[0xe] = param_6;
  piVar2[0xf] = param_7;
  piVar2[0x10] = param_8;
  piVar2[0x11] = param_9;
  piVar2[0x12] = param_10;
  piVar2[0x13] = 0;
  piVar2[0x14] = 0;
  piVar5 = DAT_0055e3ec;
  *piVar2 = 0;
  piVar2[1] = (int)piVar5;
  piVar7 = piVar2;
  if (piVar5 != (int *)0x0) {
    *piVar5 = (int)piVar2;
    piVar7 = DAT_0055e3e8;
  }
  DAT_0055e3e8 = piVar7;
  piVar5 = piVar2;
  if (*piVar2 != 0) {
    *(int **)(*piVar2 + 4) = piVar2;
    piVar5 = DAT_0055e3ec;
  }
  DAT_0055e3ec = piVar5;
  DAT_0055e3f0 = DAT_0055e3f0 + 1;
  Net_CountSessions();
  _DAT_0055e3f4 = 1;
  return piVar2;
}

