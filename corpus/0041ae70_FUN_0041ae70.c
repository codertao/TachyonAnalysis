
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0041ae70(vec3 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_30;
  char *local_2c;
  undefined *local_28;
  int local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  vec3 local_c;
  
  pcVar7 = GLBL_some_search_dist_arr_[0];
  local_c.x = param_1->x;
  local_c.y = param_1->y;
  local_c.z = param_1->z;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_2c = GLBL_some_search_dist_arr_[0];
  local_30 = 0;
  param_1 = (vec3 *)0x0;
  local_28 = &DAT_00640000;
  local_24 = 1;
  FUN_0041a2f0();
  GLBL_some_search_dist_arr_[3] = 0;
  GLBL_some_search_dist_arr_[2] = 0;
  DAT_005b2a70 = 0;
  iVar4 = GLBL_iter_cnt;
  if (GLBL_iter_cnt < 0) {
    iVar4 = 0;
  }
  if (DAT_005b2984 < iVar4) {
    iVar4 = DAT_005b2984;
  }
  _DAT_005b29c4 = iVar4 / 5 + 1;
  local_20 = 0;
  do {
    if (local_24 == 0) {
      local_2c = pcVar7 + 0x3000;
      if (0x540000 < (int)local_2c) {
        local_2c = s_BLOCK_DELAY_0053fffc + 4;
      }
      pcVar7 = local_2c;
      iVar6 = (int)local_2c >> 1;
      uVar1 = global_bad_shift_rng();
      iVar4 = uVar1 % (uint)pcVar7 - iVar6;
      iVar5 = GLBL_some_search_dist_arr_[1];
      if (iVar4 < 0) {
        iVar5 = -GLBL_some_search_dist_arr_[1];
      }
      iVar4 = iVar4 + iVar5;
      uVar1 = global_bad_shift_rng();
      iVar6 = uVar1 % (uint)pcVar7 - iVar6;
      if (iVar6 < 0) {
        iVar6 = iVar6 - GLBL_some_search_dist_arr_[1];
      }
      else {
        iVar6 = iVar6 + GLBL_some_search_dist_arr_[1];
      }
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
    }
    if (local_20 == 0xe) {
      iVar4 = 0;
      local_30 = 0;
      param_1 = (vec3 *)0x0;
      iVar6 = 0;
    }
    else {
      if (iVar4 < 0x800001) {
        if (iVar4 < -0x800000) {
          iVar4 = -0x800000;
        }
      }
      else {
        iVar4 = 0x800000;
      }
      if (iVar6 < 0x800001) {
        if (iVar6 < -0x800000) {
          iVar6 = -0x800000;
        }
      }
      else {
        iVar6 = 0x800000;
      }
    }
    iVar5 = 5;
    do {
      iVar2 = iVar4 - local_30;
      iVar3 = GLBL_some_search_dist_arr_[5];
      if ((iVar2 <= GLBL_some_search_dist_arr_[5]) &&
         (iVar3 = iVar2, iVar2 < -GLBL_some_search_dist_arr_[5])) {
        iVar3 = -GLBL_some_search_dist_arr_[5];
      }
      local_30 = local_30 + iVar3;
      iVar2 = iVar6 - (int)param_1;
      iVar3 = GLBL_some_search_dist_arr_[5];
      if ((GLBL_some_search_dist_arr_[5] < iVar2) ||
         (iVar3 = -GLBL_some_search_dist_arr_[5], iVar2 < -GLBL_some_search_dist_arr_[5])) {
        iVar2 = iVar3;
      }
      param_1 = (vec3 *)((int)&param_1->x + iVar2);
      iVar3 = FUN_0041ae00();
      if (iVar3 == 1) {
        if ((2 < _DAT_005b29c4) && (uVar1 = global_bad_shift_rng(), (uVar1 & 3) == 0)) {
          local_10 = 0x1000000;
        }
        if ((3 < _DAT_005b29c4) && (uVar1 = global_bad_shift_rng(), (uVar1 & 3) == 0)) {
          uVar1 = global_bad_shift_rng();
          local_10 = (uVar1 & 3) << 0x17;
        }
      }
      iVar3 = FUN_0041abc0(&local_c,&local_18,&local_30,&param_1,&local_28,iVar3);
      *(int *)(iVar3 + 0xf0) = GLBL_some_search_dist_arr_[2];
      GLBL_some_search_dist_arr_[2] = GLBL_some_search_dist_arr_[2] + 1;
      if (local_24 != 0) {
        local_24 = 0;
        GLBL_some_sped_ll_head = iVar3;
      }
      if (local_1c != 0) {
        *(int *)(local_1c + 200) = iVar3;
      }
      iVar5 = iVar5 + -1;
      local_1c = iVar3;
    } while (iVar5 != 0);
    local_20 = local_20 + 1;
    pcVar7 = local_2c;
  } while (local_20 < 0xf);
  local_28 = (undefined *)((int)local_28 * 5);
  FUN_0041a830(&local_c,&local_18,&local_30,&param_1,&local_28);
  FUN_00419d70(&local_c,&local_18);
  return local_2c;
}

