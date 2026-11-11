
undefined4
FUN_00418a20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00418730(param_3,param_2,param_6);
  if (iVar1 != 0) {
    iVar1 = Coll_SegmentVsModel(param_4,param_3,param_2 + 0x18,param_5,param_6,
                                *(undefined4 *)(param_2 + 0xc4));
    if (iVar1 != 0) {
      Model_LocalToWorld(param_2 + 0x18,param_5);
      return 1;
    }
  }
  return 0;
}

