
/* sweep: guess */

void Ui_CloseWindow(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  
  iVar1 = Ui_FindWindowDef(param_1,param_2);
  iVar3 = *(int *)(param_1 + 0x14);
  pcVar5 = *(char **)(param_1 + 0x18);
  uVar4 = 0;
  if (iVar1 != 0) {
    clear_flags(iVar1 + 0xf0,2);
    *(undefined4 *)(iVar1 + 0x10c) = 0;
    if (*(int *)(iVar1 + 0xe8) != 0) {
      MnuImage_Free(param_1,*(int *)(iVar1 + 0xe8));
      *(undefined4 *)(iVar1 + 0xe8) = 0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      do {
        if (*pcVar5 == '\0') break;
        iVar2 = __stricmp(pcVar5 + 0x40,iVar1);
        if (iVar2 == 0) {
          if (*(int *)(pcVar5 + 0x1e8) != 0) {
            MnuImage_Free(param_1,*(int *)(pcVar5 + 0x1e8));
            pcVar5[0x1e8] = '\0';
            pcVar5[0x1e9] = '\0';
            pcVar5[0x1ea] = '\0';
            pcVar5[0x1eb] = '\0';
          }
          if ((*(int *)(pcVar5 + 0x1f8) != 8) && (*(int *)(pcVar5 + 0x1f8) != 0x10)) {
            set_button_state(param_1,pcVar5,1);
            iVar2 = find_ui_elem_by_name(param_1,pcVar5);
            if (iVar2 != 0) {
              *(undefined4 *)(iVar2 + 0x120) = *(undefined4 *)(pcVar5 + 0x1f8);
            }
          }
        }
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 0x23c;
      } while (uVar4 < *(uint *)(param_1 + 0x4c));
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      piVar6 = (int *)(iVar3 + 0xd4);
      do {
        iVar3 = __stricmp(piVar6 + -0x25,iVar1);
        if ((iVar3 == 0) && (*piVar6 != 0)) {
          MnuImage_Free(param_1,*piVar6);
          *piVar6 = 0;
        }
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 0x4c;
      } while (uVar4 < *(uint *)(param_1 + 0x48));
    }
  }
  return;
}

