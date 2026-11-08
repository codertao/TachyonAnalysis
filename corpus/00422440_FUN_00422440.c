
void FUN_00422440(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  if (param_5 != 0) {
    do {
      uVar2 = global_bad_shift_rng();
      lVar1 = (longlong)(int)(uVar2 % 0x160c0 - 0xb060) * (longlong)param_2;
      local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      uVar2 = global_bad_shift_rng();
      lVar1 = (longlong)(int)(uVar2 % 0x160c0 - 0xb060) * (longlong)param_2;
      local_10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      uVar2 = global_bad_shift_rng();
      lVar1 = (longlong)(int)(uVar2 % 0x160c0 - 0xb060) * (longlong)param_2;
      local_c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      uVar2 = global_bad_shift_rng();
      uVar3 = global_bad_shift_rng();
      lVar1 = (longlong)(int)((uVar3 & 0x3ffff) + 0x10000) * (longlong)param_6;
      iVar4 = FUN_00421980(param_1,**(undefined4 **)(param_3 + (uVar2 % param_4) * 4),
                           (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10,0,&local_14
                           ,1,0,0,0);
      if (iVar4 == 0) {
        return;
      }
      uVar2 = global_bad_shift_rng();
      *(uint *)(iVar4 + 0x2c) = (uVar2 & 0x3f) + 0xc0;
      local_8 = local_8 + 1;
    } while (local_8 < param_5);
  }
  return;
}

