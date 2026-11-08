
void FUN_0044b730(void)

{
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 local_b8 [68];
  undefined1 local_74 [112];
  undefined4 local_4;
  
  iVar5 = 0;
  bVar2 = false;
  puVar6 = &DAT_005928e0;
  do {
    str_sprintf(puVar6,s_mptach_d_dat_00545c50,iVar5);
    puVar1 = puVar6 + 0x30;
    str_sprintf(puVar1,s_EntryMPLogin_d_00547960,iVar5);
    uVar3 = FUN_00440400(&g_UiManager,puVar1);
    *(undefined4 *)(puVar6 + 0x84) = uVar3;
    iVar4 = File_Exists(puVar6);
    if (iVar4 == 0) {
      str_sprintf(puVar6 + 0x10,&DAT_00562b14);
    }
    else {
      File_ReadAll(puVar6,local_b8);
      str_sprintf(puVar6 + 0x10,local_b8);
      str_sprintf(puVar6 + 0x70,local_74);
      uVar3 = FUN_0044b9d0(local_74);
      *(undefined4 *)(puVar6 + 0x80) = uVar3;
      *(undefined4 *)(puVar6 + 0x88) = local_4;
      bVar2 = true;
    }
    FUN_00440270(&g_UiManager,puVar1);
    FUN_00440170(&g_UiManager,puVar1,puVar6 + 0x10,0x1f,FUN_0044b180,s_shadow12w_0054119c);
    str_sprintf(&DAT_005a41e0,s_BtnMPLoginSel_d_00547970,iVar5);
    Ui_SetButtonFlag(&g_UiManager,&DAT_005a41e0,4);
    puVar6 = puVar6 + 0x8c;
    iVar5 = iVar5 + 1;
  } while ((int)puVar6 < 0x592e58);
  if (!bVar2) {
    str_sprintf(&DAT_005928f0,s_Jake_Logan_00547a34);
    str_sprintf(&DAT_00592950,DAT_00592e58 + 0x18);
    DAT_00592960 = FUN_0044b9d0(DAT_00592e58 + 0x18);
    DAT_00592968 = FUN_004580c0(s_GALSPAN_00533548);
    GLBL_spacesav[0x29] = 0;
    str_sprintf(&DAT_005a41e0,s_BtnMPLoginSel0_00547a24);
    Ui_SetButtonFlag(&g_UiManager,&DAT_005a41e0,4);
  }
  return;
}

