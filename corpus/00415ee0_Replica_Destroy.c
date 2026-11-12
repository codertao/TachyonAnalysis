
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Replica_Destroy(int param_1,int param_2)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0xc0) & 0x20) != 0) {
    ThreatList_Remove(param_1);
  }
  if (*(int *)(param_1 + 200) != 0) {
    Snd3D_Release(*(int *)(param_1 + 200));
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 0xc2) == '\x02') {
    _DAT_005b3310 = _DAT_005b3310 + -1;
  }
  if ((*(code **)(param_1 + 0x84) != (code *)0x0) && (param_2 != 0)) {
    (**(code **)(param_1 + 0x84))(param_1);
  }
  if (((*(int *)(param_1 + 0x8c) != 0) && (param_2 != 0)) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x38), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1,0x17,0);
  }
  Ent_ClearWeaponTargets(param_1,&DAT_005b31c0);
  Cli_ClearTargetRefs(*(undefined4 *)(param_1 + 0xe8));
  Ent_RemoveFromTargets(param_1);
  Quad_UnlinkDynamicList(param_1,*(int *)(param_1 + 100) + 0x14);
  Ent_UnlinkFromMaps(param_1,*(int *)(param_1 + 100) + 0x14);
  Dcb_Free(param_1);
  return;
}

