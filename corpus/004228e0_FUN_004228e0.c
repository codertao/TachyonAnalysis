
void FUN_004228e0(undefined4 param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar5 = 0;
  do {
    uVar3 = FUN_0048e350();
    lVar1 = (longlong)(int)(uVar3 % 0x4800 - 0x2400) * (longlong)param_2;
    local_10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar3 = FUN_0048e350();
    lVar1 = (longlong)(int)(uVar3 % 0x4800 - 0x2400) * (longlong)param_2;
    local_c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar3 = FUN_0048e350();
    uVar2 = DAT_00565650;
    lVar1 = (longlong)(int)(uVar3 % 0x4800 - 0x2400) * (longlong)param_2;
    local_8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar3 = FUN_0048e350();
    lVar1 = (longlong)(int)((uVar3 & 0x3ffff) + 0x10000) * (longlong)param_2;
    iVar4 = FUN_00421980(param_1,uVar2,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
                         ,0,&local_10,0,0,0x3c,1);
    if (iVar4 == 0) {
      return;
    }
    *(undefined4 *)(iVar4 + 0x84) = 0xfffffffe;
    uVar3 = FUN_0048e350();
    uVar5 = uVar5 + 1;
    *(uint *)(iVar4 + 0x2c) = (uVar3 & 0x3f) + 0xc0;
  } while (uVar5 < 0x40);
  return;
}

