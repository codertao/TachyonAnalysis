
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483150(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float local_78;
  longlong local_74;
  undefined1 local_6c [108];
  
  uVar1 = Spx_ResolveDesName(param_1);
  str_sprintf(&DAT_005a41e0,&DAT_00536768,uVar1);
  iVar2 = Cbin_LoadFile(&DAT_005a41e0,local_6c);
  if (iVar2 != 0) {
    FUN_00482f80();
    iVar2 = Cbin_FindSection(s_STARBASE_00532c20,local_6c);
    if (iVar2 != 0) {
      iVar2 = FUN_00482fe0();
      while ((iVar2 != 0 &&
             (iVar3 = Cbin_FindParam(s_CALLOUT_0055786c,iVar2,0x3f,0,4,1,local_6c), iVar3 != 0))) {
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,iVar2 + 0x40,0x3f,0,4,2,local_6c);
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,0,0,iVar2 + 0x100,1,3,local_6c);
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,0,0,iVar2 + 0x104,1,4,local_6c);
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,0,0,iVar2 + 0x108,1,5,local_6c);
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,0,0,iVar2 + 0x10c,1,6,local_6c);
        *(undefined4 *)(iVar2 + 0x114) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x110) = 0xffffffff;
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,0,0,(undefined4 *)(iVar2 + 0x110),1,7,local_6c);
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,0,0,(undefined4 *)(iVar2 + 0x114),1,8,local_6c);
        *(undefined4 *)(iVar2 + 0x11c) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x118) = 0xffffffff;
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,0,0,(undefined4 *)(iVar2 + 0x118),1,9,local_6c);
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,0,0,(undefined4 *)(iVar2 + 0x11c),1,10,local_6c);
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,iVar2 + 0x120,0x3f,0,4,0xb,local_6c);
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,0,0,&local_78,2,0xc,local_6c);
        local_74 = (longlong)ROUND(local_78 * _DAT_0052e548);
        *(undefined4 *)(iVar2 + 0x160) = (undefined4)local_74;
        Cbin_GetParamN_Ctx(s_CALLOUT_0055786c,0,0,(undefined4 *)(iVar2 + 0x164),1,0xd,local_6c);
        iVar3 = FUN_0043bf10(&GLBL_UI_ELEM_LIST,iVar2);
        if (iVar3 == 0) {
          str_sprintf(iVar2 + 0x80,iVar2);
        }
        else {
          str_sprintf(iVar2 + 0x80,*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar2 + 0x164));
        }
        iVar2 = FUN_00482fe0();
      }
      FUN_0049adb0(local_6c);
    }
  }
  return;
}

