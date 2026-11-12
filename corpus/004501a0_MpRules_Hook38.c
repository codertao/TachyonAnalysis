
/* sweep: forwards to game-type table +0x38 */

void MpRules_Hook38(undefined4 param_1)

{
  if (*(code **)(DAT_00590238 + 0x38) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x38))(param_1);
  }
  return;
}

