
/* +0xd0 = des+0x568 (anim file), +0x5c = Ship_PreRender */

void ShipReplica_Init(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_2 + 0x1b8) != 0) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_2 + 0x1b8);
    Ent_AttachSound3D(param_1,*(undefined4 *)(param_2 + 0x1b8),*(undefined4 *)(param_2 + 0x1cc),2,
                      *(undefined4 *)(param_2 + 0x238),*(undefined4 *)(param_2 + 0x23c),
                      *(undefined4 *)(param_2 + 0x240));
  }
  *(ushort *)(param_1 + 0x76) = (ushort)*(byte *)(param_3 + 6);
  *(undefined2 *)(param_1 + 0x11c) = *(undefined2 *)(param_3 + 0xc);
  *(short *)(param_1 + 0x11e) = (short)*(char *)(param_3 + 0xe);
  ShipReplica_SetFlags(param_1,*(undefined1 *)(param_3 + 7));
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x568);
  *(undefined2 *)(param_1 + 0x114) = *(undefined2 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0xb8) = 0x28000;
  *(undefined4 *)(param_1 + 0x18) = 0x80;
  *(code **)(param_1 + 0x5c) = Ship_PreRender;
  *(code **)(param_1 + 0x70) = ShipReplica_PreRender;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x290);
  *(code **)(param_1 + 0x68) = ShipReplica_Think;
  *(int *)(param_1 + 0x60) = param_1;
  *(undefined1 **)(param_1 + 0x88) = &Ent_OnPlayerCollide;
  Quad_LinkDynamicIfAbsent(param_1,&DAT_005b31d4);
  if (*(char *)(param_3 + 6) == '\x01') {
    *(undefined2 *)(param_1 + 0xf2) = *(undefined2 *)(param_3 + 10);
  }
  if ((g_FlightStateFlags & 4) == 0) {
    *(undefined2 *)(param_1 + 0xce) = 1;
  }
  return;
}

