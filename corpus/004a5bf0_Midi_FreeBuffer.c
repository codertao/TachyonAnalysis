
/* sweep */

void Midi_FreeBuffer(int *param_1)

{
  char cVar1;
  HGLOBAL pvVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      DAT_005648ac = param_1[1];
    }
    else {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] == (int *)0x0) {
      DAT_005648b0 = *param_1;
    }
    else {
      *(int *)param_1[1] = *param_1;
    }
    DAT_005648b4 = DAT_005648b4 + -1;
    uVar3 = 0xffffffff;
    pcVar5 = (char *)param_1[4];
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    piVar6 = param_1;
    for (uVar4 = ~uVar3 + 0x14 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar6 = -0x22222223;
      piVar6 = piVar6 + 1;
    }
    for (uVar3 = ~uVar3 + 0x14 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)piVar6 = 0xdd;
      piVar6 = (int *)((int)piVar6 + 1);
    }
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
  }
  return;
}

