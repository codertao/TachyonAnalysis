
/* refine: exchange PalRef allocation pool id 0x55e968 */

undefined4 Pal_SwapMemPool(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0055e968;
  DAT_0055e968 = param_1;
  return uVar1;
}

