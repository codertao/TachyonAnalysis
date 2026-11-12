
/* sweep */

void HudBar_DrawDefault(int param_1,undefined4 param_2,undefined4 param_3)

{
  HudBar_Draw(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0x20),
              *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  return;
}

