
/* cdecl wrapper around 0x4e0740 (eax=dx, ebx=dz) */

undefined8 __fastcall Math_Atan2(undefined4 param_1,undefined4 param_2)

{
  DAT_004e0730 = Math_Atan2Core();
  return CONCAT44(param_2,DAT_004e0730);
}

