
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: hyper_gate */

void Course_SpawnGate(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_4;
  
  local_4 = 0;
  uVar2 = Spx_ResolveDesName(s_hyper_gate_00534ab8);
  Desc_CreateByType(uVar2,&local_4,0,0,0,0xffffffff);
  if (local_4 != 0) {
    clr_bytes(&DAT_005b29d0,0x68);
    _DAT_005b29fc = 0;
    _DAT_005b2a18 = 0xffff;
    _DAT_005b2a20 = 0xffff;
    _DAT_005b29f0 = 1000000;
    _DAT_005b2a34 = *(undefined4 *)(DAT_005b29c8 + 0x140);
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(DAT_005b29c8 + 0x148);
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
    pcVar6 = (char *)&DAT_005b2a08;
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
    Gate_SpawnAndPreload(&DAT_005b29d0,local_4,param_1);
    DAT_005b2a38 = DAT_005b29f8;
  }
  return;
}

