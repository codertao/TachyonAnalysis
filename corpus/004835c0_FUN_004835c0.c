
void FUN_004835c0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  char *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_20 = (char *)&DAT_0056e3e0;
  FUN_0043bf10(&GLBL_UI_ELEM_LIST,s_MISC_CREDITS_ABR_005578c8);
  FUN_004834d0();
  local_1c = 0;
  uVar5 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s_BtnSP_d_005578c0,uVar5);
    set_button_state(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,4);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,0x2000);
    str_sprintf(&DAT_005a41e0,s_TxtSPShip_d_005578b4,uVar5);
    FUN_0043e6a0(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,&DAT_00562b14);
    str_sprintf(&DAT_005a41e0,s_TxtSPShipCr_d_005578a4,uVar5);
    FUN_0043e6a0(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,&DAT_00562b14);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 5);
  local_18 = 0;
  piVar6 = &DAT_0056f534;
  local_14 = 0x2e;
  do {
    if (0xf < local_1c) {
      return;
    }
    while ((*(int *)(local_20 + 0xfc) == 0 || (*(int *)(local_20 + 0xf4) == 0))) {
      local_1c = local_1c + 1;
      local_20 = local_20 + 0x100;
      if (0xf < local_1c) {
        return;
      }
    }
    if (*local_20 != '\0') {
      str_sprintf(piVar6 + -0x3c,local_20);
      iVar4 = Pak_Load(local_20 + 0x84,s_shipyard_shippak_00557890,local_20 + 0xa4);
      *piVar6 = iVar4;
      Model_SelectState(piVar6 + 1,0);
      if (*piVar6 != 0) {
        piVar2 = piVar6 + -0x34;
        piVar6[0x14] = 1;
        str_sprintf(piVar2,s_BtnSP_d_005578c0,local_18);
        piVar3 = piVar6 + -0x24;
        str_sprintf(piVar3,s_TxtSPShip_d_005578b4,local_18);
        piVar1 = piVar6 + -0x14;
        str_sprintf(piVar1,s_TxtSPShipCr_d_005578a4,local_18);
        set_button_state(&GLBL_UI_ELEM_LIST,piVar2,1);
        piVar6[0x11] = *piVar6;
        piVar6[1] = piVar6[1] + 0x80U | 0x10;
        piVar6[2] = 0x20000;
        piVar6[0xe] = 0x800000;
        piVar6[0x10] = -0x800000;
        iVar4 = Ui_FindButton(&GLBL_UI_ELEM_LIST,piVar2);
        piVar2 = piVar6 + -4;
        if (iVar4 == 0) {
          piVar6[-3] = local_14;
          *piVar2 = 8;
          piVar6[-2] = 100;
          piVar6[-1] = local_14 + 0x46;
        }
        else {
          *piVar2 = *(int *)(iVar4 + 0xd4) + 4;
          piVar6[-3] = *(int *)(iVar4 + 0xd8) + 4;
          piVar6[-2] = *(int *)(iVar4 + 200) + -8 + *piVar2;
          piVar6[-1] = *(int *)(iVar4 + 0xcc) + -8 + piVar6[-3];
        }
        local_10 = *piVar2;
        local_8 = piVar6[-2];
        local_4 = piVar6[-3];
        local_c = local_4 + -0x19;
        FUN_0043e5c0(&GLBL_UI_ELEM_LIST,piVar3,&local_10);
        FUN_0043e6a0(&GLBL_UI_ELEM_LIST,piVar3,local_20 + 0x20);
        local_c = piVar6[-1];
        local_10 = *piVar2;
        local_8 = piVar6[-2];
        local_4 = local_c + 0x19;
        FUN_0043e5c0(&GLBL_UI_ELEM_LIST,piVar1,&local_10);
        if (*(int *)(local_20 + 0xf0) == 0) {
          pcVar7 = s_SHIP_FOR_SALE_00557880;
        }
        else {
          pcVar7 = s_SHIP_OWNED_00557874;
        }
        FUN_0043e770(&GLBL_UI_ELEM_LIST,piVar1,pcVar7);
        FUN_00483520(piVar6 + 1,piVar2);
        iVar4 = FUN_0046f080(local_20);
        if (iVar4 != 0) {
          piVar6[8] = *(int *)(iVar4 + 0x58);
          piVar6[9] = *(int *)(iVar4 + 0x5c);
          piVar6[10] = *(int *)(iVar4 + 0x60);
        }
      }
    }
    local_1c = local_1c + 1;
    local_20 = local_20 + 0x100;
    local_14 = local_14 + 0x50;
    local_18 = local_18 + 1;
    piVar6 = piVar6 + 0x52;
  } while (local_14 < 0x1be);
  return;
}

