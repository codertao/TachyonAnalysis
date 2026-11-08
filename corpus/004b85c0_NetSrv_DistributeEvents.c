
/* run delivery filter 0x6af7cc per player, queue copies */

void NetSrv_DistributeEvents(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (DAT_006af69c != 0) {
    uVar3 = 0;
    iVar2 = DAT_006af69c;
    piVar4 = DAT_006af660;
    if (DAT_006af788 != 0) {
      do {
        iVar1 = iVar2;
        if (*piVar4 != 0) {
          for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
            iVar2 = (*DAT_006af7cc)(piVar4,iVar1);
            if (iVar2 != 0) {
              NetSrv_QueueEventForPlayer(piVar4,iVar1);
            }
            iVar2 = DAT_006af69c;
          }
        }
        piVar4 = (int *)((int)piVar4 + DAT_006af78c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_006af788);
    }
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_004b78a0(&GLBL_maybe_mem_pool_of_size,iVar2);
      iVar2 = iVar1;
    }
    DAT_006af69c = 0;
  }
  return;
}

