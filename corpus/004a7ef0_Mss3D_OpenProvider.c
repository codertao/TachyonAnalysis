
/* sweep */

undefined4 Mss3D_OpenProvider(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_1;
  iVar2 = _AIL_open_3D_provider_4(param_1);
  param_1 = 0x20;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (iVar2 == 0) {
    *param_2 = uVar1;
    param_2[3] = 1;
    _AIL_set_3D_provider_preference_12(uVar1,s_Rear_Advance_Samples_0055e6bc,&param_1);
    return 1;
  }
  return 0;
}

