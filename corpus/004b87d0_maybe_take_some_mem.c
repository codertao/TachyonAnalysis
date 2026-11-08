
int maybe_take_some_mem(void)

{
  int iVar1;
  
  iVar1 = something_list_related_get_next(&GLBL_maybe_mem_pool_of_size);
  if (iVar1 != 0) {
    return iVar1 + 0x3c;
  }
  return 0;
}

