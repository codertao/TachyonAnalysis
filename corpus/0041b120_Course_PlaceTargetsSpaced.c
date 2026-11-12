
/* sweep */

void Course_PlaceTargetsSpaced(vec3 *param_1)

{
  undefined4 uVar1;
  int keep_looping;
  
  do {
    uVar1 = Course_PlaceTargets(param_1);
    keep_looping = any_some_speds_are_sortof_near();
  } while (keep_looping != 0);
  GLBL_some_search_dist_arr_[1] = GLBL_some_search_dist_arr_[1] + 0x60000;
  GLBL_some_search_dist_arr_[0] = uVar1;
  GLBL_some_search_dist_arr_[5] = GLBL_some_search_dist_arr_[5] + 18000;
  if (0x600000 < GLBL_some_search_dist_arr_[1]) {
    GLBL_some_search_dist_arr_[1] = 0x600000;
    GLBL_some_search_dist_arr_[3] = GLBL_some_search_dist_arr_[2];
    return;
  }
  GLBL_some_search_dist_arr_[3] = GLBL_some_search_dist_arr_[2];
  return;
}

