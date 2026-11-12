
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

undefined4 Pcx_EncodeImage(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  DAT_00603160 = 0;
  uVar1 = Mem_Alloc(8000,4,0);
  if (DAT_00603104 != 0) {
    do {
      Pcx_EncodeRow(param_1,uVar1,param_2,param_3);
      param_1 = param_1 + _DAT_00603100;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_00603104);
  }
  OurFreeMem(uVar1);
  return 1;
}

