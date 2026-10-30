
void FUN_00420e10(int param_1,byte param_2)

{
  longlong lVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 0x10) == 0) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x58) + 0x30);
  }
  else {
    lVar1 = (longlong)*(int *)(*(int *)(param_1 + 0x58) + 0x30) * (longlong)*(int *)(param_1 + 0x1c)
    ;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  FUN_004af3e0(param_1 + 0x40,uVar2 << (param_2 & 0x1f));
  *(undefined2 *)(param_1 + 0x32) = 0xffff;
  FUN_004b19f0(param_1 + 0x18);
  return;
}

