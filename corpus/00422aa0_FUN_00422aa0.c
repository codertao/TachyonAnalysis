
void FUN_00422aa0(int *param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_8;
  
  local_8 = 0;
  if (param_3 != 0) {
    do {
      uVar4 = FUN_0048e350();
      lVar1 = (longlong)(int)((uVar4 & 0x3fff) + 0x8000) * (longlong)param_2;
      uVar4 = FUN_0048e350();
      lVar2 = (longlong)(int)((uVar4 >> 8) % 0xc000 - 0x6000) * (longlong)param_2;
      iVar8 = *param_1 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      uVar4 = FUN_0048e350();
      lVar2 = (longlong)(int)((uVar4 >> 8) % 0xc000 - 0x6000) * (longlong)param_2;
      iVar5 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + param_1[1];
      uVar4 = FUN_0048e350();
      lVar2 = (longlong)(int)((uVar4 >> 8) % 0xc000 - 0x6000) * (longlong)param_2;
      iVar7 = param_1[2] + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      iVar6 = FUN_0041b790(&DAT_005b32b0,7,&DAT_005b31c0);
      if (iVar6 == 0) {
        return;
      }
      FUN_0041b8b0(iVar6);
      *(undefined2 *)(iVar6 + 0x74) = 2;
      uVar3 = DAT_005a7424;
      *(int *)(iVar6 + 0x34) = iVar8;
      *(undefined4 *)(iVar6 + 0x58) = uVar3;
      *(int *)(iVar6 + 0x38) = iVar5;
      *(int *)(iVar6 + 0x3c) = iVar7;
      *(uint *)(iVar6 + 0x1c) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(undefined4 *)(iVar6 + 0x5c) = 0;
      *(undefined4 *)(iVar6 + 0x6c) = 0;
      *(undefined4 *)(iVar6 + 0x18) = 400;
      *(undefined2 *)(iVar6 + 0x30) = 0;
      *(undefined4 *)(iVar6 + 0x2c) = 0xff;
      *(undefined4 *)(iVar6 + 0x98) = 2000;
      if (param_4 == 0) {
        *(undefined1 *)(iVar6 + 0x7f) = 0;
      }
      else {
        *(undefined1 *)(iVar6 + 0x7f) = 1;
      }
      uVar4 = FUN_0048e350();
      *(uint *)(iVar6 + 0x54) = (uVar4 >> 8 & 0x1ff) << 0x10;
      FUN_004b2950(iVar6 + 0x18,0);
      *(int *)(iVar6 + 0xa0) = iVar8 - *param_1;
      *(int *)(iVar6 + 0xa4) = iVar5 - param_1[1];
      iVar5 = param_1[2];
      *(undefined2 *)(iVar6 + 0x30) = 0;
      *(undefined4 *)(iVar6 + 0x90) = 0;
      local_8 = local_8 + 1;
      *(int *)(iVar6 + 0xa8) = iVar7 - iVar5;
      *(undefined4 *)(iVar6 + 0x9c) = 0xfffffffc;
      *(undefined1 **)(iVar6 + 0x68) = &LAB_004229d0;
      *(undefined1 **)(iVar6 + 0x70) = &LAB_00422a90;
    } while (local_8 < param_3);
  }
  return;
}

