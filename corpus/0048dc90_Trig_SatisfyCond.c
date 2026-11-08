
/* mark trigger condition satisfied (cond+0x20=1, +0x24=frame), set g_TrigCurrentIndex, re-evaluate
   its trigger */

void Trig_SatisfyCond(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = DAT_005897e4;
  g_TrigCurrentIndex = param_4;
  Trig_Evaluate(param_2,param_3);
  return;
}

