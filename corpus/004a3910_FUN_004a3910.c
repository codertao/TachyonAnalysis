
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3910(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(DAT_00603110 * DAT_00603104 * _DAT_00603100) >> 3;
  uVar1 = FUN_0049c4e0(uVar3,4,0);
  iVar2 = DAT_0060310c << 2;
  if (DAT_00603110 == 0x18) {
    iVar2 = 0;
  }
  FUN_004a14f0(iVar2 + 0x36,0);
  FUN_004a1490(uVar1,uVar3);
  if (DAT_00603110 == 8) {
    FUN_004a3b70(param_1,uVar1,DAT_00603104 * _DAT_00603100);
  }
  if (DAT_00603110 == 0x18) {
    FUN_004a3c20(param_1,uVar1,DAT_00603104 * _DAT_00603100);
  }
  FUN_004a3700(param_1);
  OurFreeMem(uVar1);
  return;
}

