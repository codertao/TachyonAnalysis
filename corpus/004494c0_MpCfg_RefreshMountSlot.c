
/* sweep */

void MpCfg_RefreshMountSlot(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar5 = &DAT_00593080;
  puVar4 = &DAT_00593020;
  iVar3 = 0;
  do {
    puVar7 = (undefined4 *)(puVar5 + -0xa0);
    for (iVar2 = 0x2ad; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    iVar2 = iVar3 + 1;
    str_sprintf(puVar5 + -0xa0,s_LOAD_MOUNT__d_00547878,iVar2);
    *(int *)(puVar5 + 0x14) = iVar3;
    str_sprintf(puVar4 + -0x20,s_MOUNT__d_0053fa18,iVar2);
    str_sprintf(puVar4,s_STORE__d_0054786c,iVar2);
    str_sprintf(puVar5 + 0x18,s_IACFGWeapBG_d_0054785c,iVar3);
    str_sprintf(puVar5 + 0x58,s_IACFGWeapIcon_d_0054784c,iVar3);
    str_sprintf(puVar5 + -0x40,s_TxtCFGWeap_d_0054783c,iVar2);
    str_sprintf(puVar5,&DAT_00562b14);
    Ui_SetLabelText(&g_UiManager,puVar5 + -0x40,puVar5);
    sbi_label_flags_11c(&g_UiManager,puVar4 + 0x20,0x10000);
    set_flag_10c_on_elem_by_id(&g_UiManager,puVar5 + 0x18,0x20000);
    set_flag_10c_on_elem_by_id(&g_UiManager,puVar5 + 0x58,0x20000);
    puVar4 = puVar4 + 0xab4;
    puVar5 = puVar5 + 0xab4;
    iVar3 = iVar2;
  } while ((int)puVar4 < 0x5985c0);
  puVar4 = &DAT_00598658;
  uVar6 = 0;
  do {
    puVar7 = (undefined4 *)(puVar4 + -0xb8);
    for (iVar3 = 0x2ad; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    uVar1 = uVar6 + 1;
    str_sprintf(puVar4 + -0xb8,s_CARD_MOUNT__d_00545cbc,uVar1);
    *(uint *)(puVar4 + -4) = uVar6;
    str_sprintf(puVar4,s_IACFGCardBG_d_0054782c,uVar6);
    str_sprintf(puVar4 + 0x40,s_IACFGCardIcon_d_0054781c,uVar6);
    set_flag_10c_on_elem_by_id(&g_UiManager,puVar4,0x20000);
    set_flag_10c_on_elem_by_id(&g_UiManager,puVar4 + 0x40,0x20000);
    puVar4 = puVar4 + 0xab4;
    uVar6 = uVar1;
  } while (uVar1 < 0x10);
  return;
}

