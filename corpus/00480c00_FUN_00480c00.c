
void FUN_00480c00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if (param_1 != 0) {
    pcVar4 = (char *)(param_1 + 0x90);
    do {
      if (*(int **)(pcVar4 + -0x90) == (int *)0x0) {
        return;
      }
      iVar3 = *(int *)(pcVar4 + -0x48);
      if (iVar3 != 0) {
        do {
          if (*(int *)(iVar3 + 0x24) == **(int **)(pcVar4 + -0x90)) {
            if (iVar3 != 0) {
              if (((pcVar4[-0x40] != '\0') &&
                  (iVar1 = Ui_FindButton(DAT_00571280,pcVar4 + -0x40), *pcVar4 != '\0')) &&
                 (iVar1 != 0)) {
                FUN_0043f6e0(DAT_00571280,pcVar4,pcVar4 + 0x40);
                uVar2 = find_ui_elem_by_id_(DAT_00571280,pcVar4,0xff);
                Ui_AddTextToWindow(DAT_00571280,uVar2);
                FUN_0043f6e0(DAT_00571280,pcVar4,pcVar4 + 0x80);
                uVar2 = find_ui_elem_by_id_(DAT_00571280,pcVar4,0xff);
                Ui_AddTextToWindow(DAT_00571280,uVar2);
                FUN_0043f6e0(DAT_00571280,pcVar4,pcVar4 + 0xc0);
                uVar2 = find_ui_elem_by_id_(DAT_00571280,pcVar4,0xff);
                Ui_AddTextToWindow(DAT_00571280,uVar2);
                FUN_00480af0(*(undefined4 *)(iVar3 + 0x24),pcVar4 + -0x90);
                FUN_0043f650(DAT_00571280,pcVar4,*(undefined4 *)(iVar1 + 0xd4),
                             *(undefined4 *)(iVar1 + 0xd8));
                set_flag_10c_on_elem_by_id(DAT_00571280,pcVar4,0x200000);
              }
              FUN_0043e770(DAT_00571280,pcVar4 + -0x88,iVar3 + 0x28);
              iVar3 = find_ui_elem_by_name(DAT_00571280,pcVar4 + -0x88);
              if (iVar3 != 0) {
                Ui_RefreshWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0,iVar3 + 0x10c,0);
              }
              goto LAB_00480c45;
            }
            break;
          }
          iVar3 = *(int *)(iVar3 + 0x68);
        } while (iVar3 != 0);
      }
      FUN_00480dc0(pcVar4 + -0x90,0);
LAB_00480c45:
      bVar5 = pcVar4 != (char *)0xffffff00;
      pcVar4 = pcVar4 + 400;
    } while (bVar5);
  }
  return;
}

