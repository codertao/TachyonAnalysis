
void overwrite_some_globals(void)

{
  clr_bytes(GLBL_some_search_dist_arr_,0x18);
  GLBL_some_search_dist_arr_[0] = 0x120000;
  GLBL_some_search_dist_arr_[5] = 0x80000;
  return;
}

