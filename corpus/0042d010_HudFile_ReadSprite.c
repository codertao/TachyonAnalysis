
/* sweep */

void HudFile_ReadSprite(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_18 [24];
  
  Cbin_FindParam_Global(param_2,0,0,param_1 + 1,1,1);
  Cbin_GetParamN(param_2,0,0,param_1 + 2,1,2);
  Cbin_GetParamN(param_2,0,0,param_1 + 3,1,3);
  Cbin_GetParamN(param_2,0,0,param_1 + 4,1,4);
  Cbin_GetParamN(param_2,0,0,param_1 + 5,1,5);
  Cbin_GetParamN(param_2,0,0,param_1 + 6,1,6);
  Cbin_GetParamN(param_2,local_18,0x18,0,4,7);
  uVar1 = HudFile_FindImage(param_3,local_18);
  *param_1 = uVar1;
  Cbin_GetParamN(param_2,0,0,param_1 + 8,1,8);
  Cbin_GetParamN(param_2,0,0,param_1 + 9,1,9);
  Cbin_GetParamN(param_2,0,0,param_1 + 10,1,10);
  return;
}

