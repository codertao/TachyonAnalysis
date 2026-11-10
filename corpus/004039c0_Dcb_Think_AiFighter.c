
/* +0x68 for SPED ships: run +0x304 AI think, Dcb_Think_Ship, fire if +0x326, shields, range flags
    */

void Dcb_Think_AiFighter(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  if (param_1 == g_Wingman) {
    if (DAT_0058f1c0 != 0) goto LAB_00403a0d;
    pcVar3 = *(code **)(param_1 + 0x304);
  }
  else {
    if (*(short *)(param_1 + 0x350) != 0) goto LAB_00403a0d;
    pcVar3 = *(code **)(param_1 + 0x304);
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
  }
  Dcb_Think_Ship(param_1);
LAB_00403a0d:
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0x1f) == 0) {
    Dcb_UpdateEngineAudio(param_1,*(undefined4 *)(param_1 + 0xd8));
  }
  iVar4 = *(int *)(param_1 + 0x90);
  if ((iVar4 != 0) && (*(short *)(iVar4 + 0x76) == 1)) {
    FUN_00460d70(iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x8c);
  piVar1 = (int *)(param_1 + 0x13c + *(int *)(param_1 + 0x318) * 0x38);
  if ((*(char *)(param_1 + 0x326) != '\0') &&
     ((*(int *)(*piVar1 + 4) != 2 ||
      ((iVar5 = *(int *)(param_1 + 0x90), iVar5 != 0 &&
       (*(short *)(iVar5 + 0xcc) < *(short *)(iVar5 + 0xce))))))) {
    Weapon_TryFire(param_1,piVar1,param_1 + 0x10c,0x10000,*(undefined4 *)(iVar2 + 0x564));
  }
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    uVar6 = 0x16;
    if ((*(char *)(param_1 + 0xc1) != -1) || (*(int *)(iVar4 + 0x118) <= *(int *)(param_1 + 0x124)))
    {
      uVar6 = 0x1e;
    }
    Power_Regen(param_1 + 0x10c,*(int *)(param_1 + 0x8c) + 0xd0,uVar6,1);
  }
  Power_SapperDrain(param_1 + 0x10c,*(undefined4 *)(param_1 + 0x338),0xe);
  Dcb_SetRangeFlags(param_1 + 0x10c,*(int *)(param_1 + 0x8c) + 0xd0,param_1);
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0x7f) == 0) {
    Ai_ManageShields(param_1);
  }
  if (((((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0x3f) == 0) &&
      (*(short *)(param_1 + 0xcc) != 0)) && ((*(uint *)(iVar2 + 0x564) & 0x1000) != 0)) {
    FUN_00498810(param_1,param_1 + 0x2fc,iVar2 + 0x5b0,0);
  }
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0x1f) == 0) {
    if ((*(int *)(param_1 + 0x338) != 0) && ((*(uint *)(iVar2 + 0x564) & 0x10000) != 0)) {
      FUN_004277c0(param_1,1);
    }
    *(undefined4 *)(param_1 + 0x338) = 0;
  }
  return;
}

