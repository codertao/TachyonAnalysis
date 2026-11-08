
void FUN_00443560(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_4;
  
  iVar4 = DAT_00562c04;
  iVar2 = DAT_00562c08 + -8;
  iVar6 = 0;
  DAT_005a4020 = DAT_005a4020 + param_1;
  local_4 = 0;
  if ((DAT_005a4020 < 0) || (iVar2 < 0)) {
    DAT_005a4020 = 0;
  }
  else if (iVar2 < DAT_005a4020) {
    DAT_005a4020 = iVar2;
  }
  uVar1 = FUN_00443420(GLBL_spacesav[0x13]);
  uVar8 = 0;
  if (DAT_005a4000 != 0) {
    do {
      if (DAT_005a4020 <= iVar6) {
        if (uVar8 < DAT_005a4000) {
          iVar2 = iVar4 + 0x50;
          piVar5 = &DAT_005a40c0;
          goto LAB_00443601;
        }
        break;
      }
      iVar2 = str_cmp(iVar4,uVar1);
      if (iVar2 == 0) {
        iVar6 = iVar6 + 1;
      }
      iVar4 = iVar4 + 0xb8;
      uVar8 = uVar8 + 1;
    } while (uVar8 < DAT_005a4000);
  }
  goto LAB_004436e0;
LAB_00443601:
  do {
    iVar6 = str_cmp(iVar4,uVar1);
    if (iVar6 == 0) {
      *piVar5 = iVar4;
      str_sprintf(&DAT_005a41e0,s_BtnHostGameSlot_d_00540ff4,local_4);
      iVar3 = FUN_0048e820(DAT_005a40b8,s_TITLES_00540fec,iVar2 + 0x10);
      iVar6 = iVar2;
      if (iVar3 != 0) {
        iVar6 = iVar3;
      }
      FUN_0043cc80(&g_UiManager,&DAT_005a41e0,iVar6);
      if (*(uint *)(iVar2 + 0x60) < GLBL_spacesav[0]) {
        set_button_state(&g_UiManager,&DAT_005a41e0,8);
        iVar6 = str_cmp(iVar2 + -0x10,&DAT_005a4010);
        if (iVar6 != 0) {
          FUN_004434a0(0xffffffff);
        }
      }
      else {
        set_button_state(&g_UiManager,&DAT_005a41e0,1);
      }
      local_4 = local_4 + 1;
      piVar5 = piVar5 + 1;
      if (0x5a40df < (int)piVar5) break;
    }
    iVar4 = iVar4 + 0xb8;
    iVar2 = iVar2 + 0xb8;
    uVar8 = uVar8 + 1;
  } while (uVar8 < DAT_005a4000);
LAB_004436e0:
  if (local_4 < 8) {
    puVar7 = &DAT_005a40c0 + local_4;
    do {
      *puVar7 = 0;
      str_sprintf(&DAT_005a41e0,s_BtnHostGameSlot_d_00540ff4,local_4);
      FUN_0043cc80(&g_UiManager,&DAT_005a41e0,&DAT_00562b14);
      set_button_state(&g_UiManager,&DAT_005a41e0,8);
      puVar7 = puVar7 + 1;
      local_4 = local_4 + 1;
    } while ((int)puVar7 < 0x5a40e0);
  }
  return;
}

