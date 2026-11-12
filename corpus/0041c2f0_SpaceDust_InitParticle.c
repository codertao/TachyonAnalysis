
/* sweep */

void SpaceDust_InitParticle(int param_1)

{
  *(undefined1 **)(param_1 + 0x68) = &LAB_0041c280;
  *(undefined4 *)(param_1 + 0x58) = DAT_005b27c0;
  *(undefined4 *)(param_1 + 0x18) = 0x290;
  *(undefined4 *)(param_1 + 0x2c) = 0x60;
  *(code **)(param_1 + 0x70) = SpaceDust_Render;
  *(undefined4 *)(param_1 + 0x1c) = 0x4000;
  *(undefined4 *)(param_1 + 0x24) = 0x4000;
  *(undefined4 *)(param_1 + 0x20) = 0x4000;
  SpaceDust_Respawn(param_1);
  return;
}

