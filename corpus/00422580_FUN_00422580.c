
void FUN_00422580(int *param_1,int param_2,undefined4 param_3,uint param_4,int param_5,int param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_c;
  
  local_c = 0;
  if (param_4 != 0) {
    do {
      uVar2 = global_bad_shift_rng();
      lVar1 = (longlong)(int)(uVar2 % 0xc000 + 0x4000) * (longlong)param_2;
      uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      uVar3 = global_bad_shift_rng();
      lVar1 = (longlong)(int)((uVar3 >> 8) % 22000 - 11000) * (longlong)(int)uVar2;
      uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      if ((int)uVar3 < 0) {
        uVar5 = -((uint)((longlong)(int)uVar2 * 26000) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)uVar2 * 26000) >> 0x20) << 0x10);
      }
      else {
        uVar5 = (uint)((longlong)(int)uVar2 * 26000) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar2 * 26000) >> 0x20) << 0x10;
      }
      iVar4 = *param_1 + uVar3 + uVar5;
      uVar3 = global_bad_shift_rng();
      lVar1 = (longlong)(int)((uVar3 >> 8) % 22000 - 11000) * (longlong)(int)uVar2;
      uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      if ((int)uVar3 < 0) {
        uVar5 = -((uint)((longlong)(int)uVar2 * 26000) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)uVar2 * 26000) >> 0x20) << 0x10);
      }
      else {
        uVar5 = (uint)((longlong)(int)uVar2 * 26000) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar2 * 26000) >> 0x20) << 0x10;
      }
      iVar7 = param_1[1] + uVar3 + uVar5;
      uVar3 = global_bad_shift_rng();
      lVar1 = (longlong)(int)((uVar3 >> 8) % 22000 - 11000) * (longlong)(int)uVar2;
      uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      if ((int)uVar3 < 0) {
        uVar5 = -((uint)((longlong)(int)uVar2 * 26000) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)uVar2 * 26000) >> 0x20) << 0x10);
      }
      else {
        uVar5 = (uint)((longlong)(int)uVar2 * 26000) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar2 * 26000) >> 0x20) << 0x10;
      }
      iVar8 = param_1[2] + uVar3 + uVar5;
      iVar6 = FUN_0041b790(&DAT_005b32b0,7,&DAT_005b31c0);
      if (iVar6 == 0) {
        return;
      }
      FUN_0041b8b0(iVar6);
      *(undefined4 *)(iVar6 + 0x58) = param_3;
      *(int *)(iVar6 + 0x34) = iVar4;
      *(int *)(iVar6 + 0x38) = iVar7;
      *(int *)(iVar6 + 0x3c) = iVar8;
      *(undefined2 *)(iVar6 + 0x74) = 2;
      *(undefined4 *)(iVar6 + 0x70) = 0;
      *(undefined4 *)(iVar6 + 0x5c) = 0;
      *(undefined1 **)(iVar6 + 0x68) = &LAB_00422550;
      *(undefined4 *)(iVar6 + 0x6c) = 0;
      *(undefined4 *)(iVar6 + 0x18) = 400;
      *(uint *)(iVar6 + 0x1c) = uVar2;
      *(undefined2 *)(iVar6 + 0x30) = 0;
      *(undefined4 *)(iVar6 + 0x2c) = 0xff;
      uVar2 = global_bad_shift_rng();
      uVar2 = uVar2 >> 8 & 0xf;
      *(uint *)(iVar6 + 0x8c) = uVar2;
      *(uint *)(iVar6 + 0x90) = -uVar2;
      *(undefined4 *)(iVar6 + 0x98) = 1000;
      if (param_5 == 0) {
        *(undefined1 *)(iVar6 + 0x7f) = 0;
      }
      else {
        *(undefined1 *)(iVar6 + 0x7f) = 1;
      }
      uVar2 = global_bad_shift_rng();
      *(uint *)(iVar6 + 0x54) = (uVar2 >> 8 & 0x1ff) << 0x10;
      Model_SelectState(iVar6 + 0x18,0);
      *(undefined4 *)(iVar6 + 0x9c) = 0xfffffff6;
      *(int *)(iVar6 + 0xa0) = iVar4 - *param_1;
      *(int *)(iVar6 + 0xa4) = iVar7 - param_1[1];
      *(int *)(iVar6 + 0xa8) = iVar8 - param_1[2];
      if (param_6 != 0) {
        *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + *(int *)(iVar6 + 0xa0) * param_6;
        *(int *)(iVar6 + 0x38) = *(int *)(iVar6 + 0x38) + *(int *)(iVar6 + 0xa4) * param_6;
        *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + param_6 * *(int *)(iVar6 + 0xa8);
      }
      local_c = local_c + 1;
    } while (local_c < param_4);
  }
  return;
}

