
void MpCfg_ResetMountHighlights(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = &DAT_00593098;
  iVar1 = 8;
  do {
    if (*(int *)(puVar2 + 0x9e4) == 0) {
      ImageArea_SetFrame(&g_UiManager,puVar2,0);
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      ImageArea_SetFrame(&g_UiManager,puVar2,9);
      uVar4 = 8;
      uVar3 = 8;
    }
    ImageArea_SetHighlight(&g_UiManager,puVar2,uVar3,uVar4);
    ImageArea_SetValueF4(&g_UiManager,puVar2,0);
    ImageArea_ClearFlags(&g_UiManager,puVar2 + 0x40,0x80000);
    set_flag_10c_on_elem_by_id(&g_UiManager,puVar2 + 0x40,0x400);
    puVar2 = puVar2 + 0xab4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = &DAT_00598658;
  iVar1 = 0x10;
  do {
    if (*(int *)(puVar2 + 0x9e4) == 0) {
      ImageArea_SetFrame(&g_UiManager,puVar2,0);
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      ImageArea_SetFrame(&g_UiManager,puVar2,9);
      uVar4 = 9;
      uVar3 = 9;
    }
    ImageArea_SetHighlight(&g_UiManager,puVar2,uVar3,uVar4);
    ImageArea_SetValueF4(&g_UiManager,puVar2,0);
    ImageArea_ClearFlags(&g_UiManager,puVar2 + 0x40,0x80000);
    set_flag_10c_on_elem_by_id(&g_UiManager,puVar2 + 0x40,0x400);
    puVar2 = puVar2 + 0xab4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

