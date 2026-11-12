
/* sweep: guess */

void Shipyard_AimCameraAtBay(int param_1)

{
  undefined4 *puVar1;
  
  Vec_DirAngles(&DAT_0056e3ac,DAT_0056e3a8 + 0x134,&DAT_0056e3c4);
  puVar1 = (undefined4 *)Pak_GetAttachPoint(DAT_0056e38c,param_1 + 0x1b);
  DAT_0056e3b8 = *puVar1;
  DAT_0056e3bc = puVar1[1];
  DAT_0056e3c0 = puVar1[2];
  Shipyard_OnShipChanged();
  return;
}

