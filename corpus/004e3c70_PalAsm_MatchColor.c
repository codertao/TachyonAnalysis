
/* refine: asm: nearest palette index for RGB via PalAsm_FindNearest (fn ptr 0x4e3053) */

undefined8 __fastcall PalAsm_MatchColor(undefined4 param_1,undefined4 param_2)

{
  DAT_004e3000 = (*(code *)PTR_PalAsm_FindNearest_004e3053)();
  return CONCAT44(param_2,DAT_004e3000);
}

