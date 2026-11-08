
/* 3D positional engine sound: distance to player DCB (0x58b064) -> play at attenuated volume */

void Dcb_UpdateEngineAudio(int param_1,int param_2)

{
  uint uVar1;
  
  if ((DAT_0058b064 != 0) && ((*(uint *)(param_2 + 0x24) & 0x200) != 0)) {
    uVar1 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(DAT_0058b064 + 0x34));
    Mission_PostProximity
              (uVar1 >> 0xd,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_2 + 0x20));
  }
  return;
}

