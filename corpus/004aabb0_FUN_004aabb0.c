
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004aabb0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0x8000;
  local_4 = DAT_0055e3fc;
  if (DAT_0055e3e0 != 0) {
    iVar2 = FUN_004aab70();
    if (iVar2 != 0) {
      piVar1 = DAT_005b9af4;
      iVar2 = (**(code **)(*DAT_005b9af4 + 100))
                        (DAT_005b9af4,&DAT_0055e404,&local_4,2,DAT_00564910,&local_8);
      DAT_0055e420 = piVar1;
      _DAT_0055e41c = DAT_00564910;
      if (iVar2 == 0) {
        DAT_0055e414 = DAT_0055e414 + 1;
        if (DAT_0055e404 == 0) {
          FUN_004aaa20(DAT_00564910);
          uVar3 = FUN_004aabb0();
          return uVar3;
        }
        return DAT_00564910;
      }
    }
  }
  return 0;
}

