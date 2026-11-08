
void FUN_00411b70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (0 < *(int *)(param_1 + 0x168))) {
    uVar2 = Shield_ApplyDamage(DAT_005653e0,DAT_005653e4,DAT_005653e8,DAT_005653ec,param_1 + 0x144,
                               *(int *)(param_1 + 0x8c) + 0xd0);
    if (*(int *)(param_1 + 0x168) < 1) {
      CapShip_StartDeath(param_1,1000);
      return;
    }
    DAT_005653fc = 5;
    Weapon_PlayImpact(DAT_005653dc,0,uVar2,0xb,1);
    iVar1 = *(int *)(param_1 + 0x8c);
    Mission_PostObjDamage
              (*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20),*(undefined4 *)(param_1 + 0x168),
               *(undefined4 *)(iVar1 + 0xf0),*(undefined4 *)(param_1 + 100));
    uVar2 = Shield_GetMax(param_1 + 0x144,iVar1 + 0xd0,*(undefined4 *)(param_1 + 100));
    Mission_PostObjDamage2
              (*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20),*(undefined4 *)(param_1 + 0x14c),
               uVar2);
    if (DAT_005653f4 != 0) {
      Mission_PostAttackedByPlayer
                (*(undefined4 *)(param_1 + 0xd8),param_1 + 0xec,DAT_005653f4,
                 *(undefined4 *)(param_1 + 100));
    }
  }
  return;
}

