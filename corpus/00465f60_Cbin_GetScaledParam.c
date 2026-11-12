
/* sweep: guess */

void Cbin_GetScaledParam(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    iVar1 = Cbin_GetParam(param_1,param_2,param_3,0x20,0,4,1);
    if (iVar1 != 0) {
      Cbin_GetParamN(param_2,0,0,(undefined4 *)(param_3 + 0x28),1,2);
      Cbin_GetParamN(param_2,0,0,param_3 + 0x34,1,3);
      Cbin_GetParamN(param_2,0,0,param_3 + 0x30,1,4);
      Cbin_GetParamN(param_2,0,0,param_3 + 0x2c,1,5);
      uVar2 = Fixed_ToFloat(*(undefined4 *)(param_3 + 0x28));
      *(undefined4 *)(param_3 + 0x24) = uVar2;
    }
  }
  return;
}

