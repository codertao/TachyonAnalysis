
/* refine: colour index -> 8-bit match, packed pixel, and RGB tables (0x5a6340/63c0/6440) */

void Gfx_DefineColor(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  *(char *)((int)&DAT_005a6320 + param_1) = (char)param_1;
  if (DAT_00604488 == 8) {
    uVar1 = Pal_SetMatchColor(param_2,param_3,param_4);
    *(undefined4 *)(&DAT_005a6340 + param_1 * 4) = uVar1;
  }
  uVar1 = GfxAsm_PackColor(param_2,param_3,param_4);
  *(undefined4 *)(&DAT_005a63c0 + param_1 * 4) = uVar1;
  *(uint *)(&DAT_005a6440 + param_1 * 4) =
       ((param_2 & 0xff) * 0x100 + (param_3 & 0xff)) * 0x100 + (param_4 & 0xff);
  return;
}

