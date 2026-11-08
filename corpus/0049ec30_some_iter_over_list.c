
undefined4 some_iter_over_list(void)

{
  int iVar1;
  
  if (GLBL_someinput_iter_at != GLBL_someinput_MAX_CNT) {
    iVar1 = GLBL_someinput_iter_at * 4;
    GLBL_someinput_iter_at = GLBL_someinput_iter_at + 1 & 0x7f;
    return *(undefined4 *)(&GLBL_someinput_array_of_ints + iVar1);
  }
  return 0;
}

