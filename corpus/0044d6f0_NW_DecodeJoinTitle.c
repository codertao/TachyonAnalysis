
/* NK=/CK= fields: out[i] = c - key[i] + '0', key "cfhdcegjigecjehcgjdhe"; NK -> host:port, CK ->
   game id */

void NW_DecodeJoinTitle(char *param_1,char *param_2,undefined4 *param_3,char *param_4,uint param_5)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char local_80 [128];
  
  uVar4 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar3 != '\0');
  pcVar2 = param_2;
  for (uVar5 = param_5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = param_5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
  }
  puVar7 = param_3;
  for (uVar5 = param_5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = param_5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  pcVar2 = param_4;
  for (uVar5 = param_5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  for (param_5 = param_5 & 3; param_5 != 0; param_5 = param_5 - 1) {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
  }
  str_sprintf(local_80,s_cfhdcegjigecjehcgjdhe_00548114);
  pcVar2 = _strstr(param_1,&DAT_00548110);
  if (pcVar2 != (char *)0x0) {
    cVar3 = pcVar2[3];
    pcVar2 = pcVar2 + 3;
    if (cVar3 != '&') {
      pcVar6 = param_2;
      do {
        if (param_1 + (~uVar4 - 1) <= pcVar2) break;
        pcVar2 = pcVar2 + 1;
        *pcVar6 = (cVar3 - pcVar6[(int)(local_80 + -(int)param_2)]) + '0';
        cVar3 = *pcVar2;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '&');
    }
    pcVar2 = _strstr(param_2,&DAT_0054810c);
    if (pcVar2 != (char *)0x0) {
      str_sprintf(param_3,&DAT_00536768,pcVar2 + 1);
      *pcVar2 = '\0';
    }
    pcVar2 = _strrchr(param_2,0x20);
    while (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
      pcVar2 = _strrchr(param_2,0x20);
    }
    pcVar2 = _strstr(param_1,&DAT_00548108);
    if (pcVar2 != (char *)0x0) {
      cVar3 = pcVar2[3];
      pcVar2 = pcVar2 + 3;
      if (cVar3 != '&') {
        iVar1 = -(int)param_4;
        do {
          if (param_1 + (~uVar4 - 1) <= pcVar2) {
            return;
          }
          pcVar2 = pcVar2 + 1;
          *param_4 = (cVar3 - param_4[(int)(local_80 + iVar1)]) + '0';
          cVar3 = *pcVar2;
          param_4 = param_4 + 1;
        } while (cVar3 != '&');
      }
    }
  }
  return;
}

