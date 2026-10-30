
void FUN_0049a1e0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char local_100 [256];
  
  iVar2 = FUN_00499d30(param_1);
  param_1[6] = iVar2;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_0049c7d0(iVar2 * 0x1c,s_config_labels_0055d738);
    param_1[10] = puVar3;
    for (uVar4 = (uint)(param_1[6] * 0x1c) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar3 = (undefined4 *)param_1[10];
    param_1[2] = *param_1;
    param_1[5] = 0;
    if (param_1[4] != 0) {
      do {
        iVar2 = FUN_004bd452(param_1[2],s____A_Z_0123456789__0055d70c,local_100);
        puVar6 = puVar3;
        if (iVar2 != 0) {
          uVar4 = 0xffffffff;
          pcVar7 = local_100;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          *puVar3 = param_1[0x17];
          uVar5 = 0xffffffff;
          param_1[0x17] = param_1[0x17] + ~uVar4;
          pcVar7 = local_100;
          do {
            pcVar8 = pcVar7;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar7 = pcVar8 + -uVar5;
          pcVar8 = (char *)*puVar3;
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar8 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          }
          FUN_004c83ea(*puVar3);
          puVar3[1] = param_1[5] + 1;
          uVar4 = 0xffffffff;
          pcVar7 = (char *)param_1[2];
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          puVar6 = puVar3 + 7;
          puVar3[2] = (char *)param_1[2] + ~uVar4;
        }
        uVar4 = 0xffffffff;
        pcVar7 = (char *)param_1[2];
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iVar2 = param_1[5];
        param_1[2] = (char *)param_1[2] + ~uVar4;
        param_1[5] = iVar2 + 1U;
        puVar3 = puVar6;
      } while (iVar2 + 1U < (uint)param_1[4]);
    }
    if (DAT_006040ec != 0) {
      FUN_004bd0d6(param_1[10],param_1[6],0x1c,&LAB_0049a1a0);
    }
  }
  return;
}

