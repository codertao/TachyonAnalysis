
void FUN_0042b6a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_005b01d0;
  if (DAT_005b01d0 == 0) {
    DAT_005b01d0 = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_004281a0(iVar2 + 0x1c,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x9c),
                 *(undefined4 *)(iVar2 + 0xa0),*(undefined4 *)(iVar2 + 0xa4),
                 *(undefined4 *)(iVar2 + 0xa8),*(undefined4 *)(iVar2 + 0xac));
    FUN_004b7930(iVar2,&DAT_005b01d0);
    FUN_004b78a0(&DAT_005b01ac,iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  DAT_005b01d0 = iVar1;
  return;
}

