
void FUN_00499ee0(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char local_400 [256];
  char local_300;
  char local_2ff [255];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  uVar4 = *(uint *)(param_2 + 4);
  puVar6 = *(undefined4 **)(param_2 + 0x18);
  *(uint *)(param_1 + 0x14) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (uVar4 < *(uint *)(param_1 + 0x10)) {
    iVar3 = Crt_sscanf(uVar1,&DAT_0055d734,local_200);
    while (iVar3 == 0) {
      iVar3 = Crt_sscanf(*(undefined4 *)(param_1 + 8),s________________0055d720,&local_300,local_100
                        );
      if (iVar3 == 2) {
        pcVar7 = &local_300;
        puVar6[1] = *(undefined4 *)(param_1 + 0x14);
        puVar6[2] = *(undefined4 *)(param_1 + 8);
        if (local_300 == ' ') {
          cVar2 = ' ';
          do {
            if (cVar2 == '\0') break;
            cVar2 = pcVar7[1];
            pcVar7 = pcVar7 + 1;
          } while (cVar2 == ' ');
        }
        uVar4 = 0xffffffff;
        do {
          pcVar8 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar8 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar8 + -uVar4;
        pcVar8 = local_400;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        FUN_00499d00(local_400);
        uVar4 = 0xffffffff;
        pcVar7 = local_400;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        *puVar6 = *(undefined4 *)(param_1 + 100);
        uVar5 = 0xffffffff;
        *(uint *)(param_1 + 100) = *(int *)(param_1 + 100) + ~uVar4;
        pcVar7 = local_400;
        do {
          pcVar8 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = pcVar8 + -uVar5;
        pcVar8 = (char *)*puVar6;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        puVar6 = puVar6 + 5;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
      }
      uVar4 = 0xffffffff;
      pcVar7 = *(char **)(param_1 + 8);
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar5 = *(int *)(param_1 + 0x14) + 1;
      *(char **)(param_1 + 8) = *(char **)(param_1 + 8) + ~uVar4;
      *(uint *)(param_1 + 0x14) = uVar5;
      if (*(uint *)(param_1 + 0x10) <= uVar5) {
        return;
      }
      iVar3 = Crt_sscanf(*(undefined4 *)(param_1 + 8),&DAT_0055d734,local_200);
    }
  }
  return;
}

