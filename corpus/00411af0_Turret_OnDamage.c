
void Turret_OnDamage(int param_1)

{
  undefined4 uVar1;
  
  if (0 < *(int *)(param_1 + 0x180)) {
    uVar1 = Shield_ApplyDamage(DAT_005653e0,DAT_005653e4,DAT_005653e8,DAT_005653ec,param_1 + 0x15c,
                               *(int *)(param_1 + 0x8c) + 0xd0);
    if (*(int *)(param_1 + 0x180) < 1) {
      Turret_Destroy(param_1);
      return;
    }
    DAT_005653fc = 5;
    Weapon_PlayImpact(DAT_005653dc,0,uVar1,0,1);
  }
  return;
}

