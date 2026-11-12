
/* sweep: asm, reg-passed args */

undefined8 __fastcall Font_MeasureString(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  
  FontAsm_MeasureString();
  DAT_004e5490 = extraout_ECX;
  return CONCAT44(param_2,extraout_ECX);
}

