
void FUN_00416420(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_40 [64];
  
  if (DAT_005b8f6c != (code *)0x0) {
    (*DAT_005b8f6c)();
    DAT_005b8f6c = (code *)0x0;
  }
  DAT_005b3338 = DAT_005b31f0;
  DAT_005b3394 = 1;
  DAT_005b31f0 = (uint)*(ushort *)((int)param_1 + 0x12);
  DAT_005b39b0 = (uint)*(ushort *)((int)param_1 + 0x12);
  DAT_005b39d4 = *param_1;
  DAT_005b39d8 = param_1[1];
  DAT_005b39dc = param_1[2];
  DAT_005b39e0 = (uint)*(ushort *)(param_1 + 3) << 0x10;
  uVar4 = 0xffffffff;
  DAT_005b39e4 = (uint)*(ushort *)((int)param_1 + 0xe) << 0x10;
  DAT_005b39e8 = (uint)*(ushort *)(param_1 + 4) << 0x10;
  pcVar6 = (char *)((int)param_1 + 0x16);
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_005b3a04;
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
  DAT_005b3308 = DAT_005b3308 + 1;
  FUN_00416300();
  iVar2 = DAT_005b3300;
  if (DAT_005b39a0 == 0) {
    *(undefined4 *)(DAT_005b3300 + 0xa0) = 0;
    *(undefined4 *)(iVar2 + 0xa4) = 0;
    *(undefined4 *)(iVar2 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 9) == '\0') {
    if (*(char *)(param_1 + 5) != '\0') {
      FUN_0042e210(*(undefined1 *)((int)param_1 + 0x15));
      FUN_00455810();
    }
  }
  else {
    if (DAT_005a6730 != 0) {
      str_sprintf(auStack_40,s_NEWQUADRANT__SCENE_PLAY__s__005342bc,param_1 + 9);
      FUN_0045d9d0(auStack_40,0);
    }
    Bdf_LoadAndApply(&DAT_005b3a04);
    uVar3 = FUN_0045aea0(param_1 + 9,0,0x3c,&LAB_004165e0,0,0);
    FUN_0045c500(uVar3);
  }
  DAT_005b39f0 = 0;
  FUN_004163e0(2,0,0);
  return;
}

