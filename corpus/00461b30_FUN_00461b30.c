
char * FUN_00461b30(undefined4 param_1,undefined2 *param_2,short *param_3)

{
  short *psVar1;
  char cVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  puVar3 = param_2;
  psVar1 = param_2 + 2;
  *param_2 = 3;
  pcVar7 = (char *)(param_2 + 3);
  *psVar1 = 0;
  param_2 = (undefined2 *)0x0;
  pcVar8 = &DAT_005a7554;
  do {
    if (*(int *)(pcVar8 + -0x14) != 0) {
      *psVar1 = *psVar1 + 1;
      *(short *)pcVar7 = (short)param_2;
      uVar4 = 0xffffffff;
      pcVar9 = pcVar8 + -0x10;
      do {
        pcVar10 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = pcVar10 + -uVar4;
      pcVar10 = pcVar7 + 2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar9 = pcVar8 + -0x10;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uVar5 = 0xffffffff;
      pcVar9 = pcVar8;
      do {
        pcVar10 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar10 + -uVar5;
      pcVar10 = pcVar7 + ~uVar4 + 2;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar9 = pcVar8;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      pcVar7 = pcVar7 + ~uVar4 + 2 + ~uVar5;
    }
    param_2 = (undefined2 *)((int)param_2 + 1);
    pcVar8 = pcVar8 + 0x28;
    if (0xff < (int)param_2) {
      if (((uint)pcVar7 & 1) != 0) {
        pcVar7 = pcVar7 + 1;
      }
      puVar3[1] = (short)pcVar7 - (short)puVar3;
      *param_3 = *param_3 + 1;
      return pcVar7;
    }
  } while( true );
}

