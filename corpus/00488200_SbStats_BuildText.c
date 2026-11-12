
/* sweep: STATS_TELETYPE */

void SbStats_BuildText(int *param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char **ppcVar11;
  undefined4 local_168;
  char *local_164;
  int local_160;
  int local_15c;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  char *local_12c;
  char *local_128;
  undefined *local_124;
  undefined1 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_100 [128];
  char local_80 [128];
  
  piVar2 = (int *)Starbase_FindFont(s_STATS_TELETYPE_005587c8);
  iVar7 = 0;
  if (s_STAT_ENEMY_KILLS_00558268[0] != '\0') {
    pcVar8 = s_STAT_ENEMY_KILLS_00558268;
    do {
      iVar3 = Mnu_FindText(&GLBL_UI_ELEM_LIST,pcVar8);
      if (iVar3 != 0) {
        uVar5 = 0xffffffff;
        pcVar4 = *(char **)(iVar3 + 0x40);
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar7 = iVar7 + ~uVar5 + 1;
      }
      pcVar4 = pcVar8 + 0xa0;
      pcVar8 = pcVar8 + 0xa0;
    } while (*pcVar4 != '\0');
  }
  Mem_AllocZeroTagged(&DAT_00563e20,iVar7 * 2,4,s_stb_Stats_STAT_TEXT_005587b4,0xa100);
  if (s_STAT_ENEMY_KILLS_00558268[0] != '\0') {
    pcVar8 = s_ENEMY_KILLED_00558228;
    do {
      iVar7 = Mnu_FindText(&GLBL_UI_ELEM_LIST,pcVar8 + 0x40);
      if (iVar7 != 0) {
        pcVar4 = _strstr(pcVar8,&DAT_00535eb8);
        if (pcVar4 == (char *)0x0) {
          str_sprintf(local_100,pcVar8);
        }
        else {
          Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_168
                    );
          str_sprintf(local_100,pcVar8,local_168);
        }
        Var_GetInt(g_PlayerVarStore,pcVar8 + -0x20,local_100,&local_168);
        str_sprintf(local_80,s__s___lu_c_c_005587a8,*(undefined4 *)(iVar7 + 0x40),local_168,0xd,10);
        uVar5 = 0xffffffff;
        pcVar4 = local_80;
        do {
          pcVar10 = pcVar4;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar10 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar10;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar7 = -1;
        pcVar4 = DAT_00563e20;
        do {
          pcVar9 = pcVar4;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar9 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar9;
        } while (cVar1 != '\0');
        pcVar4 = pcVar10 + -uVar5;
        pcVar10 = pcVar9 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar10 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
      pcVar4 = pcVar8 + 0xe0;
      pcVar8 = pcVar8 + 0xa0;
    } while (*pcVar4 != '\0');
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = s_SHADOW12w_0054e750;
  }
  iVar7 = Mnu_FindFont(&GLBL_UI_ELEM_LIST,param_2);
  if ((iVar7 != 0) && (piVar2 != (int *)0x0)) {
    Teletype_SetText(1,0xa100);
    ppcVar11 = &local_164;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppcVar11 = (char *)0x0;
      ppcVar11 = ppcVar11 + 1;
    }
    local_13c = *piVar2;
    local_138 = piVar2[1];
    local_134 = piVar2[2];
    local_130 = piVar2[3];
    if (param_1 != (int *)0x0) {
      local_13c = *param_1;
      local_138 = param_1[1];
      local_134 = param_1[2];
      local_130 = param_1[3];
    }
    local_11c = 0;
    local_118 = 3;
    local_14a = *(undefined1 *)(iVar7 + 0xb0);
    local_14b = *(undefined1 *)(iVar7 + 0xb4);
    local_14c = *(undefined1 *)(iVar7 + 0xb8);
    local_147 = *(undefined1 *)(iVar7 + 0xfc);
    local_148 = *(undefined1 *)(iVar7 + 0x100);
    local_149 = *(undefined1 *)(iVar7 + 0x104);
    local_144 = *(undefined1 *)(iVar7 + 0x148);
    local_145 = *(undefined1 *)(iVar7 + 0x14c);
    local_146 = *(undefined1 *)(iVar7 + 0x150);
    local_141 = *(undefined1 *)(iVar7 + 0x194);
    local_142 = *(undefined1 *)(iVar7 + 0x198);
    local_143 = *(undefined1 *)(iVar7 + 0x19c);
    local_164 = DAT_00563e20;
    local_120 = 0x14;
    local_12c = s_TT_CLICK_0054b07c;
    local_128 = s_TT_RETURN_0054b070;
    local_124 = &DAT_00583498;
    local_110 = 6;
    local_114 = 1;
    if ((DAT_00564ae4 == 0) || (*(int *)(iVar7 + 0x238) == 0)) {
      local_160 = iVar7 + 0x50;
    }
    else {
      local_13c = local_13c + 4;
      local_15c = *(int *)(iVar7 + 0x238);
    }
    Teletype_Configure(1,&local_164,0x37ff);
    Teletype_SetInstant(1,1);
  }
  return;
}

