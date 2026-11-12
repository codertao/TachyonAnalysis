
void MpCfg_HighlightMounts(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_4;
  
  puVar5 = (undefined4 *)0x0;
  iVar3 = 0;
  local_4 = 0;
  MpCfg_ResetMountHighlights();
  if (g_CfgMode == 0) {
    puVar5 = &g_MpCfgWeaponMounts;
    iVar3 = 8;
  }
  else if (g_CfgMode == 1) {
    puVar5 = &g_MpCfgHwSlots;
    iVar3 = 0x10;
    local_4 = g_CfgMode;
  }
  if (iVar3 != 0) {
    puVar4 = puVar5 + 0x2e;
    do {
      if (puVar4[-2] != 0) {
        if (local_4 == 0) {
          uVar2 = Mount_Accepts(param_1,puVar5);
        }
        else {
          iVar1 = Mount_Accepts(param_1,puVar5);
          uVar2 = (uint)(iVar1 == 0);
        }
        if (uVar2 != 0) {
          ImageArea_SetHighlight(&g_UiManager,puVar4,1,puVar4[0x28] + -2);
          ImageArea_SetValueF4(&g_UiManager,puVar4,1);
          set_flag_10c_on_elem_by_id(&g_UiManager,puVar4 + 0x10,0x80000);
        }
      }
      puVar5 = puVar5 + 0x2ad;
      puVar4 = puVar4 + 0x2ad;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

