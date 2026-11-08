
/* returns body ptr (node+0x28) */

int NetCli_AllocEvent(void)

{
  int iVar1;
  
  iVar1 = something_list_related_get_next(&DAT_006af5e4);
  if (iVar1 != 0) {
    return iVar1 + 0x28;
  }
  return 0;
}

