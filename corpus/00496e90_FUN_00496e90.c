
int FUN_00496e90(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  iVar2 = *param_1;
  local_10 = param_4;
  local_18 = 0;
  local_14 = 0;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    puVar8 = &DAT_005b31c0;
    puVar7 = &DAT_005b32b0;
  }
  else {
    puVar8 = *(undefined4 **)(param_1[1] + 100);
    puVar7 = &DAT_0058b03c;
  }
  iVar5 = FUN_0041b790(puVar7,3,puVar8);
  if (iVar5 == 0) {
    return 0;
  }
  FUN_0041b8b0(iVar5);
  *(undefined4 *)(iVar5 + 0x114) = 0;
  *(undefined2 *)(iVar5 + 0x74) = 2;
  *(undefined4 *)(iVar5 + 0x58) = **(undefined4 **)(iVar2 + 0x74);
  *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)(iVar2 + 0x94);
  piVar3 = (int *)param_1[2];
  piVar1 = (int *)(iVar5 + 0x34);
  *piVar1 = *piVar3;
  *(int *)(iVar5 + 0x38) = piVar3[1];
  *(int *)(iVar5 + 0x3c) = piVar3[2];
  puVar8 = (undefined4 *)param_1[3];
  *(undefined4 *)(iVar5 + 0x4c) = *puVar8;
  *(undefined4 *)(iVar5 + 0x50) = puVar8[1];
  *(undefined4 *)(iVar5 + 0x54) = puVar8[2];
  uVar4 = *(undefined4 *)(iVar2 + 100);
  *(undefined4 *)(iVar5 + 0x6c) = 0;
  *(undefined4 *)(iVar5 + 0x68) = uVar4;
  uVar4 = *(undefined4 *)(iVar2 + 0x78);
  *(undefined2 *)(iVar5 + 0x30) = 0;
  *(undefined4 *)(iVar5 + 0x18) = uVar4;
  *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(iVar2 + 0x90);
  *(int *)(iVar5 + 0x2c) = 0xff - param_5;
  *(undefined4 *)(iVar5 + 0x1c) = 0x10000;
  *(undefined4 *)(iVar5 + 0x20) = 0x10000;
  *(undefined4 *)(iVar5 + 0x24) = 0x10000;
  Vec_RotateByOrientation(&local_18,iVar5 + 0x4c);
  *(undefined1 *)(iVar5 + 0xc3) = 1;
  *(int *)(iVar5 + 0xd0) = DAT_00565460;
  DAT_00565460 = DAT_00565460 + 1;
  *(undefined4 *)(iVar5 + 0xd4) = *(undefined4 *)(iVar5 + 0x2c);
  *(int *)(iVar5 + 0xdc) = iVar2;
  *(int *)(iVar5 + 200) = param_1[1];
  *(undefined4 *)(iVar5 + 0x118) = 0;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    *(undefined4 *)(iVar5 + 0xd8) = 1;
  }
  else {
    *(undefined4 *)(iVar5 + 0xd8) = 0;
  }
  FUN_004957a0(iVar5,param_1[3],param_1[5],param_1[6]);
  local_24 = *piVar1 + *param_2;
  local_20 = *(int *)(iVar5 + 0x38) + param_2[1];
  local_1c = *(int *)(iVar5 + 0x3c) + param_2[2];
  iVar6 = FUN_00418d10(&local_24,piVar1,local_c,*(int *)(iVar5 + 100) + 0x14,iVar5,param_1[1],0,
                       &LAB_00494910);
  if (iVar6 != 0) {
    if ((param_1[8] != 0) && (*(code **)(iVar2 + 0x98) != (code *)0x0)) {
      (**(code **)(iVar2 + 0x98))(iVar5,iVar6,local_c);
    }
    *param_3 = 1;
    return iVar5;
  }
  *param_3 = 0;
  return iVar5;
}

