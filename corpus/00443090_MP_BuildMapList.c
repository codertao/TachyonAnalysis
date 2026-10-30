
/* scan bw%02d.mpc/dm%02d.mpc; read GAMETYPE/MAIN_SPX/IMAGE_NAME/TITLE/players into 0xb8 records
   (g_MPGameList 0x562c04) */

void MP_BuildMapList(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  uint local_70;
  undefined1 local_6c [108];
  
  DAT_005a4000 = 0;
  uVar7 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s_bw__02d_mpc_00540fd4,uVar7);
    iVar3 = Fs_Exists(&DAT_005a41e0);
    if (iVar3 != 0) {
      DAT_005a4000 = DAT_005a4000 + 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 100);
  uVar7 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s_dm__02d_mpc_00540fc8,uVar7);
    iVar3 = Fs_Exists(&DAT_005a41e0);
    if (iVar3 != 0) {
      DAT_005a4000 = DAT_005a4000 + 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 100);
  if (DAT_005a4000 != 0) {
    FUN_0048e3d0(&DAT_00562c04,DAT_005a4000 * 0xb8,4,s_mnuhost_MPGameList_00540fb4,0xa000);
    local_70 = 0;
    iVar3 = DAT_00562c04 + 0x50;
    iVar6 = DAT_00562c04;
    do {
      str_sprintf(&DAT_005a41e0,s_bw__02d_mpc_00540fd4,local_70);
      iVar4 = Fs_Exists(&DAT_005a41e0);
      if ((iVar4 != 0) && (iVar4 = Cbin_LoadFile(&DAT_005a41e0,local_6c), iVar4 != 0)) {
        uVar7 = 0xffffffff;
        pcVar8 = (char *)&DAT_005a41e0;
        do {
          pcVar9 = pcVar8;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar9 = pcVar8 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        pcVar8 = pcVar9 + -uVar7;
        pcVar9 = (char *)(iVar3 + -0x10);
        for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        Cbin_GetField_Ctx(&DAT_00532af4,s_GAMETYPE_00540fa8,iVar6,0x3f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_MAIN_SPX_00540f9c,iVar3,0x3f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_IMAGE_NAME_00540f90,iVar3 + 0x50,0x3f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_TITLE_00540f88,iVar3 + 0x10,0x3f,0,local_6c);
        Cbin_FindSection(&DAT_00532af4,local_6c);
        piVar1 = (int *)(iVar3 + 100);
        Cbin_FindParam(s_SUGGEST_PLAYER_COUNT_00540f70,0,0,piVar1,1,1,local_6c);
        Cbin_FindSection(&DAT_00532af4,local_6c);
        Cbin_FindParam(s_MAX_PLAYERS_00540f64,0,0,(int *)(iVar3 + 0x60),1,1,local_6c);
        if (*piVar1 == 0) {
          *piVar1 = *(int *)(iVar3 + 0x60);
        }
        FUN_0049adb0(local_6c);
        iVar6 = iVar6 + 0xb8;
        iVar3 = iVar3 + 0xb8;
      }
      local_70 = local_70 + 1;
    } while (local_70 < 100);
    local_70 = 0;
    iVar3 = iVar6 + 0x50;
    do {
      str_sprintf(&DAT_005a41e0,s_dm__02d_mpc_00540fc8,local_70);
      iVar4 = Fs_Exists(&DAT_005a41e0);
      if ((iVar4 != 0) && (iVar4 = Cbin_LoadFile(&DAT_005a41e0,local_6c), iVar4 != 0)) {
        uVar7 = 0xffffffff;
        pcVar8 = (char *)&DAT_005a41e0;
        do {
          pcVar9 = pcVar8;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar9 = pcVar8 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        pcVar8 = pcVar9 + -uVar7;
        pcVar9 = (char *)(iVar3 + -0x10);
        for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        Cbin_GetField_Ctx(&DAT_00532af4,s_GAMETYPE_00540fa8,iVar6,0x3f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_MAIN_SPX_00540f9c,iVar3,0x3f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_IMAGE_NAME_00540f90,iVar3 + 0x50,0x3f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_TITLE_00540f88,iVar3 + 0x10,0x3f,0,local_6c);
        Cbin_FindSection(&DAT_00532af4,local_6c);
        piVar1 = (int *)(iVar3 + 100);
        Cbin_FindParam(s_SUGGEST_PLAYER_COUNT_00540f70,0,0,piVar1,1,1,local_6c);
        Cbin_FindSection(&DAT_00532af4,local_6c);
        Cbin_FindParam(s_MAX_PLAYERS_00540f64,0,0,(int *)(iVar3 + 0x60),1,1,local_6c);
        if (*piVar1 == 0) {
          *piVar1 = *(int *)(iVar3 + 0x60);
        }
        FUN_0049adb0(local_6c);
        iVar6 = iVar6 + 0xb8;
        iVar3 = iVar3 + 0xb8;
      }
      local_70 = local_70 + 1;
    } while (local_70 < 100);
  }
  return;
}

