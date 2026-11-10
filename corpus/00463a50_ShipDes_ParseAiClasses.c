
/* OBJECT_CLASS -> +0x548, MAIN_TARGET_CLASS -> +0x550, TARGET_CLASS -> +0x54c */

void ShipDes_ParseAiClasses(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = ShipDes_ParseClassMask(&DAT_005633c8);
  *(undefined4 *)(param_1 + 0x548) = uVar1;
  uVar1 = ShipDes_ParseClassMask(&DAT_005633e8);
  *(undefined4 *)(param_1 + 0x550) = uVar1;
  uVar1 = ShipDes_ParseClassMask(&DAT_00563408);
  *(undefined4 *)(param_1 + 0x54c) = uVar1;
  return;
}

