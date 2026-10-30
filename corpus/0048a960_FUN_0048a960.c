
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048a960(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  
  FUN_0048e380(&DAT_0056c2a0,0x4c);
  DAT_0056c344 = *param_1;
  DAT_0056c348 = param_1[1];
  DAT_0056c34c = param_1[2];
  _DAT_0056c2a0 = 0x10;
  _DAT_0056c2d4 = *param_2;
  _DAT_0056c2d8 = param_2[1];
  _DAT_0056c2dc = param_2[2];
  _DAT_0056c2a4 = param_4;
  DAT_0056c2e0 = param_3;
  _DAT_0056c2ba = 0xffff;
  DAT_0056c37c = param_5;
  uVar1 = FUN_004e0462(&DAT_0056c344);
  DAT_0056c364 = uVar1 >> 1;
  FUN_004b3a10(param_1);
  FUN_004b1ca0(0x30000400);
  FUN_00431a10(&PTR_s_sunflare_pak_00559830,&DAT_005ac548);
  FUN_004b1ca0(0);
  if (DAT_0056c2e0 != 0) {
    FUN_004b2950(&DAT_0056c2a0,0);
    FUN_004b5120(0);
    return;
  }
  if (*(int *)(DAT_005b9084 + 0xd8) != 0) {
    FUN_004b5120(1);
    return;
  }
  FUN_004b5120(2);
  return;
}

