
void FUN_00422d50(int *param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_c;
  
  uVar5 = global_bad_shift_rng();
  lVar1 = (longlong)(int)((uVar5 >> 4 & 0xffff) + 0x20000) * (longlong)param_2;
  local_c = 0;
  if (param_3 != 0) {
    do {
      uVar5 = global_bad_shift_rng();
      lVar2 = (longlong)(int)((uVar5 & 0x3fff) + 0x4000) *
              (longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      uVar5 = global_bad_shift_rng();
      lVar3 = (longlong)(int)((uVar5 >> 8 & 0x7fff) - 0x4000) * (longlong)param_2;
      iVar9 = *param_1 + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      uVar5 = global_bad_shift_rng();
      lVar3 = (longlong)(int)((uVar5 >> 8 & 0x7fff) - 0x4000) * (longlong)param_2;
      iVar8 = param_1[1] + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      uVar5 = global_bad_shift_rng();
      lVar3 = (longlong)(int)((uVar5 >> 8 & 0x7fff) - 0x4000) * (longlong)param_2;
      iVar7 = param_1[2] + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      iVar6 = FUN_0041b790(&DAT_005b32b0,7,&DAT_005b31c0);
      if (iVar6 == 0) {
        return;
      }
      FUN_0041b8b0(iVar6);
      *(undefined2 *)(iVar6 + 0x74) = 2;
      uVar4 = DAT_005a7448;
      *(int *)(iVar6 + 0x34) = iVar9;
      *(int *)(iVar6 + 0x38) = iVar8;
      *(undefined4 *)(iVar6 + 0x58) = uVar4;
      *(int *)(iVar6 + 0x3c) = iVar7;
      *(undefined4 *)(iVar6 + 0x5c) = 0;
      *(undefined4 *)(iVar6 + 0x6c) = 0;
      *(undefined4 *)(iVar6 + 0x18) = 400;
      *(uint *)(iVar6 + 0x1c) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      *(undefined2 *)(iVar6 + 0x30) = 0;
      *(undefined4 *)(iVar6 + 0x2c) = 0xff;
      *(undefined4 *)(iVar6 + 0x98) = 4000;
      uVar5 = global_bad_shift_rng();
      *(undefined1 **)(iVar6 + 0x68) = &LAB_00422c60;
      *(undefined1 **)(iVar6 + 0x70) = &LAB_00422d20;
      *(uint *)(iVar6 + 0x90) = (uVar5 >> 8) % 600;
      if (param_4 == 0) {
        *(undefined1 *)(iVar6 + 0x7f) = 0;
      }
      else {
        *(undefined1 *)(iVar6 + 0x7f) = 1;
      }
      uVar5 = global_bad_shift_rng();
      *(uint *)(iVar6 + 0xb4) = (uVar5 >> 8 & 0xfffff) - 0x1fffff;
      uVar5 = global_bad_shift_rng();
      *(uint *)(iVar6 + 0x54) = (uVar5 >> 8 & 0x1ff) << 0x10;
      Model_SelectState(iVar6 + 0x18,0);
      *(int *)(iVar6 + 0xa0) = iVar9 - *param_1 >> 1;
      *(int *)(iVar6 + 0xa4) = iVar8 - param_1[1] >> 1;
      *(int *)(iVar6 + 0xa8) = iVar7 - param_1[2] >> 1;
      local_c = local_c + 1;
      *(undefined4 *)(iVar6 + 0x9c) = 0xfffffffc;
    } while (local_c < param_3);
  }
  return;
}

