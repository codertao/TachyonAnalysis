
/* sweep: vtable +0x3c */

undefined4
Audio_PlaySample3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  if (GLBL_audio_running != 0) {
    uVar1 = (**(code **)(PTR_PTR_0055deac + 0x3c))(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

