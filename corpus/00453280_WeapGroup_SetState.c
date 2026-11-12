
/* sweep */

void WeapGroup_SetState(int param_1,undefined4 param_2)

{
  WeapSlot_SetLinked(&DAT_005b1f10 + (&DAT_005b20d4)[param_1] * 0xe,param_2);
  return;
}

