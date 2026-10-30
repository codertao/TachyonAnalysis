
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0046c700(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  float local_b8;
  undefined1 local_b4 [108];
  longlong local_48;
  undefined1 local_40 [6];
  undefined1 local_3a;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  FUN_00469eb0();
  DAT_005879a0 = param_2;
  Sped_LoadNameRegistry(s_desnames_cfg_0053f928,0xa100);
  FUN_004698a0(param_1,local_20,0x10,8);
  str_sprintf(local_10,s__s_bas_0054b068,local_20);
  iVar2 = Cbin_LoadFile(local_10,local_b4);
  if (iVar2 == 0) {
    return 0;
  }
  Cbin_GetField_Ctx(s_INGAME_0053486c,s_REGION_0053f9e8,local_40,0x20,0,local_b4);
  local_3a = 0;
  DAT_005879a4 = param_1;
  iVar2 = Cbin_GetField_Ctx(&DAT_00532af4,s_VOLUME_0054b060,0,0,&DAT_005879b8,local_b4);
  if (iVar2 == 0) {
    DAT_005879b8 = 0xff;
  }
  Cbin_GetField_Ctx(&DAT_00532af4,s_TEXT_TOOL_JOBBIN_0054b04c,&DAT_005879d4,0x10,0,local_b4);
  Cbin_GetField_Ctx(&DAT_00532af4,s_TEXT_TOOL_NEWSBIN_0054b038,&DAT_005879e4,0x10,0,local_b4);
  Cbin_GetField_Ctx(&DAT_00532af4,s_TEXT_TOOL_ITEMBIN_0054af08,&DAT_005879c4,0x10,0,local_b4);
  Cbin_GetField_Ctx(&DAT_00532af4,s_TEXT_TOOL_WINGBIN_0054b024,&DAT_005879f4,0x10,0,local_b4);
  Cbin_GetField_Ctx(&DAT_00532af4,&DAT_0054b020,&DAT_00587a24,0x10,0,local_b4);
  Cbin_GetField_Ctx(&DAT_00532af4,s_FONT_LONG_DEFAULT_0054aef4,&DAT_005882e8,0x10,0,local_b4);
  Cbin_GetParam_Ctx(&DAT_00532af4,s_BUY_MODIFYER_0054b010,0,0,&DAT_005879bc,2,1,local_b4);
  Cbin_GetParam_Ctx(&DAT_00532af4,s_SELL_MODIFYER_0054b000,0,0,&DAT_005879c0,2,1,local_b4);
  if (_DAT_005879bc < _DAT_0052e59c) {
    _DAT_005879bc = 1.0;
  }
  if ((_DAT_0052e59c < _DAT_005879c0) || (_DAT_005879c0 == _DAT_0052e598)) {
    _DAT_005879c0 = 1.0;
  }
  Cbin_GetField_Ctx(s_HANGER_0054afec,s_HANGER_TRK_0054aff4,&DAT_00587a34,0x10,0,local_b4);
  Cbin_GetField_Ctx(s_HANGER_0054afec,s_HANGER_PAK_0054afe0,&DAT_00587a44,0x10,0,local_b4);
  Cbin_GetField_Ctx(s_HANGER_0054afec,s_HANGER_PAL_0054afd4,&DAT_00587a54,0x10,0,local_b4);
  Cbin_FindSection(s_DATA_RECTS_0054aee8,local_b4);
  iVar2 = Cbin_FindParam(&DAT_00536bc4,&DAT_005882f8,0x3f,0,4,1,local_b4);
  if (iVar2 != 0) {
    puVar7 = &DAT_0058833c;
    do {
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar7 + -4,1,2,local_b4);
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar7,1,3,local_b4);
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar7 + 4,1,4,local_b4);
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar7 + 8,1,5,local_b4);
      if (0x58973b < (int)(puVar7 + 0x50)) break;
      iVar2 = Cbin_FindParam(&DAT_00536bc4,puVar7 + 0xc,0x3f,0,4,1,local_b4);
      puVar7 = puVar7 + 0x50;
    } while (iVar2 != 0);
  }
  iVar2 = Cbin_CountEntries_Ctx(s_ICONS_0054aed8,&DAT_0054aee0,local_b4);
  iVar3 = Cbin_FindSection(s_ICONS_0054aed8,local_b4);
  if (((iVar3 != 0) && (iVar2 != 0)) &&
     (FUN_0048e3d0(&DAT_005896fc,iVar2 * 0x74,4,s_STARBASE_ICONS_0054aec8,0xa100), DAT_005896fc != 0
     )) {
    iVar3 = DAT_005896fc + 0x60;
    iVar6 = DAT_005896fc;
    DAT_005896f8 = iVar2;
    do {
      iVar4 = Cbin_FindParam(&DAT_0054aee0,iVar6,0x3f,0,4,1,local_b4);
      if (iVar4 == 0) break;
      Cbin_GetParamN_Ctx(&DAT_0054aee0,iVar3 + -0x20,0x1f,0,4,2,local_b4);
      Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3,1,3,local_b4);
      Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3 + 4,1,4,local_b4);
      Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3 + 8,1,5,local_b4);
      Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3 + 0xc,2,6,local_b4);
      piVar1 = (int *)(iVar3 + 0x10);
      Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,piVar1,1,7,local_b4);
      if (*piVar1 == 0) {
        *piVar1 = 0xff;
      }
      iVar2 = iVar2 + -1;
      iVar6 = iVar6 + 0x74;
      iVar3 = iVar3 + 0x74;
    } while (iVar2 != 0);
  }
  iVar2 = Cbin_CountEntries_Ctx(s_LIGHTING_0054afc0,s_LIGHT_0054afcc,local_b4);
  iVar3 = Cbin_FindSection(s_LIGHTING_0054afc0,local_b4);
  if (((iVar3 != 0) && (iVar2 != 0)) &&
     (FUN_0048e3d0(&DAT_0058970c,iVar2 * 0x58,4,s_STARBASE_ICONS_0054aec8,0xa100), DAT_0058970c != 0
     )) {
    iVar3 = DAT_0058970c + 0x44;
    iVar6 = DAT_0058970c;
    DAT_00589708 = iVar2;
    do {
      iVar4 = Cbin_FindParam(s_LIGHT_0054afcc,iVar6,0x3f,0,4,1,local_b4);
      if (iVar4 == 0) break;
      Cbin_GetParamN_Ctx(s_LIGHT_0054afcc,0,0,iVar3 + -4,1,2,local_b4);
      Cbin_GetParamN_Ctx(s_LIGHT_0054afcc,0,0,iVar3,1,3,local_b4);
      Cbin_GetParamN_Ctx(s_LIGHT_0054afcc,0,0,iVar3 + 4,1,4,local_b4);
      Cbin_GetParamN_Ctx(s_LIGHT_0054afcc,0,0,iVar3 + 8,1,5,local_b4);
      Cbin_GetParamN_Ctx(s_LIGHT_0054afcc,0,0,iVar3 + 0xc,1,6,local_b4);
      Cbin_GetParamN_Ctx(s_LIGHT_0054afcc,0,0,iVar3 + 0x10,1,7,local_b4);
      iVar2 = iVar2 + -1;
      iVar6 = iVar6 + 0x58;
      iVar3 = iVar3 + 0x58;
    } while (iVar2 != 0);
  }
  iVar2 = Cbin_CountEntries_Ctx(s_COLORS_0054aec0,s_COLOR_0053681c,local_b4);
  iVar3 = Cbin_FindSection(s_COLORS_0054aec0,local_b4);
  if (((iVar3 != 0) && (iVar2 != 0)) &&
     (FUN_0048e3d0(&DAT_00589704,iVar2 * 0x4c,4,s_STARBASE_ICONS_0054aec8,0xa100), DAT_00589704 != 0
     )) {
    iVar3 = DAT_00589704 + 0x44;
    iVar6 = DAT_00589704;
    DAT_00589700 = iVar2;
    do {
      iVar4 = Cbin_FindParam(s_COLOR_0053681c,iVar6,0x3f,0,4,1,local_b4);
      if (iVar4 == 0) break;
      Cbin_GetParamN_Ctx(s_COLOR_0053681c,0,0,iVar3 + -4,1,2,local_b4);
      Cbin_GetParamN_Ctx(s_COLOR_0053681c,0,0,iVar3,1,3,local_b4);
      Cbin_GetParamN_Ctx(s_COLOR_0053681c,0,0,iVar3 + 4,1,4,local_b4);
      iVar2 = iVar2 + -1;
      iVar6 = iVar6 + 0x4c;
      iVar3 = iVar3 + 0x4c;
    } while (iVar2 != 0);
  }
  iVar2 = Cbin_CountEntries_Ctx(s_LOBBY_0054afb4,&DAT_0054afbc,local_b4);
  iVar3 = Cbin_FindSection(s_LOBBY_0054afb4,local_b4);
  if (((iVar3 != 0) && (iVar2 != 0)) &&
     (FUN_0048e3d0(&DAT_00589714,iVar2 * 0xd4,4,s_STARBASE_IA_OVR_0054afa4,0xa100),
     DAT_00589714 != 0)) {
    iVar3 = DAT_00589714 + 0x80;
    iVar6 = DAT_00589714;
    DAT_00589710 = iVar2;
    do {
      iVar4 = Cbin_FindParam(&DAT_0054afbc,iVar6,0x3f,0,4,1,local_b4);
      if (iVar4 == 0) break;
      Cbin_GetParamN_Ctx(&DAT_0054afbc,iVar3 + -0x40,0x3f,0,4,2,local_b4);
      Cbin_GetParamN_Ctx(&DAT_0054afbc,0,0,iVar3,1,3,local_b4);
      Cbin_GetParamN_Ctx(&DAT_0054afbc,0,0,iVar3 + 4,1,4,local_b4);
      Cbin_GetParamN_Ctx(&DAT_0054afbc,0,0,iVar3 + 8,1,5,local_b4);
      local_b8 = 0.0;
      Cbin_GetParamN_Ctx(&DAT_0054afbc,0,0,&local_b8,2,6,local_b4);
      local_48 = (longlong)ROUND(local_b8 * _DAT_0052e548);
      *(undefined4 *)(iVar3 + 0xc) = (undefined4)local_48;
      Cbin_GetParamN_Ctx(&DAT_0054afbc,0,0,iVar3 + 0x10,2,7,local_b4);
      Cbin_GetParamN_Ctx(&DAT_0054afbc,iVar3 + 0x14,0x3f,0,4,8,local_b4);
      iVar2 = iVar2 + -1;
      iVar6 = iVar6 + 0xd4;
      iVar3 = iVar3 + 0xd4;
    } while (iVar2 != 0);
  }
  iVar2 = Cbin_CountEntries_Ctx(s_LOBBY_0054afb4,&DAT_0054afa0,local_b4);
  iVar3 = Cbin_FindSection(s_LOBBY_0054afb4,local_b4);
  if (((iVar3 != 0) && (iVar2 != 0)) &&
     (FUN_0048e3d0(&DAT_0058971c,iVar2 * 0x88,4,s_STARBASE_BTN_OVR_0054af8c,0xa100),
     DAT_0058971c != 0)) {
    iVar3 = DAT_0058971c + 0x80;
    iVar6 = DAT_0058971c;
    DAT_00589718 = iVar2;
    do {
      iVar4 = Cbin_FindParam(&DAT_0054afa0,iVar6,0x3f,0,4,1,local_b4);
      if (iVar4 == 0) break;
      Cbin_GetParamN_Ctx(&DAT_0054afa0,iVar3 + -0x40,0x3f,0,4,2,local_b4);
      Cbin_GetParamN_Ctx(&DAT_0054afa0,0,0,iVar3,1,3,local_b4);
      Cbin_GetParamN_Ctx(&DAT_0054afa0,0,0,iVar3 + 4,1,4,local_b4);
      iVar2 = iVar2 + -1;
      iVar6 = iVar6 + 0x88;
      iVar3 = iVar3 + 0x88;
    } while (iVar2 != 0);
  }
  DAT_005879a8 = FUN_0049df00(&DAT_005879d4,0xa100);
  DAT_005879ac = FUN_0049df00(&DAT_005879e4,0xa100);
  DAT_005879b0 = FUN_0049df00(&DAT_005879c4,0xa100);
  DAT_005879b4 = FUN_0049df00(&DAT_005879f4,0xa100);
  FUN_0046c1b0(s_item_cfg_0054aeb4,0);
  FUN_0046c0d0();
  FUN_00468eb0(local_b4);
  FUN_0049adb0(local_b4);
  uVar8 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s__s_02d_job_0054ad10,local_40,uVar8);
    iVar2 = Fs_Exists(&DAT_005a41e0);
    if (iVar2 != 0) {
      DAT_00589728 = DAT_00589728 + 1;
    }
    str_sprintf(&DAT_005a41e0,s_GLOBAL_02d_job_0054af7c,uVar8);
    iVar2 = Fs_Exists(&DAT_005a41e0);
    if (iVar2 != 0) {
      DAT_00589728 = DAT_00589728 + 1;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 100);
  if (DAT_00589728 != 0) {
    FUN_0048e3d0(&DAT_00589730,DAT_00589728 * 0x1b8,4,s_STARBASE_JOB_0054af6c,0xa100);
    if (DAT_00589730 == 0) {
      DAT_00589728 = 0;
    }
    else {
      uVar5 = Job_LoadAll(s_GLOBAL_00540098,DAT_00589730);
      Job_LoadAll(local_40,uVar5);
      FUN_0046ae30();
    }
  }
  uVar8 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s__s_02d_nws_0054ad8c,local_40,uVar8);
    iVar2 = Fs_Exists(&DAT_005a41e0);
    if (iVar2 != 0) {
      DAT_00589734 = DAT_00589734 + 1;
    }
    str_sprintf(&DAT_005a41e0,s_GLOBAL_02d_nws_0054af5c,uVar8);
    iVar2 = Fs_Exists(&DAT_005a41e0);
    if (iVar2 != 0) {
      DAT_00589734 = DAT_00589734 + 1;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 100);
  if (DAT_00589734 != 0) {
    FUN_0048e3d0(&DAT_00589738,DAT_00589734 << 8,4,s_STARBASE_NEWS_0054af4c,0xa100);
    if (DAT_00589738 == 0) {
      DAT_00589734 = 0;
    }
    else {
      uVar5 = FUN_0046b520(s_GLOBAL_00540098,DAT_00589738);
      FUN_0046b520(local_40,uVar5);
    }
  }
  FUN_0046b400();
  uVar8 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s__s_02d_wng_0054adcc,local_40,uVar8);
    iVar2 = Fs_Exists(&DAT_005a41e0);
    if (iVar2 != 0) {
      DAT_00589720 = DAT_00589720 + 1;
    }
    str_sprintf(&DAT_005a41e0,s_GLOBAL_02d_wng_0054af3c,uVar8);
    iVar2 = Fs_Exists(&DAT_005a41e0);
    if (iVar2 != 0) {
      DAT_00589720 = DAT_00589720 + 1;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 100);
  if (DAT_00589720 != 0) {
    FUN_0048e3d0(&DAT_00589724,DAT_00589720 * 0xe0,4,s_STARBASE_WINGMAN_0054af28,0xa100);
    if (DAT_00589724 != 0) {
      uVar5 = FUN_0046b7e0(s_GLOBAL_00540098,DAT_00589724);
      FUN_0046b7e0(local_40,uVar5);
      FUN_0046e6e0();
      return 1;
    }
    DAT_00589720 = 0;
  }
  FUN_0046e6e0();
  return 1;
}

