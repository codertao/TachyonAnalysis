
/* (stereo) build pan table 0x4df8d0 from 0x4dfad0: stereo copies L/R pairs, mono uses |value| */

void __cdecl Snd_SetStereo(int stereo)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  char *pcVar6;
  undefined2 *puVar7;
  char *pcVar8;
  
  if (stereo == 0) {
    pcVar6 = &DAT_004dfad0;
    pcVar8 = &DAT_004df8d0;
    iVar3 = 0x200;
    do {
      cVar2 = *pcVar6;
      if (cVar2 < '\0') {
        cVar2 = -cVar2;
      }
      *pcVar8 = cVar2;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
      iVar4 = iVar3 + -1;
      bVar1 = 0 < iVar3;
      iVar3 = iVar4;
    } while (iVar4 != 0 && bVar1);
  }
  else {
    puVar5 = (undefined2 *)&DAT_004dfad0;
    puVar7 = (undefined2 *)&DAT_004df8d0;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return;
}

