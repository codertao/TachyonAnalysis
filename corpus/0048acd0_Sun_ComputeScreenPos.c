
/* sweep: guess */

int Sun_ComputeScreenPos(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_34 [24];
  vec3 local_1c;
  vec3 local_10;
  
  local_10.y = 0x10000;
  local_10.z = 0x10000;
  local_1c.x = 0;
  local_1c.y = 0;
  local_1c.z = -0x10000;
  local_10.x = 0;
  if (DAT_0056c2e0 == 0) {
    return 0;
  }
  Rot_FromAngles(local_34,(vec3 *)&DAT_0056c2d4);
  some_rotate_by_global(&local_1c,&local_1c);
  Rot_FromAngles(local_34,(vec3 *)(param_1 + 0x4c));
  call_Vec_NormalizeFast(&local_10);
  some_rotate_by_global(&local_10,&local_10);
  iVar1 = MathAsm_DotFixed16_Fwd(&local_1c,&local_10);
  uVar2 = (uint)((longlong)iVar1 * (longlong)DAT_0056c36c) >> 0x10 |
          (int)((ulonglong)((longlong)iVar1 * (longlong)DAT_0056c36c) >> 0x20) << 0x10;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  return (int)uVar2 >> 8;
}

