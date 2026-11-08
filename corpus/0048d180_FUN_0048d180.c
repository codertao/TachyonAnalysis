
void FUN_0048d180(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = GLBL_llist_large_thing;
  if (GLBL_llist_large_thing == 0) {
    GLBL_llist_large_thing = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar2 + 0x2b8);
    OurFreeMem(iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  GLBL_llist_large_thing = iVar1;
  return;
}

