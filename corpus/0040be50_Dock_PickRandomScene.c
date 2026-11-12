
/* pick random DOCK_SCENE/UNDOCK_SCENE (.sen) name into struct */

void Dock_PickRandomScene(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = Cbin_CountEntries(&DAT_00532af4,s_DOCK_SCENE_00532ebc);
  if (uVar1 != 0) {
    uVar2 = global_bad_shift_rng();
    iVar3 = uVar2 % uVar1 + 1;
    Cbin_SelectGroup(&DAT_00532af4);
    if (iVar3 != 0) {
      do {
        Cbin_FindParam_Global(s_DOCK_SCENE_00532ebc,param_1 + 0x9c,0x10,0,4,1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  uVar1 = Cbin_CountEntries(&DAT_00532af4,s_UNDOCK_SCENE_00532eac);
  if (uVar1 != 0) {
    uVar2 = global_bad_shift_rng();
    iVar3 = uVar2 % uVar1 + 1;
    Cbin_SelectGroup(&DAT_00532af4);
    if (iVar3 != 0) {
      do {
        Cbin_FindParam_Global(s_UNDOCK_SCENE_00532eac,param_1 + 0xac,0x10,0,4,1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

