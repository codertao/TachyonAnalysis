
/* sweep: guess */

void SpaceDust_Render(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if ((((*DAT_005b95e0 != 0) && (GLBL_spacesav[0x2e] != 0)) && (DAT_005b27ec != 0)) &&
     ((0x400 < DAT_005b9624 && (*(int *)(DAT_005b9084 + 0xdc) == 0)))) {
    if (DAT_005b27f4 != DAT_005b3304) {
      DAT_005b27f4 = DAT_005b3304;
      iVar1 = *DAT_005b95e0;
      iVar2 = call_approx_vec_length(iVar1 + 0xa0);
      local_8 = iVar2 * 0x40;
      if (local_8 < 0x10000) {
        local_8 = 0x10000;
      }
      else if (0x400000 < local_8) {
        local_8 = 0x400000;
      }
      DAT_005b27f8 = (uint)((longlong)(int)local_8 * 0x4000) >> 0x10 |
                     (int)((ulonglong)((longlong)(int)local_8 * 0x4000) >> 0x20) << 0x10;
      Vec_DirAngles(&local_20,iVar1 + 0xa0,&local_14);
      Angles_ToLocal(&local_14,&local_14);
      DAT_005b27fc = local_14;
      DAT_005b2800 = local_10;
      DAT_005b2804 = local_c;
    }
    *(uint *)(param_1 + 0x24) = DAT_005b27f8;
    *(undefined4 *)(param_1 + 0x4c) = DAT_005b27fc;
    *(undefined4 *)(param_1 + 0x50) = DAT_005b2800;
    *(undefined4 *)(param_1 + 0x54) = DAT_005b2804;
    *(undefined2 *)(param_1 + 0x32) = 0xffff;
    Ent_Draw(param_1 + 0x18);
  }
  return;
}

