
/* sweep */

void WeaponMount_InitOrient(int param_1,int param_2)

{
  longlong lVar1;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_8 = *(int *)(param_2 + 0xcc);
  lVar1 = (longlong)local_8 * (longlong)*(int *)(param_2 + 0x108);
  local_c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if ((int)local_c < 0x1001) {
    clr_bytes(param_1 + 0xc,0xc);
    return;
  }
  Vec_DirAngles(param_1,&local_14,param_1 + 0xc);
  return;
}

