
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* target box: hull/shield %, RANGE = Vec3_DistanceTo x 2^-23 ('%s: %2.2f'); see notes/units.md */

void Hud_DrawTargetInfo(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_80 [128];
  
  if (((param_2 != 0) && (*(int *)(param_2 + 0x8c) != 0)) && (DAT_005b39f4 != -1)) {
    if (((byte)DAT_005b2154 & 2) != 0) {
      uVar2 = FUN_0042af30(DAT_005b39f4);
      uVar3 = FUN_0048e800(DAT_005a6140,*(undefined4 *)(param_1 + 0x6bc));
      str_sprintf(local_80,s__s___d_005367b8,uVar3,DAT_005b39f4);
      FUN_004281a0(local_80,*(undefined4 *)(param_1 + 0x6c8),*(undefined4 *)(param_1 + 0x6c0),
                   *(undefined4 *)(param_1 + 0x6c4),uVar2,0,*(undefined4 *)(param_1 + 0x6d0));
      if ((*(byte *)(param_2 + 0xc0) & 0x40) == 0) {
        DAT_005b39f8 = 0;
      }
      uVar2 = FUN_0042af30(DAT_005b39f8);
      uVar3 = FUN_0048e800(DAT_005a6140,*(undefined4 *)(param_1 + 0x6d8));
      str_sprintf(local_80,s__s___3d_005367b0,uVar3,DAT_005b39f8);
      FUN_004281a0(local_80,*(undefined4 *)(param_1 + 0x6e4),*(undefined4 *)(param_1 + 0x6dc),
                   *(undefined4 *)(param_1 + 0x6e0),uVar2,0,*(undefined4 *)(param_1 + 0x6ec));
    }
    uVar4 = Vec3_DistanceTo(GLBL_SOME_CONTEXT + 0x34,param_2 + 0x34);
    fVar1 = (float)uVar4 * _DAT_0052e824;
    uVar2 = FUN_0048e800(DAT_005a6140,*(undefined4 *)(param_1 + 0x6f4));
    str_sprintf(local_80,s__s___2_2f_005367a4,uVar2,(double)fVar1);
    FUN_004281a0(local_80,*(undefined4 *)(param_1 + 0x700),*(undefined4 *)(param_1 + 0x6f8),
                 *(undefined4 *)(param_1 + 0x6fc),*(undefined4 *)(param_1 + 0x70c),0,
                 *(undefined4 *)(param_1 + 0x708));
    if ((*(short *)(param_2 + 0x76) == 1) && (*(code **)(g_ActiveRules + 0x70) != (code *)0x0)) {
      (**(code **)(g_ActiveRules + 0x70))(param_1,param_2);
      return;
    }
    FUN_0042b140(param_1,param_2);
  }
  return;
}

