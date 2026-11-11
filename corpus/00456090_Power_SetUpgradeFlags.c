
/* power +0x2c = flags (max values switch to the x1.25 des fields; current values untouched) */

void Power_SetUpgradeFlags(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}

