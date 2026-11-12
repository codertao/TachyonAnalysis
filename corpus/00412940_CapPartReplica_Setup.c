
/* sweep */

void CapPartReplica_Setup(int param_1,int param_2,int param_3)

{
  *(uint *)(param_1 + 0xe0) =
       (uint)*(ushort *)(param_3 + 0x16) * 0x80 + *(int *)(*(int *)(param_2 + 0x154) + 4);
  *(undefined2 *)(param_1 + 0x114) = *(undefined2 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x58) = **(undefined4 **)(param_1 + 0xe0);
  *(code **)(param_1 + 0x80) = Replica_ReportHitShielded;
  *(undefined1 **)(param_1 + 0x84) = &LAB_00412920;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0xd;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(code **)(param_1 + 0x68) = CapShipReplica_Think;
  *(code **)(param_1 + 0x70) = CapPart_Render;
  Quad_PushProjectile(param_1,*(int *)(param_1 + 100) + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0xc);
  Model_SelectState(param_1 + 0x18,0);
  *(undefined2 *)(param_1 + 0x11c) = *(undefined2 *)(param_3 + 0x12);
  *(short *)(param_1 + 0x11e) = (short)*(char *)(param_3 + 0x14);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  Ent_StartLoopSound(param_1,*(undefined4 *)(param_1 + 0xe0));
  if ((*(byte *)(param_3 + 8) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xf1) = 1;
  }
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  return;
}

