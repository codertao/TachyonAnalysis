
/* sweep */

undefined4 Powerup_OnPickup(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar1 = Powerup_Apply(param_1,param_2);
    if (iVar1 != 0) {
      SrvSend_Despawn(param_1);
      Ent_UnlinkFromMaps(param_1,*(int *)(param_1 + 100) + 0x14);
      Srv_BroadcastToQuadrant(param_1);
      *(undefined4 *)(param_1 + 0xdc) = 1;
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xe0);
      *(code **)(param_1 + 0x68) = Powerup_Respawn;
      *(undefined1 *)(param_1 + 0xc3) = 1;
    }
  }
  return 0;
}

