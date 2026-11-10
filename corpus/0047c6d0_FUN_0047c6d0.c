
void FUN_0047c6d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  char local_40 [64];
  
  iVar1 = FUN_0043bf10(g_MapUiCtx,s_MAP_HILITE_REGION_00552828);
  iVar2 = Var_GetTable(s_REGION_NAMES_00534294);
  DAT_005716a0 = 0;
  if (iVar1 == 0) {
    pcVar5 = s__High_Lighted_Region_00552810;
  }
  else {
    pcVar5 = *(char **)(iVar1 + 0x40);
  }
  str_sprintf(&DAT_00571360,&DAT_005480b0,pcVar5);
  if ((param_1 != 0) && (iVar2 != 0)) {
    local_40[0] = '\0';
    puVar4 = *(undefined4 **)(iVar2 + 0x24);
    uVar6 = 0;
    if (*(int *)(iVar2 + 0x20) != 0) {
      do {
        iVar3 = str_cmp(*puVar4,param_1);
        if (iVar3 == 0) {
          str_sprintf(local_40,s_REGION__d_00552804,puVar4[1]);
          break;
        }
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 2;
      } while (uVar6 < *(uint *)(iVar2 + 0x20));
      if ((local_40[0] != '\0') && (GLBL_ingame_rtxt != 0)) {
        puVar4 = (undefined4 *)Rtxt_Lookup(GLBL_ingame_rtxt,s_REGION_NAMES_005527f4,local_40);
        if (puVar4 == (undefined4 *)0x0) {
          if (iVar1 == 0) {
            pcVar5 = s__High_Lighted_Region_00552810;
          }
          else {
            pcVar5 = *(char **)(iVar1 + 0x40);
          }
          str_sprintf(&DAT_00571360,s__s__s____s_00552720,pcVar5,param_1,local_40);
        }
        else {
          str_sprintf(&DAT_005716a0,*puVar4);
          if (iVar1 == 0) {
            pcVar5 = s__High_Lighted_Region_00552810;
          }
          else {
            pcVar5 = *(char **)(iVar1 + 0x40);
          }
          str_sprintf(&DAT_00571360,s__s__s_005336a4,pcVar5,*puVar4);
        }
      }
    }
  }
  FUN_0043e6a0(g_MapUiCtx,s_TxtMapRegion_005527e4,&DAT_00571360);
  return;
}

