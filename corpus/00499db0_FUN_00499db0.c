
void FUN_00499db0(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_400 [256];
  char local_300;
  char local_2ff [255];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  uVar4 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 0x14) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (uVar4 < *(uint *)(param_1 + 0x10)) {
    iVar3 = FUN_004bd452(uVar1,&DAT_0055d734,local_200);
    while (iVar3 == 0) {
      iVar3 = FUN_004bd452(*(undefined4 *)(param_1 + 8),s________________0055d720,&local_300,
                           local_100);
      if (iVar3 == 2) {
        pcVar6 = &local_300;
        if (local_300 == ' ') {
          cVar2 = ' ';
          do {
            if (cVar2 == '\0') break;
            cVar2 = pcVar6[1];
            pcVar6 = pcVar6 + 1;
          } while (cVar2 == ' ');
        }
        uVar4 = 0xffffffff;
        do {
          pcVar7 = pcVar6;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar7 + -uVar4;
        pcVar7 = local_400;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        FUN_00499d00(local_400);
        uVar4 = 0xffffffff;
        pcVar6 = local_400;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + ~uVar4;
      }
      uVar4 = 0xffffffff;
      pcVar6 = *(char **)(param_1 + 8);
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      *(char **)(param_1 + 8) = *(char **)(param_1 + 8) + ~uVar4;
      uVar4 = *(int *)(param_1 + 0x14) + 1;
      *(uint *)(param_1 + 0x14) = uVar4;
      if (*(uint *)(param_1 + 0x10) <= uVar4) {
        return;
      }
      iVar3 = FUN_004bd452(*(undefined4 *)(param_1 + 8),&DAT_0055d734,local_200);
    }
  }
  return;
}

