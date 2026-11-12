
/* sweep: vtable +0x34 */

undefined4
Audio_PlaySample(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (GLBL_audio_running != 0) {
    uVar1 = (**(code **)(PTR_PTR_0055deac + 0x34))(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}

