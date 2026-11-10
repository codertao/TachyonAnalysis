
/* SHIP class +0x1c: remap ids, then construct if !MP-client, spawn var test (+0x3c) holds and
   !(flags & 8) */

void Ship_SpawnAtLoad(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  Spx_RemapPlacementNames(param_1,param_3);
  if (DAT_005a6610 == 0) {
    iVar1 = Spx_TestVar(param_1 + 0x3c);
    if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x24) & 8) == 0)) {
      Sped_ConstructEntity(param_1,param_2,param_3,0,0);
    }
  }
  return;
}

