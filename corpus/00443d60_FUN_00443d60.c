
void FUN_00443d60(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 local_b8 [184];
  
  iVar4 = 0;
  puVar5 = &g_ProfileSlots;
  do {
    str_sprintf(puVar5,s_tachyon_d_dat_005411b8,iVar4);
    puVar1 = puVar5 + 0x30;
    str_sprintf(puVar1,s_EntryLogin_d_005411a8,iVar4);
    uVar2 = FUN_00440400(&g_UiManager,puVar1);
    *(undefined4 *)(puVar5 + 0x84) = uVar2;
    iVar3 = File_Exists(puVar5);
    if (iVar3 == 0) {
      str_sprintf(puVar5 + 0x10,&DAT_00562b14);
    }
    else {
      File_ReadAll(puVar5,local_b8);
      str_sprintf(puVar5 + 0x10,local_b8);
    }
    FUN_00440270(&g_UiManager,puVar1);
    FUN_00440170(&g_UiManager,puVar1,puVar5 + 0x10,0x1f,FUN_00444450,s_shadow12w_0054119c);
    str_sprintf(&DAT_005a41e0,s_BtnLoginSel_d_0054118c,iVar4);
    Ui_SetButtonFlag(&g_UiManager,&DAT_005a41e0,4);
    puVar5 = puVar5 + 0x8c;
    iVar4 = iVar4 + 1;
  } while ((int)puVar5 < 0x5a3ef8);
  return;
}

