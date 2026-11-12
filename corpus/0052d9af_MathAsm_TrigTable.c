
/* refine: guess: wrapper; ShipDes_Finalize / Mine_InitDesc turn a cone angle (+0x580 / +0x1b0) into
   its trig value */

undefined8 __fastcall MathAsm_TrigTable(undefined4 param_1,undefined4 param_2)

{
  DAT_0052d7f4 = MathAsm_TrigTableLookup();
  return CONCAT44(param_2,DAT_0052d7f4);
}

