
void FUN_004839b0(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_80;
  uint local_7c;
  undefined4 *local_78;
  int local_74;
  uint local_70;
  undefined1 local_6c [108];
  
  iVar2 = Var_GetTable(s_SHIP_TYPE_0053fbd0);
  puVar10 = &DAT_0056e3e0;
  for (iVar6 = 0x400; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  if (iVar2 != 0) {
    puVar10 = *(undefined4 **)(iVar2 + 0x24);
    uVar7 = *(uint *)(iVar2 + 0x20);
    local_7c = 0;
    puVar8 = &DAT_0056e440;
    local_70 = uVar7;
    while( true ) {
      uVar3 = uVar7;
      if (0xf < uVar7) {
        uVar3 = 0x10;
      }
      if (uVar3 <= local_7c) break;
      pcVar1 = puVar8 + -0x60;
      local_78 = puVar10;
      _strncpy(pcVar1,(char *)*puVar10,0x1f);
      *(undefined4 *)(puVar8 + 0x84) = puVar10[1];
      uVar4 = Spx_ResolveDesName(pcVar1);
      str_sprintf(puVar8,&DAT_00536768,uVar4);
      iVar2 = Cbin_LoadFile(puVar8,local_6c);
      if (iVar2 == 0) {
        *(undefined4 *)(puVar8 + 0x88) = 0xffffffff;
        *(undefined4 *)(puVar8 + 0x8c) = 0;
      }
      else {
        iVar2 = Cbin_GetParam_Ctx(s_STARBASE_00532c20,&PTR_DAT_00557920,0,0,puVar8 + 0x88,1,1,
                                  local_6c);
        if (iVar2 == 0) {
          *(undefined4 *)(puVar8 + 0x88) = 0xffffffff;
        }
        iVar2 = Cbin_GetParam_Ctx(s_STARBASE_00532c20,s_BUYBACK_00557918,0,0,puVar8 + 0x8c,1,1,
                                  local_6c);
        if (iVar2 == 0) {
          *(undefined4 *)(puVar8 + 0x8c) = 0;
        }
        pcVar5 = (char *)FUN_0048e820(DAT_0056363c,s_OTHER_SHIP_NAMES_00533a5c,pcVar1);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = s__Ship_Desc_0055790c;
        }
        str_sprintf(puVar8 + -0x40,pcVar5);
        uVar4 = FUN_00485060(pcVar1,DAT_00563d7c);
        *(undefined4 *)(puVar8 + 0x9c) = uVar4;
        Cbin_FindSection(s_STARBASE_00532c20,local_6c);
        iVar2 = Cbin_FindParam(s_LOWRES_PAK_00557900,puVar8 + 0x24,0x1f,0,4,1,local_6c);
        if (iVar2 == 0) {
          Cbin_FindSection(&DAT_00532af4,local_6c);
          Cbin_FindParam(s_EXTERIOR_PAK_00532ae4,puVar8 + 0x24,0x1f,0,4,1,local_6c);
          Cbin_GetParamN_Ctx(s_EXTERIOR_PAK_00532ae4,puVar8 + 0x44,0x1f,0,4,2,local_6c);
        }
        else {
          Cbin_GetParamN_Ctx(s_LOWRES_PAK_00557900,puVar8 + 0x44,0x1f,0,4,2,local_6c);
        }
        pcVar1 = puVar8 + -0x20;
        Cbin_GetParam_Ctx(s_STARBASE_00532c20,s_SHIP_YARD_DESC_005578f0,pcVar1,0x1f,0,4,1,local_6c);
        if (*pcVar1 != '\0') {
          uVar4 = FUN_0049e0d0(DAT_0056363c,s_OTHER_SHIP_NAMES_00533a5c,pcVar1);
          *(undefined4 *)(puVar8 + 0x20) = uVar4;
        }
        iVar2 = Cbin_CountEntries_Ctx(s_STARBASE_00532c20,s_VAR_CHECK_0054abac,local_6c);
        local_74 = iVar2;
        if (iVar2 != 0) {
          FUN_0048e3d0(&local_80,iVar2 * 100,4,s_STBCFG_CVS_CHECK_005578dc,0xa100);
        }
        if (local_80 == 0) {
          *(undefined4 *)(puVar8 + 0x94) = 0;
        }
        else {
          Cbin_FindSection(s_STARBASE_00532c20,local_6c);
          iVar6 = iVar2;
          iVar9 = local_80;
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            Cbin_FindParam(s_VAR_CHECK_0054abac,iVar9,0x1f,0,4,1,local_6c);
            Cbin_GetParamN_Ctx(s_VAR_CHECK_0054abac,iVar9 + 0x20,0x1f,0,4,2,local_6c);
            Cbin_GetParamN_Ctx(s_VAR_CHECK_0054abac,iVar9 + 0x40,0x1f,0,4,3,local_6c);
            DAT_005a41e0._0_1_ = 0;
            Cbin_GetParamN_Ctx(s_VAR_CHECK_0054abac,&DAT_005a41e0,0x7f,0,4,4,local_6c);
            Job_StoreVarValue(iVar9,&DAT_005a41e0);
            iVar9 = iVar9 + 100;
            iVar6 = local_74;
            puVar10 = local_78;
          }
          uVar4 = FUN_00469d80(local_80,iVar6);
          *(undefined4 *)(puVar8 + 0x94) = uVar4;
          FUN_0049c530(local_80);
          local_80 = 0;
        }
        FUN_0049adb0(local_6c);
        uVar7 = local_70;
      }
      iVar2 = FUN_004851c0(puVar8 + -0x60);
      *(int *)(puVar8 + 0x90) = iVar2;
      if (iVar2 != 0) {
        *(undefined4 *)(puVar8 + 0x94) = 1;
      }
      puVar10 = puVar10 + 2;
      puVar8 = puVar8 + 0x100;
      local_7c = local_7c + 1;
    }
  }
  return;
}

