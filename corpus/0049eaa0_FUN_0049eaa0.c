
undefined4 FUN_0049eaa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (GLBL_audio_running != 0) {
    uVar1 = (**(code **)(PTR_PTR_0055deac + 0x88))(param_1,param_2);
    return uVar1;
  }
  return 0;
}

