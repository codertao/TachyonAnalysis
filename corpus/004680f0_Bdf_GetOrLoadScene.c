
/* scene cache lookup / alloc; copy filename; call Bdf_ParseScene */

char * Bdf_GetOrLoadScene(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar2 = (char *)FUN_004676e0(param_1);
  if (pcVar2 != (char *)0x0) {
    *(undefined4 *)(pcVar2 + 0xd4) = param_2;
    return pcVar2;
  }
  pcVar2 = (char *)FUN_00467720(param_1);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_004677d0(param_2);
    if (pcVar2 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
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
  pcVar6 = pcVar2;
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
  *(undefined4 *)(pcVar2 + 0xd4) = param_2;
  pcVar2[0xd0] = '\x01';
  pcVar2[0xd1] = '\0';
  pcVar2[0xd2] = '\0';
  pcVar2[0xd3] = '\0';
  Bdf_ParseScene(param_1,pcVar2);
  return pcVar2;
}

