
/* refine: |x|-r <= slopeX*z and |y|-r <= slopeY*z (slopes DAT_00668f64/68 from
   Rend_SetFrustumSlopes) */

bool Cull_SphereSideTest(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = (longlong)DAT_00668f64 * (longlong)*(int *)(param_1 + 0x30);
  uVar2 = (int)*(uint *)(param_1 + 0x28) >> 0x1f;
  if ((int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) <
      (int)(((*(uint *)(param_1 + 0x28) ^ uVar2) - uVar2) - param_2)) {
    return false;
  }
  lVar1 = (longlong)DAT_00668f68 * (longlong)*(int *)(param_1 + 0x30);
  uVar2 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
  return (int)(((*(uint *)(param_1 + 0x2c) ^ uVar2) - uVar2) - param_2) <=
         (int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
}

