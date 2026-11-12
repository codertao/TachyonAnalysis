
/* CRT */

char * _asctime(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = __getptd();
  if (*(int *)(iVar3 + 0x38) == 0) {
    pvVar4 = _malloc(0x1a);
    *(void **)(iVar3 + 0x38) = pvVar4;
    pcVar5 = &DAT_00564f28;
    if (pvVar4 == (void *)0x0) goto LAB_004bc2a7;
  }
  pcVar5 = *(char **)(iVar3 + 0x38);
LAB_004bc2a7:
  iVar3 = param_1[6];
  iVar1 = param_1[4];
  pcVar2 = pcVar5;
  iVar9 = 0;
  do {
    pcVar6 = pcVar2;
    iVar10 = iVar9 + 1;
    *pcVar6 = "SunMonTueWedThuFriSat"[iVar9 + iVar3 * 3];
    pcVar6[4] = "JanFebMarAprMayJunJulAugSepOctNovDec"[iVar1 * 3 + iVar9];
    pcVar2 = pcVar6 + 1;
    iVar9 = iVar10;
  } while (iVar10 < 3);
  pcVar6[1] = ' ';
  pcVar6[5] = ' ';
  puVar7 = (undefined1 *)_store_dt(pcVar6 + 6,param_1[3]);
  *puVar7 = 0x20;
  puVar7 = (undefined1 *)_store_dt(puVar7 + 1,param_1[2]);
  *puVar7 = 0x3a;
  puVar7 = (undefined1 *)_store_dt(puVar7 + 1,param_1[1]);
  *puVar7 = 0x3a;
  puVar7 = (undefined1 *)_store_dt(puVar7 + 1,*param_1);
  *puVar7 = 0x20;
  uVar8 = _store_dt(puVar7 + 1,(int)param_1[5] / 100 + 0x13);
  puVar7 = (undefined1 *)_store_dt(uVar8,(int)param_1[5] % 100);
  *puVar7 = 10;
  puVar7[1] = 0;
  return pcVar5;
}

