
/* in-flight hyper-gate jump: reads gate entity +0xf0->+0x38 (dest spx name) and transitions sector
    */

void Gate_JumpToSector(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_34 [8];
  undefined1 local_2c [12];
  char local_20 [16];
  char local_10 [16];
  
  iVar2 = param_1;
  FUN_004263a0(param_1);
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(*(int *)(iVar2 + 0xf0) + 0x38);
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
  pcVar6 = local_20;
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
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(*(int *)(param_2 + 0x3c) + 0xc);
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
  pcVar6 = local_10;
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
  FUN_0044eaa0();
  Sector_Transition(*(undefined4 *)(*(int *)(iVar2 + 0xf0) + 0x5c),local_20);
  Desc_CreateByType(&DAT_005b8f74,&DAT_005b1f0c,1,&param_1,1,0xffffffff);
  *(undefined4 *)(DAT_005b3300 + 0x8c) = DAT_005b1f0c;
  FUN_0044eab0();
  FUN_0045d9d0(s_ENTERING_REGIONAL_GATE_005493dc,0);
  iVar2 = FUN_00435390(local_20);
  if (iVar2 != 0) {
    Ent_SetQuadrant(DAT_0058b064,DAT_0058b068,iVar2);
    FUN_0045f460(DAT_0058b068,iVar2);
    FUN_00427010(local_10,iVar2,local_2c,local_34,0);
    FUN_0045ed20(local_2c,local_34,iVar2,0,1,1,DAT_0058b068);
    *(undefined4 *)(DAT_0058b068 + 0x13c) = 1;
  }
  return;
}

