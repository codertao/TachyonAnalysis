
/* spawn projectile/bolt DCB (type 0xd) from client pool 0x5b3288; set methods
   +0x68/+0x70/+0x80/+0x84; link into g_DcbActiveList */

void Dcb_SpawnProjectile(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DcbPool_Alloc(&DAT_005b3288,4,&DAT_005b31c0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xdc) = *(undefined4 *)(param_1 + 0xe8);
    *(int *)(iVar2 + 0xd4) = param_1;
    *(undefined4 **)(iVar2 + 0xe0) = param_2;
    *(undefined4 *)(iVar2 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xd8) = iVar2;
    param_2[0x1f] = iVar2;
    *(undefined4 *)(iVar2 + 0x8c) = param_4;
    *(undefined1 *)(iVar2 + 0xc2) = *(undefined1 *)(param_1 + 0xc2);
    *(uint *)(iVar2 + 0x104) = glbl_maybe_camera.x & 0xf;
    glbl_maybe_camera.x = glbl_maybe_camera.x + 1;
    *(undefined2 *)(iVar2 + 0x74) = 1;
    *(undefined4 *)(iVar2 + 0x58) = *param_2;
    puVar1 = (uint *)(iVar2 + 0x18);
    *(undefined1 *)(iVar2 + 0x7e) = *(undefined1 *)(param_2 + 1);
    *puVar1 = 0x10;
    *(int *)(iVar2 + 0x60) = iVar2;
    *(undefined4 *)(iVar2 + 0xc4) = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = param_2[3];
    Model_SelectState(puVar1,0);
    *(code **)(iVar2 + 0x80) = Replica_ReportHitShielded;
    *(undefined1 **)(iVar2 + 0x84) = &LAB_00412920;
    *(undefined2 *)(iVar2 + 0x76) = 0xd;
    *(undefined2 *)(iVar2 + 0x74) = 0;
    FUN_0045cbd0(iVar2,*(int *)(iVar2 + 100) + 0x14);
    if ((param_2[0xd] & 6) == 0) {
      if ((param_2[0xd] & 0x118) == 0) {
        *(undefined4 *)(iVar2 + 0xb8) = 0;
        *(code **)(iVar2 + 0x68) = FUN_00412840;
      }
      else {
        *(undefined4 *)(iVar2 + 0xb8) = 0x20000;
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0xb8) = 0x20000;
      *(code **)(iVar2 + 0x68) = FUN_00445720;
      *(undefined1 **)(iVar2 + 0x5c) = &LAB_00411f10;
    }
    if ((*(byte *)(param_2 + 0xd) & 0x20) == 0) {
      *(undefined2 *)(iVar2 + 0x74) = 0;
      if ((param_2[0xd] & 0x91e) == 0) {
        *(code **)(iVar2 + 0x70) = FUN_00411dc0;
      }
      else {
        *(undefined1 **)(iVar2 + 0x70) = &LAB_00412a30;
      }
    }
    else {
      *puVar1 = *puVar1 | 0x80;
      *(undefined1 **)(iVar2 + 0x70) = &LAB_00411e00;
      *(undefined2 *)(iVar2 + 0x74) = 2;
    }
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0xe8) = param_3;
    if ((g_FlightStateFlags & 4) == 0) {
      *(undefined4 *)(iVar2 + 0xf4) = 0;
    }
    else {
      uVar3 = FUN_0045d680(param_3,g_SrvCurShip->quadrant);
      *(undefined4 *)(iVar2 + 0xf4) = uVar3;
    }
    *(undefined1 *)(iVar2 + 0xf0) = 1;
    *(undefined4 *)(iVar2 + 0xec) = 0xffffffff;
    FUN_0040ab80(iVar2,param_2);
    FUN_0041b890(iVar2,&DAT_005b3280);
  }
  return;
}

