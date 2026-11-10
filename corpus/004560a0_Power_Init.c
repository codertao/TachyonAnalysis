
/* power struct: fill laser, front+rear shields, hull, burner to max; rates 0x10000 */

void Power_Init(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  param_1[0xb] = param_4;
  uVar1 = Power_GetLaserMax(param_1,param_2);
  *param_1 = uVar1;
  uVar1 = Shield_GetMax(param_1,param_2);
  param_1[2] = uVar1;
  uVar1 = Shield_GetMax(param_1,param_2);
  param_1[4] = uVar1;
  uVar1 = Power_GetHullMax(param_1,param_2,param_5);
  param_1[9] = uVar1;
  param_1[10] = *(undefined4 *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x30) != 0) {
    uVar1 = Power_GetBurnerMax(param_1,param_2);
    param_1[6] = uVar1;
  }
  if (param_3 != 0) {
    Power_SetRate(param_1,0x10000,0,param_2);
    Power_SetRate(param_1,0x10000,1,param_2);
    Power_SetRate(param_1,0x10000,2,param_2);
  }
  return;
}

