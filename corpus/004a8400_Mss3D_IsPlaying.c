
/* sweep: guess */

uint Mss3D_IsPlaying(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    return 0;
  }
  if (*(uint *)(param_2 + 4) <= param_1) {
    return 0xffffffff;
  }
  iVar1 = _AIL_3D_sample_status_4(*(undefined4 *)(*(int *)(param_2 + 8) + param_1 * 0x38));
  return (uint)(iVar1 == 4);
}

