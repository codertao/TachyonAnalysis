
undefined4 FUN_0049e9c0(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (GLBL_audio_running != 0) {
    uVar1 = (**(code **)(PTR_PTR_0055deac + 0x4c))(param_1);
    return uVar1;
  }
  return 0;
}

