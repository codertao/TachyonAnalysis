
/* sweep: guess */

void Player_StartDeathCam2(int param_1)

{
  Loadout_SetOpen(0,0);
  Snd_PlayAtEnt(1,4,0,param_1,0x10000);
  Explosion_SpawnByType(3,0,param_1 + 0x34,0x10000,0);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  *(undefined1 **)(param_1 + 0x68) = &LAB_004555f0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  Camera_SetModeById(1);
  Camera_SetFromEntity(0x3e8000,0x400000,0x80000,0);
  Scoreboard_SetMode(1);
  *(undefined4 *)(param_1 + 0xf8) = 0xfa;
  SpaceDust_SetEnabled(0);
  Input_PushBindingSet(&PTR_DAT_0053e978);
  return;
}

