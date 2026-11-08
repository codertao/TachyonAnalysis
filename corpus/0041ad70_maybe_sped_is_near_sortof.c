
undefined4 maybe_sped_is_near_sortof(vec3 *search_pos,int some_idx)

{
  uint uVar1;
  SpED *sped_comparison;
  int our_idx;
  
  our_idx = 0;
  if (GLBL_some_sped_ll_head != (SpED *)0x0) {
    sped_comparison = GLBL_some_sped_ll_head;
    do {
      if (some_idx + -10 <= our_idx) {
        return 0;
      }
      uVar1 = distance_between(search_pos,&sped_comparison->position);
      if (uVar1 < 0x7d0000) {
        return 1;
      }
      sped_comparison = *(SpED **)&sped_comparison->ll_next;
      our_idx = our_idx + 1;
    } while (sped_comparison != (SpED *)0x0);
  }
  return 0;
}

