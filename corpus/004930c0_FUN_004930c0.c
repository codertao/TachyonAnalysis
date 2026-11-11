
void FUN_004930c0(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    Ai_PickWeaponByShieldDps();
    return;
  }
  Ai_PickWeaponByHullDps(param_1);
  return;
}

