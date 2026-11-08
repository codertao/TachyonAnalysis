
void FUN_0047f150(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_2d0 [128];
  int local_d0;
  int local_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 *local_a0;
  undefined1 local_9c [128];
  uint local_1c;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  piVar1 = (int *)FUN_004699f0(s_NEWS_TICKER_00552cd0);
  FUN_0047eab0();
  FUN_0048d0a0(piVar1);
  FUN_0048d1f0(0xffffffff,0);
  iVar2 = FUN_0043ba90(&GLBL_UI_ELEM_LIST,s_SHADOW12w_0054e750);
  local_14 = iVar2;
  iVar3 = FUN_0043ba90(&GLBL_UI_ELEM_LIST,s_SHADOW12b_00552cc4);
  local_c = iVar3;
  iVar4 = FUN_0043ba90(&GLBL_UI_ELEM_LIST,s_SHADOW12o_00552cb8);
  if (((iVar2 != 0) && (iVar3 != 0)) && (iVar4 != 0)) {
    puVar5 = local_2d0;
    for (iVar2 = 0xaf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_1c = local_1c | 1;
    local_c0 = *(undefined1 *)(iVar4 + 0xb0);
    local_c1 = *(undefined1 *)(iVar4 + 0xb4);
    local_c2 = *(undefined1 *)(iVar4 + 0xb8);
    local_bd = *(undefined1 *)(iVar4 + 0xfc);
    local_be = *(undefined1 *)(iVar4 + 0x100);
    local_bf = *(undefined1 *)(iVar4 + 0x104);
    uVar6 = 0;
    local_8 = 0;
    iVar2 = DAT_00589738;
    local_cc = iVar4;
    if (DAT_00589734 != 0) {
      do {
        if (((*(int *)(iVar2 + 0xf8) != 0) && (*(int *)(iVar2 + 0xfc) != 0)) &&
           ((*(int **)(iVar2 + 0xb8) != (int *)0x0 && (**(int **)(iVar2 + 0xb8) != 0)))) {
          local_8 = local_8 + 1;
          local_d0 = local_14;
          if ((local_8 & 1) == 0) {
            local_d0 = local_c;
          }
          local_c6 = *(undefined1 *)(local_d0 + 0xb0);
          local_c7 = *(undefined1 *)(local_d0 + 0xb4);
          local_c8 = *(undefined1 *)(local_d0 + 0xb8);
          local_c3 = *(undefined1 *)(local_d0 + 0xfc);
          local_c4 = *(undefined1 *)(local_d0 + 0x100);
          local_c5 = *(undefined1 *)(local_d0 + 0x104);
          local_a0 = &LAB_0047ed80;
          str_sprintf(local_9c,iVar2);
          str_sprintf(local_2d0,**(undefined4 **)(iVar2 + 0xb8));
          iVar3 = FUN_0048d280(local_2d0);
          if (iVar3 != 0) {
            local_10 = (piVar1[2] - *piVar1 >> 1) + *piVar1;
            FUN_0047e9c0(iVar2,iVar3 + 0x228,
                         (uint)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x10 |
                         (int)((ulonglong)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x20) <<
                         0x10);
          }
        }
        uVar6 = uVar6 + 1;
        iVar2 = iVar2 + 0x100;
      } while (uVar6 < DAT_00589734);
    }
  }
  return;
}

