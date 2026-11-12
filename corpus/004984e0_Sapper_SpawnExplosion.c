
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Sapper_SpawnExplosion(int param_1)

{
  _DAT_00565424 = *(undefined4 *)(param_1 + 0x34);
  _DAT_00565428 = *(undefined4 *)(param_1 + 0x38);
  _DAT_0056542c = *(undefined4 *)(param_1 + 0x3c);
  _DAT_0056543c = 0;
  _DAT_00565440 = 0;
  _DAT_00565444 = 0;
  clr_bytes(&DAT_00565430,0xc);
  DAT_0056544c = 0x21;
  DAT_00565448 = 0;
  DAT_00565420 = *(undefined4 *)(param_1 + 200);
  DAT_00565450 = 0;
  Proj_SpawnFromClientMissile();
  return;
}

