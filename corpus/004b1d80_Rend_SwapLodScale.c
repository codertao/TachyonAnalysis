
/* refine: sets LOD distance scale 0x668f88 (init 0x10000), returns old */

undefined4 Rend_SwapLodScale(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00668f88;
  DAT_00668f88 = param_1;
  return uVar1;
}

