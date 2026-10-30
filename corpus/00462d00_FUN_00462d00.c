
void __thiscall FUN_00462d00(undefined4 param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(param_2 + 0xc2) & 5) == 0) {
    uVar2 = FUN_0048e440(param_2 + 0x34,DAT_005b3300 + 0x34,param_1);
    if (uVar2 < *(uint *)(param_3 + 4)) {
      lVar1 = (longlong)(int)uVar2 * (longlong)*(int *)(param_3 + 8);
      iVar3 = (int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) >> 0x10;
      if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      FUN_0042e140(0x32,0xff - iVar3);
      FUN_0042e1d0(8);
    }
  }
  return;
}

