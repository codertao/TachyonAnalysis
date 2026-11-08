
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x2004: ammo check, stage, Proj_SpawnFromClientMissile (target = id, or player's target if lock
   flag) */

void TachSrv_OnFireGuided(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(DAT_0058b068 + 0x164 + (uint)*(byte *)((int)param_1 + 0x23) * 0xc);
  if (*piVar1 != 0) {
    if (*(int *)(*piVar1 + 0x50) != 0) {
      if (piVar1[2] == 0) {
        return;
      }
      piVar1[2] = piVar1[2] + -1;
    }
    _DAT_00565424 = *param_1;
    _DAT_00565428 = param_1[1];
    _DAT_0056542c = param_1[2];
    _DAT_0056543c = (uint)*(ushort *)(param_1 + 3) << 0x10;
    _DAT_00565440 = (uint)*(ushort *)((int)param_1 + 0xe) << 0x10;
    DAT_00565458 = 0x10000;
    _DAT_00565444 = (uint)*(ushort *)(param_1 + 4) << 0x10;
    FUN_0048e930((int)param_1 + 0x12,&DAT_00565430);
    DAT_0056544c = (uint)*(byte *)(param_1 + 8);
    DAT_00565448 = *(int *)(DAT_0058b068 + 0x11c) - param_1[6];
    DAT_00565420 = *(undefined4 *)(DAT_0058b068 + 200);
    if (param_1[7] == 0) {
      uVar2 = *(uint *)(DAT_0058b064 + 0x90);
    }
    else {
      uVar2 = FUN_0045d680(param_1[7],*(undefined4 *)(*(int *)(DAT_0058b068 + 200) + 100));
    }
    DAT_00565450 = -(uint)(*(char *)((int)param_1 + 0x22) != '\0') & uVar2;
    Proj_SpawnFromClientMissile();
    piVar1 = (int *)(*(int *)(DAT_0058b068 + 200) + 0xf0);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

