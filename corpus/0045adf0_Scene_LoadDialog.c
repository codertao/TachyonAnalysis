
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Scene_LoadDialog(int param_1)

{
  int iVar1;
  uint uVar2;
  float local_c;
  longlong local_8;
  
  iVar1 = Cbin_CountEntries(s_DIALOG_005492fc,&DAT_00549304);
  *(int *)(param_1 + 0x74) = iVar1;
  if (iVar1 != 0) {
    Mem_AllocZeroTagged((int *)(param_1 + 0x78),iVar1 * 0x14,4,s_SCENE_WAV_ARRAY_005492ec,0xcccc);
    Cbin_SelectGroup(s_DIALOG_005492fc);
    uVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x78);
    if (*(int *)(param_1 + 0x74) != 0) {
      do {
        Cbin_FindParam_Global(&DAT_00549304,iVar1,0x10,0,4,1);
        Cbin_GetParamN(&DAT_00549304,0,0,&local_c,2,2);
        uVar2 = uVar2 + 1;
        local_8 = (longlong)ROUND(local_c * _DAT_0052e548);
        *(undefined4 *)(iVar1 + 0x10) = (undefined4)local_8;
        iVar1 = iVar1 + 0x14;
      } while (uVar2 < *(uint *)(param_1 + 0x74));
    }
  }
  return;
}

