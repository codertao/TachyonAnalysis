
/* timed playback: hooks entity think (+0x68 -> Anim_Think) and +0x5c, saved in anim +0x38/+0x3c */

void Anim_Play(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = Anim_Find(param_2,param_3);
  param_2[6] = iVar1;
  if (iVar1 != 0) {
    param_2[0x14] = param_5;
    *param_2 = param_4;
    FUN_00407aa0(param_2,param_1);
    param_2[0xe] = *(undefined4 *)(param_1 + 0x68);
    param_2[0xf] = *(undefined4 *)(param_1 + 0x5c);
    *(code **)(param_1 + 0x68) = Anim_Think;
    *(undefined4 *)(param_1 + 0x5c) = param_6;
  }
  return;
}

