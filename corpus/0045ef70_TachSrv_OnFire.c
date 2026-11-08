
/* 0x2001: ammo check only, relay 0x1002 to quadrant r4000 except shooter; no server projectile */

void TachSrv_OnFire(int param_1)

{
  int *piVar1;
  int local_c;
  int local_8;
  int local_4;
  
  piVar1 = (int *)(DAT_0058b068 + 0x164 + (uint)*(byte *)(param_1 + 0x14) * 0xc);
  if (*piVar1 != 0) {
    if (*(int *)(*piVar1 + 0x50) != 0) {
      if (piVar1[2] == 0) {
        return;
      }
      piVar1[2] = piVar1[2] + -1;
    }
    local_c = (uint)*(ushort *)(param_1 + 0xc) << 0x10;
    local_8 = (uint)*(ushort *)(param_1 + 0xe) << 0x10;
    local_4 = (uint)*(ushort *)(param_1 + 0x10) << 0x10;
    SrvSend_ProjectileFired
              (param_1,&local_c,*(undefined1 *)(param_1 + 0x16),*(undefined1 *)(param_1 + 0x17),0,3,
               DAT_0058b068,*(undefined4 *)(DAT_0058b064 + 100),*(undefined4 *)(DAT_0058b064 + 0x78)
              );
    *(int *)(*(int *)(DAT_0058b068 + 200) + 0xe8) =
         *(int *)(*(int *)(DAT_0058b068 + 200) + 0xe8) + 1;
  }
  return;
}

