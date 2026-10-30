
void FUN_00416dd0(undefined4 *param_1)

{
  DAT_005b9018 = *param_1;
  DAT_005b901c = param_1[1];
  DAT_005b9020 = param_1[2];
  DAT_005b9024 = param_1[3];
  if (*(code **)(DAT_005b1dc4 + 0x7c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00416e03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_005b1dc4 + 0x7c))();
    return;
  }
  return;
}

