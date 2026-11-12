
/* sweep: INPUT_REMAPPED */

void Options_PollKeyRemap(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_4c;
  int local_40 [8];
  undefined1 local_20 [32];
  
  iVar9 = 0;
  iVar8 = 0;
  local_4c = -1;
  if (0 < DAT_00556a20) {
    DAT_00556a20 = DAT_00556a20 + -1;
    return;
  }
  if (DAT_00556a20 == 0) {
    DAT_00563d6c = 0;
    DAT_00562bd0 = 0;
    Ui_SetVar2bd4(0);
    DAT_00556a20 = 0xffffffff;
    return;
  }
  iVar1 = DAT_00563d70 + DAT_00563d60;
  uVar3 = some_iter_over_list();
  if ((((uVar3 != 0) && (cVar2 = (char)uVar3, cVar2 != '\x10')) && (cVar2 != '\0')) &&
     (cVar2 != '\x11')) {
    iVar9 = (uVar3 >> 0x10) + (uVar3 & 0xff);
  }
  if (DAT_00603e48 != 0) {
    if ((DAT_00603e48 & 1) == 0) {
      if ((DAT_00603e48 & 0x10) == 0) {
        if ((DAT_00603e48 & 2) != 0) {
          iVar8 = 2;
        }
      }
      else {
        iVar8 = 0x10;
      }
    }
    else {
      iVar8 = 1;
    }
  }
  Input_SampleAxes();
  iVar7 = local_4c;
  if (DAT_005640c0 != 0) {
    iVar6 = 0;
    puVar4 = &DAT_0053cb30;
    do {
      iVar7 = iVar6;
      if ((*puVar4 & DAT_005640c0) != 0) break;
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + 1;
      iVar7 = local_4c;
    } while ((int)puVar4 < 0x53cbb0);
  }
  local_4c = iVar7;
  if (iVar9 == 0) {
    if ((iVar8 == 0) && (local_4c == -1)) {
      return;
    }
  }
  else if (iVar9 == 0x1b) goto LAB_00481b48;
  piVar5 = *(int **)(DAT_00563d64 + iVar1 * 4);
  piVar10 = local_40;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar10 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar10 = piVar10 + 1;
  }
  iVar1 = local_40[3];
  if (((iVar9 == 0) && (iVar9 = local_40[1], iVar1 = iVar8, iVar8 == 0)) &&
     (iVar1 = local_40[3], local_4c != -1)) {
    local_40[2] = local_4c;
  }
  local_40[3] = iVar1;
  local_40[1] = iVar9;
  iVar9 = KeyCfg_WriteAction(local_40);
  if (iVar9 == 0) {
    KeyCfg_WriteActionList(local_40);
    Ui_SetLabelText(DAT_00571280,s_TxtOptP4MsgTxt_00556da8,&DAT_00562b14);
  }
  else {
    piVar5 = (int *)Rtxt_Lookup(DAT_00563d68,s_remap_messages_00556db8,s_INPUT_REMAPPED_00556dd4);
    if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
      Ui_SetLabelText(DAT_00571280,s_TxtOptP4MsgTxt_00556da8,*piVar5);
    }
    KeyCfg_WriteActionList(local_40);
  }
LAB_00481b48:
  str_sprintf(local_20,s_BtnOptP4KeyMap__2d_00556d94,DAT_00563d70);
  set_button_state(DAT_00571280,local_20,1);
  Options_RefreshKeyMapPage();
  DAT_00556a20 = 0xf;
  return;
}

