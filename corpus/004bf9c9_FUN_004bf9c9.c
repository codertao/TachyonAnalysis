
void FUN_004bf9c9(void)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = 0x14;
  if (DAT_006caec0 == 0) {
    iVar1 = 0x200;
  }
  else if (0x13 < DAT_006caec0) goto LAB_004bf9e8;
  DAT_006caec0 = iVar1;
LAB_004bf9e8:
  DAT_006c9ea0 = FUN_004c6219(DAT_006caec0,4);
  if (DAT_006c9ea0 == 0) {
    DAT_006caec0 = 0x14;
    DAT_006c9ea0 = FUN_004c6219(0x14,4);
    if (DAT_006c9ea0 == 0) {
      __amsg_exit(0x1a);
    }
  }
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_00561610;
  do {
    *(undefined ***)(iVar1 + DAT_006c9ea0) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar1 = iVar1 + 4;
  } while ((int)ppuVar2 < 0x561890);
  uVar3 = 0;
  puVar4 = &DAT_00561620;
  do {
    iVar1 = *(int *)((&DAT_006c9d80)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar3 = uVar3 + 1;
  } while ((int)puVar4 < 0x561680);
  return;
}

