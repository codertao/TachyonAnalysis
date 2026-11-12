
/* sweep: item.cfg ITEM_DEF */

void StoreItem_LoadDefs(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_6c [108];
  
  if (g_PlayerVarStore != 0) {
    DAT_005a6148 = g_PlayerVarStore;
    Systems_Reload(0);
    DAT_005a6148 = 0;
  }
  iVar1 = Cbin_LoadFile(param_1,local_6c);
  if (iVar1 != 0) {
    DAT_0058973c = Cbin_CountEntries_Ctx(s_ITEMS_0054ae3c,s_ITEM_DEF_0054aea8,local_6c);
    if ((DAT_0058973c == 0) ||
       (Mem_AllocZeroTagged(&DAT_00589740,DAT_0058973c * 0x5c,4,s_STARBASE_ITEM_DEF_0054ae94,0xa100)
       , iVar3 = DAT_00589740, iVar1 = DAT_0058973c, DAT_00589740 == 0)) {
      DAT_0058973c = 0;
    }
    else {
      Cbin_FindSection(s_ITEMS_0054ae3c,local_6c);
      if (iVar1 != 0) {
        iVar2 = iVar3 + 0x40;
        do {
          Cbin_FindParam(s_ITEM_DEF_0054aea8,iVar3,0x1f,0,4,1,local_6c);
          Cbin_GetParamN_Ctx(s_ITEM_DEF_0054aea8,iVar2 + -0x20,0x1f,0,4,2,local_6c);
          Cbin_GetParamN_Ctx(s_ITEM_DEF_0054aea8,iVar2,0xf,0,4,3,local_6c);
          Cbin_GetParamN_Ctx(s_ITEM_DEF_0054aea8,0,0,iVar2 + 0x10,1,4,local_6c);
          StoreItem_Load(iVar3,param_2);
          iVar3 = iVar3 + 0x5c;
          iVar2 = iVar2 + 0x5c;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    Cbin_Free(local_6c);
  }
  return;
}

