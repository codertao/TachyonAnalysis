
int FUN_004222e0(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar4 = global_bad_shift_rng();
  uVar9 = param_2 >> 1;
  uVar5 = global_bad_shift_rng();
  iVar1 = *param_1;
  uVar6 = global_bad_shift_rng();
  iVar2 = param_1[1];
  uVar7 = global_bad_shift_rng();
  iVar3 = param_1[2];
  iVar8 = FUN_0041b790(&DAT_005b32b0,7,&DAT_005b31c0);
  if (iVar8 == 0) {
    return 0;
  }
  FUN_0041b8b0(iVar8);
  *(undefined2 *)(iVar8 + 0x74) = 2;
  *(undefined4 *)(iVar8 + 0x58) = DAT_005a7430;
  *(uint *)(iVar8 + 0x34) = (uVar5 % param_2 - uVar9) + iVar1;
  *(uint *)(iVar8 + 0x38) = (uVar6 % param_2 - uVar9) + iVar2;
  *(uint *)(iVar8 + 0x3c) = (uVar7 % param_2 - uVar9) + iVar3;
  *(undefined4 *)(iVar8 + 0x70) = 0;
  *(undefined4 *)(iVar8 + 0x5c) = 0;
  *(undefined1 **)(iVar8 + 0x68) = &LAB_00422550;
  *(undefined4 *)(iVar8 + 0x6c) = 0;
  *(undefined4 *)(iVar8 + 0x18) = 400;
  *(uint *)(iVar8 + 0x1c) = uVar4 % (uint)(param_4 - param_3) + param_3;
  *(undefined2 *)(iVar8 + 0x30) = 0;
  *(undefined4 *)(iVar8 + 0x2c) = 0xff;
  uVar4 = global_bad_shift_rng();
  uVar4 = uVar4 >> 8 & 0x1f;
  *(uint *)(iVar8 + 0x8c) = uVar4;
  *(undefined4 *)(iVar8 + 0x98) = 1000;
  *(uint *)(iVar8 + 0x90) = -uVar4;
  uVar4 = global_bad_shift_rng();
  *(uint *)(iVar8 + 0x54) = (uVar4 >> 8 & 0x1ff) << 0x10;
  Model_SelectState((undefined4 *)(iVar8 + 0x18),0);
  *(undefined4 *)(iVar8 + 0x9c) = 0xfffffff6;
  *(int *)(iVar8 + 0xa0) = *(int *)(iVar8 + 0x34) - *param_1;
  *(int *)(iVar8 + 0xa4) = *(int *)(iVar8 + 0x38) - param_1[1];
  *(int *)(iVar8 + 0xa8) = *(int *)(iVar8 + 0x3c) - param_1[2];
  *(undefined4 *)(iVar8 + 0x8c) = 0;
  return iVar8;
}

