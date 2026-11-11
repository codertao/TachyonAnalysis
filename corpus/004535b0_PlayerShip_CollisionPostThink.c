
/* client player +0x6c: 6 segment casts from last pos (+0xd4) to nose (+radius+0x2000) / tail / +-x
   / +-y (radius/4) vs client entity list 0x5b31d4; hit -> PlayerShip_OnCollision */

undefined4 PlayerShip_CollisionPostThink(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  vec3 vStack_3c;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_24 [12];
  float afStack_18 [6];
  
  vStack_3c.x = 0;
  vStack_3c.y = 0;
  if ((DAT_005b39ec == 0) && (DAT_005b3344 == 0)) {
    piVar1 = (int *)(param_1 + 0x34);
    piVar2 = (int *)(param_1 + 0xd4);
    *piVar2 = *piVar1;
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x3c);
    vStack_3c.z = *(int *)(*(int *)(DAT_005b1f0c + 0x290) + 0x30) + 0x2000;
    call_Math_SinCos3(afStack_18,*(int *)(param_1 + 0x4c),*(int *)(param_1 + 0x50),
                      *(int *)(param_1 + 0x54));
    call_Rot_SetSinCos(afStack_18);
    some_rotate_by_global(&vStack_3c,&vStack_3c);
    iStack_30 = *piVar1 + vStack_3c.x;
    iStack_2c = *(int *)(param_1 + 0x38) + vStack_3c.y;
    iStack_28 = *(int *)(param_1 + 0x3c) + vStack_3c.z;
    iVar3 = Coll_SegmentCast(&iStack_30,piVar2,auStack_24,&DAT_005b31d4,0,0,0x10000,0);
    if (iVar3 == 0) {
      vStack_3c.x = 0;
      vStack_3c.y = 0;
      vStack_3c.z = -(*(int *)(*(int *)(DAT_005b1f0c + 0x290) + 0x30) >> 2);
      call_Rot_SetSinCos(afStack_18);
      some_rotate_by_global(&vStack_3c,&vStack_3c);
      iStack_30 = *piVar1 + vStack_3c.x;
      iStack_2c = *(int *)(param_1 + 0x38) + vStack_3c.y;
      iStack_28 = *(int *)(param_1 + 0x3c) + vStack_3c.z;
      iVar3 = Coll_SegmentCast(&iStack_30,piVar2,auStack_24,&DAT_005b31d4,0,0,0x10000,0);
      if (iVar3 == 0) {
        vStack_3c.x = -(*(int *)(*(int *)(DAT_005b1f0c + 0x290) + 0x30) >> 2);
        vStack_3c.y = 0;
        vStack_3c.z = 0;
        call_Rot_SetSinCos(afStack_18);
        some_rotate_by_global(&vStack_3c,&vStack_3c);
        iStack_30 = *piVar1 + vStack_3c.x;
        iStack_2c = *(int *)(param_1 + 0x38) + vStack_3c.y;
        iStack_28 = *(int *)(param_1 + 0x3c) + vStack_3c.z;
        iVar3 = Coll_SegmentCast(&iStack_30,piVar2,auStack_24,&DAT_005b31d4,0,0,0x10000,0);
        if (iVar3 == 0) {
          vStack_3c.x = 0;
          vStack_3c.y = *(int *)(*(int *)(DAT_005b1f0c + 0x290) + 0x30) >> 2;
          vStack_3c.z = 0;
          call_Rot_SetSinCos(afStack_18);
          some_rotate_by_global(&vStack_3c,&vStack_3c);
          iStack_30 = *piVar1 + vStack_3c.x;
          iStack_2c = *(int *)(param_1 + 0x38) + vStack_3c.y;
          iStack_28 = *(int *)(param_1 + 0x3c) + vStack_3c.z;
          iVar3 = Coll_SegmentCast(&iStack_30,piVar2,auStack_24,&DAT_005b31d4,0,0,0x10000,0);
          if (iVar3 == 0) {
            vStack_3c.x = 0;
            vStack_3c.y = -(*(int *)(*(int *)(DAT_005b1f0c + 0x290) + 0x30) >> 2);
            vStack_3c.z = 0;
            call_Rot_SetSinCos(afStack_18);
            some_rotate_by_global(&vStack_3c,&vStack_3c);
            iStack_30 = *piVar1 + vStack_3c.x;
            iStack_2c = *(int *)(param_1 + 0x38) + vStack_3c.y;
            iStack_28 = *(int *)(param_1 + 0x3c) + vStack_3c.z;
            iVar3 = Coll_SegmentCast(&iStack_30,piVar2,auStack_24,&DAT_005b31d4,0,0,0x10000,0);
            if (iVar3 == 0) {
              vStack_3c.x = *(uint *)(*(int *)(DAT_005b1f0c + 0x290) + 0x30) >> 2;
              vStack_3c.y = 0;
              vStack_3c.z = 0;
              call_Rot_SetSinCos(afStack_18);
              some_rotate_by_global(&vStack_3c,&vStack_3c);
              iStack_30 = *piVar1 + vStack_3c.x;
              iStack_2c = *(int *)(param_1 + 0x38) + vStack_3c.y;
              iStack_28 = *(int *)(param_1 + 0x3c) + vStack_3c.z;
              iVar3 = Coll_SegmentCast(&iStack_30,piVar2,auStack_24,&DAT_005b31d4,0,0,0x10000,0);
              if (iVar3 == 0) {
                return 0;
              }
              PlayerShip_OnCollision(param_1,iVar3);
              return 0;
            }
          }
        }
      }
    }
    PlayerShip_OnCollision(param_1,iVar3);
    *piVar2 = *piVar1;
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x3c);
    DAT_005b3340 = 0;
    return 1;
  }
  return 0;
}

