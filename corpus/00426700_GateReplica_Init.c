
/* sweep */

void GateReplica_Init(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  
  *(code **)(param_1 + 0x80) = Replica_ReportHit;
  *(code **)(param_1 + 0x70) = Gate_Render;
  *(code **)(param_1 + 0x5c) = Gate_PreRender;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0x13;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar1 = *(ushort *)(param_3 + 10);
  *(code **)(param_1 + 0x68) = GateReplica_Think;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(int *)(param_1 + 0x60) = param_1;
  *(uint *)(param_1 + 0xe4) = (uint)uVar1;
  Model_SelectState((undefined4 *)(param_1 + 0x18),0);
  Quad_PushProjectile(param_1,*(int *)(param_1 + 100) + 0x14);
  if (*(int *)(param_1 + 0xe8) == DAT_005b7e40) {
    DAT_005b7e44 = param_1;
  }
  if (*(int *)(param_1 + 0xe8) == DAT_005b9040) {
    DAT_005b9044 = param_1;
  }
  Ent_AttachSound3D(param_1,*(undefined4 *)(param_2 + 0x10c),*(undefined4 *)(param_2 + 0x118),0,
                    *(undefined4 *)(param_2 + 0x110),0xff,*(undefined4 *)(param_2 + 0x114));
  Gate_SpawnParts(param_1,param_2,*(undefined2 *)(param_3 + 6),param_3 + 0xc,
                  (int)*(short *)(param_3 + 8),*(undefined2 *)(param_3 + 10));
  if (*(int *)(*(int *)(param_1 + 0xd8) + 0xe8) != 0) {
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x160);
    return;
  }
  DAT_005b39f0 = param_1;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x164);
  return;
}

