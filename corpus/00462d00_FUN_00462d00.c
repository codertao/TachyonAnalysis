
void FUN_00462d00(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0xc2) & 5) == 0) {
    uVar2 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(GLBL_SOME_CONTEXT + 0x34));
    if (uVar2 < *(uint *)(param_2 + 4)) {
      lVar1 = (longlong)(int)uVar2 * (longlong)*(int *)(param_2 + 8);
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

