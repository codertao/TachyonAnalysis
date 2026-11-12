
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

undefined4 Joy_Init(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_005640d8 != 0) {
    Joy_Shutdown();
  }
  _DAT_005640dc = param_1;
  DAT_005640e0 = param_2;
  Joy_SelectDevice(0);
  Joy_ResetCalibration();
  DirectInputCreateA(param_1,0x500,&DAT_005640d4,0);
  Input_EnumJoysticks();
  uVar1 = Joy_FindLast();
  Joy_SelectDevice(uVar1);
  Joy_SetVare0d0(3);
  DAT_005640d8 = 1;
  return 0;
}

