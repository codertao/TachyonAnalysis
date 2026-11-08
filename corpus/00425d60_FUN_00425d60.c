
void FUN_00425d60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_8;
  int local_4;
  
  uVar2 = *(int *)(param_1 + 0xec) + 1;
  *(short *)(param_1 + 0x30) = (short)(uVar2 >> 1);
  *(uint *)(param_1 + 0xec) = uVar2;
  *(undefined2 *)(param_1 + 0x32) = 0xffff;
  FUN_004b19f0(param_1 + 0x18);
  if ((param_2 != 0) && (0x10000 < *(int *)(param_1 + 0x48))) {
    FUN_004b2e00(param_1 + 0x40,&local_8);
    uVar2 = (uint)(((longlong)*(int *)(*(int *)(param_1 + 0x58) + 0x30) * (longlong)DAT_00604470 &
                   0xffffffffU) / (ulonglong)(uint)(*(int *)(param_1 + 0x48) >> 0x10)) >> 0x10;
    if (0x96 < uVar2) {
      uVar2 = 0x96;
    }
    if (*(int *)(param_1 + 0xe8) == 0) {
      iVar1 = 0x808080;
    }
    else {
      iVar1 = (-(uint)((*(uint *)(param_1 + 0xe4) & 1) != 0) & 0xffc0be01) + 0x4040ff;
    }
    if (*(int *)(param_1 + 0x110) == glbl_maybe_camera.y) {
      iVar1 = 0xffffff;
    }
    if (*(short *)(*(int *)(param_1 + 0xd4) + 0xce) == 0) {
      FUN_0042c8d0(param_1 + 0xf8,DAT_005b1b54,local_8 >> 7,(local_4 >> 7) + uVar2,iVar1,1,0x44);
    }
  }
  return;
}

