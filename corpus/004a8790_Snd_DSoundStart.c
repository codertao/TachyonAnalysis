
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* create 1 s DirectSound buffer (22050 Hz 16-bit stereo, 0x15888 bytes), clear, Snd_MixerReset,
   prime two Snd_DSoundFill, set vol/freq/pan, Play(LOOPING) */

undefined4 Snd_DSoundStart(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  DAT_005f9d54 = 0x44e8;
  local_8 = 0;
  local_c = 0x44e8;
  local_4 = &local_24;
  uStack_30 = 0;
  puStack_38 = &local_14;
  DAT_005f9d80 = 0x89d;
  _DAT_005f9d68 = 0x2274;
  local_24 = 0x20001;
  local_20 = 0x5622;
  local_1c = 0x15888;
  local_18 = 0x100004;
  local_14 = 0x14;
  local_10 = 0xe8;
  puStack_34 = &DAT_005b9d24;
  piStack_3c = DAT_005f9d64;
  iVar1 = (**(code **)(*DAT_005f9d64 + 0xc))();
  if (iVar1 != 0) {
    DAT_005b9d24 = (int *)0x0;
    return 0;
  }
  puVar4 = (undefined4 *)0x0;
  uVar5 = local_1c;
  (**(code **)(*DAT_005b9d24 + 0x2c))(DAT_005b9d24,0,local_1c,&piStack_3c,&puStack_38,0,0,0);
  puVar3 = puVar4;
  for (uVar2 = (uint)piStack_3c >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = (uint)piStack_3c & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  (**(code **)(*DAT_005b9d24 + 0x4c))(DAT_005b9d24,puVar4,uVar5,0,0);
  _DAT_005f9e14 = 0;
  DAT_005f9d5c = 0;
  Snd_MixerReset();
  Snd_SetStereo(1);
  Snd_DSoundFill();
  Snd_DSoundFill();
  Snd_StartTimer();
  (**(code **)(*DAT_005b9d24 + 0x40))(DAT_005b9d24,0);
  (**(code **)(*DAT_005b9d24 + 0x44))(DAT_005b9d24,0x5622);
  (**(code **)(*DAT_005b9d24 + 0x3c))(DAT_005b9d24,0);
  (**(code **)(*DAT_005b9d24 + 0x30))(DAT_005b9d24,0,0,1);
  return 1;
}

