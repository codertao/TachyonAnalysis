
undefined4 any_some_speds_are_sortof_near(void)

{
  int iVar1;
  int ll_idx;
  int ll_ptr;
  
  ll_idx = 0;
  ll_ptr = GLBL_some_sped_ll_head;
  while( true ) {
    if (ll_ptr == 0) {
      return 0;
    }
    iVar1 = maybe_sped_is_near_sortof(ll_ptr + 0x34,ll_idx);
    if (iVar1 != 0) break;
    ll_ptr = *(int *)(ll_ptr + 200);
    ll_idx = ll_idx + 1;
  }
  return 1;
}

