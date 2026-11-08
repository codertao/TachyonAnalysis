
void FUN_004227f0(undefined4 param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar5 = 0;
  while( true ) {
    uVar3 = global_bad_shift_rng();
    lVar1 = (longlong)(int)(uVar3 % 0x18000 - 0xc000) * (longlong)param_2;
    local_10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar3 = global_bad_shift_rng();
    lVar1 = (longlong)(int)(uVar3 % 0x18000 - 0xc000) * (longlong)param_2;
    local_c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar3 = global_bad_shift_rng();
    lVar1 = (longlong)(int)(uVar3 % 0x18000 - 0xc000) * (longlong)param_2;
    local_8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    bVar2 = global_bad_shift_rng();
    uVar6 = DAT_0056562c;
    if (3 < (bVar2 & 0x1f)) {
      uVar6 = DAT_00565638;
    }
    uVar3 = global_bad_shift_rng();
    lVar1 = (longlong)(int)((uVar3 & 0x3ffff) + 0x10000) * (longlong)param_2;
    iVar4 = FUN_00421980(param_1,uVar6,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
                         ,0,&local_10,1,0,10,1);
    if (iVar4 == 0) break;
    uVar3 = global_bad_shift_rng();
    uVar5 = uVar5 + 1;
    *(uint *)(iVar4 + 0x2c) = (uVar3 & 0x3f) + 0xc0;
    if (0x3f < uVar5) {
      return;
    }
  }
  return;
}

