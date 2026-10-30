
void FUN_00424d00(int param_1)

{
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x3c);
  DAT_005b1edc = 0;
  DAT_005b1ee8 = 0;
  DAT_005aeebc = 0;
  DAT_005b1ee0 = 0x400;
  Entity_ApplyTurnControl
            (DAT_005b1eec,DAT_005b1ecc,&DAT_005b1ed0,DAT_005b1f0c + 0x84,0x400,&DAT_005b20e0,
             DAT_005b2154 & 0x400,DAT_005b9020);
  Entity_ThrustToWorld(param_1,DAT_005b1ed0,DAT_005b1f0c + 0x84,&DAT_005b1ecc);
  FUN_004248e0(param_1);
  FUN_004249c0(param_1);
  FUN_00424970();
  return;
}

