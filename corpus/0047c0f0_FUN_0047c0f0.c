
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047c0f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar2 = FUN_0043bf10(g_MapUiCtx,s_MAP_DST_0055273c);
  if (param_1 == 0) {
    DAT_00571c98 = 0;
    if (iVar2 == 0) {
      pcVar3 = s__Destination_0055272c;
    }
    else {
      pcVar3 = *(char **)(iVar2 + 0x40);
    }
    str_sprintf(&DAT_00571880,&DAT_005480b0,pcVar3);
  }
  else {
    str_sprintf(&DAT_005a41e0,param_1 + 0x40);
    pcVar3 = _strstr((char *)&DAT_005a41e0,&DAT_0053fec0);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
    }
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0053f9e0;
    do {
      pcVar9 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar3 = (char *)&DAT_005a41e0;
    do {
      pcVar8 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar5;
    pcVar9 = pcVar8 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar6 = str_cmp(&DAT_005a41e0,&DAT_00571b80);
    if (iVar6 != 0) {
      FUN_0049c6e0(0xa106);
      DAT_00563688 = 0;
      DAT_00571b80 = 0;
      DAT_00563688 = load_rtxt_bin(&DAT_005a41e0,0xa106);
    }
    if (DAT_00563688 != 0) {
      str_sprintf(&DAT_00571b80,&DAT_005a41e0);
      puVar4 = (undefined4 *)Rtxt_Lookup(DAT_00563688,s_QUADRANT_NAMES_005526f0,param_1);
      if (puVar4 == (undefined4 *)0x0) {
        if (iVar2 == 0) {
          pcVar3 = s__Destination_0055272c;
        }
        else {
          pcVar3 = *(char **)(iVar2 + 0x40);
        }
        str_sprintf(&DAT_00571880,s__s__s____s_00552720,pcVar3,param_1 + 0x40,param_1);
      }
      else {
        if (iVar2 == 0) {
          pcVar3 = s__Destination_0055272c;
        }
        else {
          pcVar3 = *(char **)(iVar2 + 0x40);
        }
        str_sprintf(&DAT_00571880,s__s__s_005336a4,pcVar3,*puVar4);
      }
    }
    _DAT_00571c80 = *(undefined4 *)(param_1 + 0x80);
    _DAT_00571c84 = *(undefined4 *)(param_1 + 0x84);
    DAT_00571c98 = 1;
    if (param_2 != 0) {
      Nav_SetOverrideSector(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x88));
      GLBL_spacesav[0x33] = 1;
      return;
    }
  }
  return;
}

