
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Scene_LoadTextEvents(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int local_58;
  uint local_54;
  uint local_50;
  float local_4c;
  longlong local_48;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  iVar1 = Cbin_CountEntries(&DAT_00536860,&DAT_00536860);
  *(int *)(param_1 + 0x98) = iVar1;
  if (iVar1 != 0) {
    Mem_AllocZeroTagged((undefined4 *)(param_1 + 0x9c),iVar1 * 0x3c,4,s_SCENE_TEXT_EVENTS_005491b4,
                        0xcccc);
    Cbin_SelectGroup(&DAT_00536860);
    puVar3 = *(undefined4 **)(param_1 + 0x9c);
    while( true ) {
      iVar1 = Cbin_FindParam_Global(&DAT_00536860,local_40,0x20,0,4,1);
      if (iVar1 == 0) break;
      Cbin_GetParamN(&DAT_00536860,local_20,0x20,0,4,2);
      uVar2 = Rtxt_Lookup(DAT_005a614c,local_40,local_20);
      puVar3[0xe] = uVar2;
      Cbin_GetParamN(&DAT_00536860,local_40,0x20,0,4,3);
      uVar2 = Scene_FindFont(param_1,local_40);
      puVar3[0xb] = uVar2;
      Cbin_GetParamN(&DAT_00536860,local_40,0x20,0,4,4);
      uVar2 = Scene_FindTextEvent(param_1,local_40);
      *puVar3 = uVar2;
      Cbin_GetParamN(&DAT_00536860,0,0,&local_58,1,5);
      Cbin_GetParamN(&DAT_00536860,0,0,&local_54,1,6);
      Cbin_GetParamN(&DAT_00536860,0,0,&local_50,1,7);
      puVar3[0xc] = (local_58 << 8 | local_54) << 8 | local_50;
      Cbin_GetParamN(&DAT_00536860,0,0,&local_4c,2,8);
      local_48 = (longlong)ROUND(local_4c * _DAT_0052e548);
      puVar3[9] = (undefined4)local_48;
      puVar3 = puVar3 + 0xf;
    }
  }
  return;
}

