
void FUN_0045ed20(undefined4 *param_1,undefined4 *param_2,int param_3,char *param_4,
                 undefined1 param_5,undefined1 param_6,int param_7)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  
  puVar2 = (undefined4 *)FUN_004b87d0();
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_7 + 0x1d4) = 0;
    if (param_1 != (undefined4 *)0x0) {
      *puVar2 = *param_1;
      puVar2[1] = param_1[1];
      puVar2[2] = param_1[2];
      puVar2[3] = *param_2;
      *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_2 + 1);
    }
    *(undefined2 *)((int)puVar2 + 0x12) = *(undefined2 *)(param_3 + 0x30);
    *(undefined1 *)((int)puVar2 + 0x15) = param_6;
    *(undefined1 *)(puVar2 + 5) = param_5;
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(*(int *)(param_3 + 0x3c) + 0x2c);
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = (char *)((int)puVar2 + 0x16);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      *(undefined1 *)(puVar2 + 9) = 0;
    }
    else {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_4;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_4 + 1;
        cVar1 = *param_4;
        param_4 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = (char *)(puVar2 + 9);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    local_18 = 0x800;
    local_14 = 4;
    local_c = param_7;
    FUN_004b87f0(puVar2,0x1007,0x34,&local_18);
    if ((g_FlightStateFlags & 4) != 0) {
      FUN_0045ebb0(param_7,param_3,DAT_005a5e0c,DAT_005a5e10);
      FUN_0045ec70(param_7,param_3,DAT_005a5e14,DAT_005a5e18);
      FUN_00450940(param_3);
      return;
    }
    FUN_0045ebb0(param_7,param_3,*(undefined4 *)(param_7 + 0x14c),*(undefined4 *)(param_7 + 0x150));
  }
  return;
}

