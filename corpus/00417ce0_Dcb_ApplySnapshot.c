
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* apply a server->client DCB snapshot packet: param[0]=record count; reset KEPT/NEW counters;
   iterate Dcb_ApplyRecord */

void Dcb_ApplySnapshot(ushort *param_1)

{
  ushort *puVar1;
  uint uVar2;
  
  DAT_005b3a1c = 0;
  DAT_005b9060 = 0;
  DAT_005b909c = 0;
  if (DAT_005b9054 == 0) {
    DAT_005b3a18 = (uint)param_1[1];
    DAT_005b3a20 = 0;
    FUN_00445720();
    DAT_005b39c0 = *(undefined4 *)(param_1 + 3);
    _DAT_005b39c4 = *(undefined4 *)(param_1 + 5);
    _DAT_005b39c8 = *(undefined4 *)(param_1 + 7);
    uVar2 = 0;
    puVar1 = param_1 + 9;
    if (*param_1 != 0) {
      do {
        puVar1 = (ushort *)Dcb_ApplyRecord(puVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    FUN_00417830();
    if (param_1[1] != 0) {
      DAT_005b3a14 = (uint)param_1[1];
      DAT_005b3a1c = 1;
      DAT_005b3a20 = (uint)param_1[2];
      FUN_004163e0(1,DAT_005b3a14,DAT_005b3a20);
      return;
    }
    if (DAT_005b3a1c != 0) {
      FUN_004163e0(1,DAT_005b3a14,DAT_005b3a20);
    }
  }
  return;
}

