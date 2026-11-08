
/* startup stage 1 blob kind 2: {u16 count; {u16 slot; char desName[]}*} from g_DescRegistry */

undefined2 * TachSrv_WriteDescTable(undefined4 param_1,undefined2 *param_2,short *param_3)

{
  short *psVar1;
  char cVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  
  puVar3 = param_2;
  psVar1 = param_2 + 2;
  *param_2 = 2;
  puVar6 = param_2 + 3;
  piVar7 = &g_DescRegistry;
  *psVar1 = 0;
  param_2 = (undefined2 *)0x0;
  do {
    if (*piVar7 != 0) {
      *psVar1 = *psVar1 + 1;
      *puVar6 = (short)param_2;
      uVar4 = 0xffffffff;
      pcVar8 = (char *)(*piVar7 + 4);
      do {
        pcVar9 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar8 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      pcVar8 = pcVar9 + -uVar4;
      pcVar9 = (char *)(puVar6 + 1);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar8 = (char *)(*piVar7 + 4);
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      puVar6 = (undefined2 *)((int)puVar6 + ~uVar4 + 2);
    }
    param_2 = (undefined2 *)((int)param_2 + 1);
    piVar7 = piVar7 + 1;
    if (0xff < (int)param_2) {
      if (((uint)puVar6 & 1) != 0) {
        puVar6 = (undefined2 *)((int)puVar6 + 1);
      }
      puVar3[1] = (short)puVar6 - (short)puVar3;
      *param_3 = *param_3 + 1;
      return puVar6;
    }
  } while( true );
}

