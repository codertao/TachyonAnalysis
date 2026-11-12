
/* sweep */

void CapShip_RemoveAllParts(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  SrvSend_EntityStateOp(8,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),0);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xe0);
    Quad_Unlink(iVar1);
    Quad_UnlinkDynamicList(iVar1,*(int *)(iVar1 + 100) + 0x14);
    Ent_UnlinkFromMaps(iVar1,*(int *)(iVar1 + 100) + 0x14);
    Ent_ClearWeaponTargets(param_1,*(undefined4 *)(param_1 + 100));
    iVar1 = iVar2;
  }
  Quad_Unlink(param_1);
  Srv_NotifyEntityRemoved(param_1);
  Ent_UnlinkFromMaps(param_1,*(int *)(param_1 + 100) + 0x14);
  Ent_ClearWeaponTargets(param_1,*(undefined4 *)(param_1 + 100));
  return;
}

