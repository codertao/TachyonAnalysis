
/* refine: asm: 32-bpp (table 0x5a6440) */

void __fastcall FontAsm_BlitGlyphRow32(byte param_1,char *param_2)

{
  undefined4 uVar1;
  int unaff_EBX;
  undefined4 *unaff_EBP;
  
  uVar1 = *(undefined4 *)(&DAT_005a6440 + (uint)param_1 * 4);
  do {
    if (*param_2 != '\0') {
      *unaff_EBP = uVar1;
    }
    unaff_EBP = unaff_EBP + 1;
    param_2 = param_2 + 1;
    unaff_EBX = unaff_EBX + -1;
  } while (unaff_EBX != 0);
  return;
}

