
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

undefined4 Image_LoadWithAlpha(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = Image_Load(param_2);
  uVar2 = Image_Load(param_1);
  uVar3 = Image_MakeAlpha(uVar2,uVar1,DAT_00603104 * _DAT_00603100);
  OurFreeMem(uVar2);
  OurFreeMem(uVar1);
  return uVar3;
}

