
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a3cc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_004a2eb0(param_2);
  uVar2 = FUN_004a2eb0(param_1);
  uVar3 = FUN_004a3c70(uVar2,uVar1,DAT_00603104 * _DAT_00603100);
  OurFreeMem(uVar2);
  OurFreeMem(uVar1);
  return uVar3;
}

