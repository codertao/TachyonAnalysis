
/* sweep: "DCB %x destroyed", explosion, kill credit */

void Sped_Destroy(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  str_sprintf(local_80,s_DCB__x_destroyed_00532624,param_1);
  DebugLog_Write(local_80);
  Sped_SendDeathExplosion
            (param_1 + 0x34,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 100));
  if (*(int *)(param_1 + 0x90) != 0) {
    psVar1 = (short *)(*(int *)(param_1 + 0x90) + 200);
    *psVar1 = *psVar1 + -1;
  }
  if (DAT_005653f4 != 0) {
    if (*(short *)(DAT_005653f4 + 0x76) == 1) {
      iVar2 = Ent_IsHostileToPlayer(param_1);
      if (iVar2 == 0) {
        *(int *)(DAT_005653f4 + 0xe4) = *(int *)(DAT_005653f4 + 0xe4) + 1;
      }
      else {
        *(int *)(DAT_005653f4 + 0xe0) = *(int *)(DAT_005653f4 + 0xe0) + 1;
        Chatter_PlayRandom(1);
      }
    }
    else if ((*(short *)(DAT_005653f4 + 0x76) == 2) &&
            (*(char *)(DAT_005653f4 + 0xc2) != *(char *)(param_1 + 0xc2))) {
      Ai_ChatterMadeKill(DAT_005653f4);
    }
  }
  Sped_DeathFormationFixup(param_1,*(undefined4 *)(param_1 + 0xd8));
  iVar2 = Sped_GetActorRecord(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 100));
  if (iVar2 != 0) {
    Dialog_UnbindActor(iVar2);
  }
  Sped_Unregister(param_1,*(undefined4 *)(param_1 + 0xd8));
  return;
}

