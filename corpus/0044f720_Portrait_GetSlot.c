
/* sweep: guess */

char * Portrait_GetSlot(char *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  *param_2 = 0;
  uVar4 = 0;
  pcVar5 = &DAT_00590258;
  do {
    if (*pcVar5 != '\0') {
      uVar2 = 0xffffffff;
      *(short *)(param_1 + 0xe) = (short)uVar4;
      pcVar6 = pcVar5;
      do {
        pcVar7 = pcVar6;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar6 = pcVar7 + -uVar2;
      pcVar7 = param_1;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      param_1 = param_1 + 0x10;
      *param_2 = *param_2 + 1;
    }
    uVar4 = uVar4 + 1;
    pcVar5 = pcVar5 + 0x2c;
    if (0x3f < uVar4) {
      return param_1;
    }
  } while( true );
}

