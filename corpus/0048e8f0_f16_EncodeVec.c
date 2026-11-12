
/* sweep: guess */

void f16_EncodeVec(undefined4 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = f16_Encode(*param_1);
  *param_2 = uVar1;
  uVar1 = f16_Encode(param_1[1]);
  param_2[1] = uVar1;
  uVar1 = f16_Encode(param_1[2]);
  param_2[2] = uVar1;
  return;
}

