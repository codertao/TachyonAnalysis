
/* sweep */

void NetBridge_Alloc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = Mem_AllocChecked(param_2,4,0,s_bridge_data_0055f1d0,param_3);
  param_1[1] = uVar1;
  return;
}

