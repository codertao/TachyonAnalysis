
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* snapshot record -> replica DCB; model = g_ObjModelPool[rec+4] */

int TachCli_SpawnReplica(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((*(byte *)((int)param_1 + 5) & 8) != 0) &&
     (iVar2 = TachCli_SpawnFromDesc(param_1), iVar2 != 0)) {
    return iVar2;
  }
  iVar2 = DcbPool_Alloc(&DAT_005b3288,4,&DAT_005b31c0);
  if (iVar2 == 0) {
    return 0;
  }
  *(int *)(iVar2 + 0x104) = glbl_maybe_camera.x;
  glbl_maybe_camera.x = glbl_maybe_camera.x + 1;
  *(undefined2 *)(iVar2 + 0x74) = 1;
  iVar3 = f16_Decode(*(undefined2 *)(param_1 + 2));
  *(int *)(iVar2 + 0x108) = iVar3 + DAT_005b39c0;
  iVar3 = f16_Decode(*(undefined2 *)((int)param_1 + 10));
  *(int *)(iVar2 + 0x10c) = iVar3 + _DAT_005b39c4;
  iVar3 = f16_Decode(*(undefined2 *)(param_1 + 3));
  *(int *)(iVar2 + 0x110) = iVar3 + _DAT_005b39c8;
  *(uint *)(iVar2 + 0xac) = (uint)*(byte *)(param_1 + 5) << 0x11;
  *(uint *)(iVar2 + 0xb0) = (uint)*(byte *)((int)param_1 + 0x15) << 0x11;
  bVar1 = *(byte *)((int)param_1 + 0x16);
  *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x108);
  *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar2 + 0x10c);
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar2 + 0xac);
  *(uint *)(iVar2 + 0xb4) = (uint)bVar1 << 0x11;
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar2 + 0x110);
  *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar2 + 0xb4);
  *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar2 + 0xb0);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined1 **)(iVar2 + 0x70) = &LAB_00415350;
  *(int *)(iVar2 + 0x60) = iVar2;
  *(undefined4 *)(iVar2 + 0x58) = (&DAT_005a7540)[(uint)*(byte *)(param_1 + 1) * 10];
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0x10000;
  if ((*(byte *)((int)param_1 + 5) & 2) == 0) {
    *(code **)(iVar2 + 0x80) = ShipReplica_ReportHit;
    *(code **)(iVar2 + 0x68) = TachCli_ReplicaThink;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0x10;
  }
  else {
    FUN_00498240(iVar2,(int)*(char *)((int)param_1 + 6));
    *(code **)(iVar2 + 0x80) = Replica_ReportHitHull;
    FUN_0045cff0(iVar2,&DAT_005b31d4);
  }
  if ((*(byte *)((int)param_1 + 5) & 0x20) != 0) {
    FUN_00416980(iVar2);
  }
  if ((*(byte *)((int)param_1 + 5) & 1) != 0) {
    FUN_0048b050(iVar2);
  }
  uVar4 = *param_1;
  *(undefined4 *)(iVar2 + 0xe8) = uVar4;
  if ((g_FlightStateFlags & 4) == 0) {
    *(undefined4 *)(iVar2 + 0xf4) = 0;
  }
  else {
    uVar4 = FUN_0045d680(uVar4,*(undefined4 *)(DAT_0058b064 + 100));
    *(undefined4 *)(iVar2 + 0xf4) = uVar4;
  }
  if ((*(byte *)((int)param_1 + 5) & 4) != 0) {
    *(undefined1 *)(iVar2 + 0xf0) = 0;
    FUN_00415af0(*(undefined4 *)(iVar2 + 0xe8));
  }
  if (*(char *)((int)param_1 + 7) == '\x02') {
    _DAT_005b3310 = _DAT_005b3310 + 1;
  }
  if ((*(byte *)((int)param_1 + 5) & 8) == 0) {
    *(undefined4 *)(iVar2 + 0xec) = 1;
    return iVar2;
  }
  *(undefined4 *)(iVar2 + 0xec) = 0xffffffff;
  *(uint *)(iVar2 + 0x1c) = (uint)*(ushort *)(param_1 + 6) << 8;
  TachCli_SetEntityDesc(iVar2,(int)*(short *)((int)param_1 + 0x1a),0);
  return iVar2;
}

