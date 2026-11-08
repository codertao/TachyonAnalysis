
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ba50(char *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  char *_Dest;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int local_78;
  ulonglong local_74;
  undefined1 local_6c [108];
  
  if (param_1 != (char *)0x0) {
    piVar1 = (int *)(param_1 + 0x58);
    FUN_0048e3d0(piVar1,0xd8,4,s_STARBASE_ITEM_0054ae5c,0xa100);
    if (*piVar1 != 0) {
      iVar4 = Cbin_LoadFile(param_1 + 0x40,local_6c);
      if (iVar4 != 0) {
        _Dest = (char *)*piVar1;
        _strncpy(_Dest,param_1,0x1f);
        iVar4 = Cbin_CountIndexed_Ctx(s_BLOCK_d_00540018,local_6c);
        piVar1 = (int *)(_Dest + 0xa4);
        *(int *)(_Dest + 0xa0) = iVar4;
        FUN_0048e3d0(piVar1,iVar4 * 0x128,4,s_STARBASE_BLOCK_0054acd0,0xa100);
        *(int *)(_Dest + 0xa8) = *piVar1;
        Cbin_GetField_Ctx(&DAT_00532af4,s_TT_ID_SHORT_0054ac80,_Dest + 0x20,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_FONT_SHORT_0054ac68,_Dest + 0x40,0x1f,0,local_6c);
        puVar2 = (uint *)(_Dest + 0x94);
        Cbin_GetField_Ctx(&DAT_00532af4,s_BUY_BACK_0054ae50,0,0,puVar2,local_6c);
        puVar3 = (uint *)(_Dest + 0x98);
        Cbin_GetField_Ctx(&DAT_00532af4,s_SELLS_FOR_0054ae44,0,0,puVar3,local_6c);
        local_74 = (ulonglong)*puVar2;
        local_74._0_4_ = (uint)(longlong)ROUND((float)local_74 * _DAT_005879bc);
        uVar7 = (uint)local_74;
        local_74 = (ulonglong)*puVar3;
        *puVar2 = uVar7;
        local_74 = (ulonglong)ROUND((float)local_74 * _DAT_005879c0);
        *puVar3 = (uint)local_74;
        iVar4 = FUN_0048f670(s_WEAPON_TYPES_0054763c,_Dest,&local_78);
        if (iVar4 != 0) {
          iVar4 = WeaponDef_Get(local_78 + -1);
          if (iVar4 != 0) {
            uVar5 = FUN_00492b40(iVar4,0);
            *(undefined4 *)(_Dest + 0x9c) = uVar5;
          }
        }
        if (*(int *)(_Dest + 0x9c) == 0) {
          _Dest[0x9c] = '\x01';
          _Dest[0x9d] = '\0';
          _Dest[0x9e] = '\0';
          _Dest[0x9f] = '\0';
        }
        uVar5 = FUN_0049e0d0(DAT_005879b0,s_ITEMS_0054ae3c,_Dest + 0x20);
        *(undefined4 *)(_Dest + 0x60) = uVar5;
        Job_ParseVarDirectives(_Dest + 0x68,local_6c);
        if (GLBL_cheat_related2 == 0) {
          uVar5 = FUN_00469d80(*(undefined4 *)(_Dest + 0x68),*(undefined4 *)(_Dest + 0x6c));
          *(undefined4 *)(_Dest + 0x90) = uVar5;
        }
        else {
          _Dest[0x90] = '\x01';
          _Dest[0x91] = '\0';
          _Dest[0x92] = '\0';
          _Dest[0x93] = '\0';
        }
        iVar4 = *piVar1;
        uVar7 = 0;
        if (*(int *)(_Dest + 0xa0) != 0) {
          do {
            str_sprintf(&DAT_005a41e0,s_BLOCK_d_00540018,uVar7);
            if (param_2 == 0) {
              uVar5 = FUN_004699f0(s_ITEM_PAK_0054ae14);
              uVar5 = FUN_004699f0(s_ITEM_TEXT_0054ae08,uVar5);
            }
            else {
              uVar5 = FUN_004699f0(s_ITEM_PAK_MP_0054ae30);
              uVar5 = FUN_004699f0(s_ITEM_TEXT_MP_0054ae20,uVar5);
            }
            Job_ParseBriefingBlock(iVar4,&DAT_005a41e0,DAT_005879b0,local_6c,&DAT_005882e8,uVar5);
            if (*(undefined4 **)(iVar4 + 0x90) == (undefined4 *)0x0) {
              pcVar6 = s__ITEM_STRING_LOAD_FAILURE_0054adec;
            }
            else {
              pcVar6 = (char *)**(undefined4 **)(iVar4 + 0x90);
            }
            FUN_0046abe0(_Dest + 100,pcVar6);
            iVar4 = iVar4 + 0x128;
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(_Dest + 0xa0));
        }
        Cbin_FindSection(s_MOUNT_0054ade4,local_6c);
        Cbin_FindParam(s_ICON_FILE_0054add8,_Dest + 0xb0,0xf,0,4,1,local_6c);
        Cbin_GetParamN_Ctx(s_ICON_FILE_0054add8,0,0,_Dest + 0xc0,1,2,local_6c);
        Cbin_GetParamN_Ctx(s_ICON_FILE_0054add8,0,0,_Dest + 0xc4,1,3,local_6c);
        Cbin_GetField_Ctx(s_MOUNT_0054ade4,s_PAK_FILE_0054aaa8,_Dest + 200,0xf,0,local_6c);
        FUN_0049adb0(local_6c);
        return;
      }
      OurFreeMem(*piVar1);
      *piVar1 = 0;
    }
  }
  return;
}

