
int FUN_00496840(int *param_1,int *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *param_1;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    puVar6 = &DAT_005b31c0;
    puVar5 = &DAT_005b32b0;
  }
  else {
    puVar6 = *(undefined4 **)(param_1[1] + 100);
    puVar5 = &DAT_0058b03c;
  }
  iVar3 = DcbPool_Alloc(puVar5,3,puVar6);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0041b8b0(iVar3);
  *(undefined2 *)(iVar3 + 0x74) = 2;
  *(undefined4 *)(iVar3 + 0x58) = **(undefined4 **)(iVar2 + 0x74);
  *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar2 + 0x94);
  puVar6 = (undefined4 *)param_1[2];
  *(undefined4 *)(iVar3 + 0x34) = *puVar6;
  *(undefined4 *)(iVar3 + 0x38) = puVar6[1];
  *(undefined4 *)(iVar3 + 0x3c) = puVar6[2];
  puVar6 = (undefined4 *)param_1[3];
  *(undefined4 *)(iVar3 + 0x4c) = *puVar6;
  *(undefined4 *)(iVar3 + 0x50) = puVar6[1];
  *(undefined4 *)(iVar3 + 0x54) = puVar6[2];
  *(undefined4 *)(iVar3 + 0x68) = *(undefined4 *)(iVar2 + 100);
  puVar1 = (uint *)(iVar3 + 0x18);
  *puVar1 = *(uint *)(iVar2 + 0x78);
  *(undefined2 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar2 + 0x90);
  *(undefined4 *)(iVar3 + 0x2c) = 0xff;
  *(undefined4 *)(iVar3 + 0x1c) = 0x10000;
  *(undefined4 *)(iVar3 + 0x20) = 0x10000;
  *(undefined4 *)(iVar3 + 0x24) = 0x10000;
  *(undefined4 *)(iVar3 + 0xd4) = 0xff;
  *(undefined4 *)(iVar3 + 0xec) = 0;
  *(undefined4 *)(iVar3 + 0xf8) = 0;
  Model_SelectState(puVar1,0);
  *puVar1 = *puVar1 & 0xfffffbff;
  *(undefined1 *)(iVar3 + 0xc3) = 1;
  *(int *)(iVar3 + 0xd0) = DAT_00565460;
  DAT_00565460 = DAT_00565460 + 1;
  *(int *)(iVar3 + 0xdc) = iVar2;
  *(int *)(iVar3 + 200) = param_1[1];
  *(undefined4 *)(iVar3 + 0x118) = 0;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    *(undefined4 *)(iVar3 + 0xd8) = 1;
  }
  else {
    *(undefined4 *)(iVar3 + 0xd8) = 0;
    *(undefined1 **)(iVar3 + 0x6c) = &LAB_004966e0;
  }
  Proj_Launch(iVar3,param_1[3],param_1[5],param_1[6]);
  local_18 = *(int *)(iVar3 + 0x34) + *param_2;
  local_14 = *(int *)(iVar3 + 0x38) + param_2[1];
  local_10 = *(int *)(iVar3 + 0x3c) + param_2[2];
  iVar4 = Coll_SegmentCast(&local_18,iVar3 + 0x34,&local_c,*(int *)(iVar3 + 100) + 0x14,iVar3,
                           param_1[1],0,&LAB_00494910);
  if (iVar4 != 0) {
    if (param_1[8] == 0) {
      if (*(int *)(iVar3 + 0xd8) == 1) {
        *(undefined4 *)(iVar3 + 0xec) = 0xffffffff;
        FUN_004186c0(iVar3 + 0x34,&local_18,&local_c);
        *(undefined4 *)(iVar3 + 0xfc) = local_c;
        *(undefined4 *)(iVar3 + 0x100) = local_8;
        *(undefined4 *)(iVar3 + 0x104) = local_4;
      }
    }
    else if (*(code **)(iVar2 + 0x98) != (code *)0x0) {
      (**(code **)(iVar2 + 0x98))(iVar3,iVar4,&local_c);
      *param_3 = 1;
      return iVar3;
    }
    *param_3 = 1;
    return iVar3;
  }
  *param_3 = 0;
  return iVar3;
}

