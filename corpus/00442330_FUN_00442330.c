
void FUN_00442330(uint param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  
  bVar6 = (param_1 & 0xff00) == 0;
  ppuVar4 = &PTR_GLBL_spacesav_89__005400c0;
  if (!bVar6) {
    param_1 = param_1 & 0xff;
  }
  puVar5 = (undefined *)(param_1 - 1);
  if (PTR_GLBL_spacesav_89__005400c0 == (undefined *)0x0) {
    return;
  }
  while ((ppuVar4[2] != puVar5 || (ppuVar4[1] != GLBL_spacesav[0x13]))) {
    ppuVar1 = ppuVar4 + 0x25;
    ppuVar4 = ppuVar4 + 0x25;
    if (*ppuVar1 == (undefined *)0x0) {
      return;
    }
  }
  iVar3 = *(int *)*ppuVar4;
  if (bVar6) {
    iVar3 = iVar3 + 1;
  }
  else {
    iVar3 = iVar3 + -1;
  }
  *(int *)*ppuVar4 = iVar3;
  if (*(int *)*ppuVar4 < (int)ppuVar4[0x23]) {
    *(undefined **)*ppuVar4 = ppuVar4[0x24];
  }
  if ((int)ppuVar4[0x24] < *(int *)*ppuVar4) {
    *(undefined **)*ppuVar4 = ppuVar4[0x23];
  }
  if (*(char *)(ppuVar4 + 0xb) == '\0') {
    puVar2 = (undefined4 *)*ppuVar4;
    puVar5 = &DAT_005a40e0 + (int)puVar5 * 8;
    if (puVar2 == &DAT_00562bfc) {
      uVar7 = (&DAT_005400b0)[DAT_00562bfc];
      goto LAB_00442413;
    }
  }
  else {
    str_sprintf(&DAT_005a41e0,&DAT_00540a28,ppuVar4 + 0xb,*(undefined4 *)*ppuVar4);
    iVar3 = FUN_0043bf10(&g_UiManager,&DAT_005a41e0);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x40) != 0)) {
      FUN_0043e6a0(&g_UiManager,ppuVar4 + 0x13,*(int *)(iVar3 + 0x40));
      return;
    }
    puVar2 = (undefined4 *)*ppuVar4;
    puVar5 = &DAT_005a40e0 + (int)puVar5 * 8;
  }
  uVar7 = *puVar2;
LAB_00442413:
  str_sprintf(puVar5,&DAT_00535eb8,uVar7);
  FUN_0043e6a0(&g_UiManager,ppuVar4 + 0x13,puVar5);
  return;
}

