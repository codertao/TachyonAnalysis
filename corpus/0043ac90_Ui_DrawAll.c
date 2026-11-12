
/* sweep */

void Ui_DrawAll(uint param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  uint local_4;
  
  iVar1 = param_1;
  pcVar3 = *(char **)(param_1 + 0xc);
  if ((DAT_00564ae4 == 0) && (uVar5 = 0, *(int *)(param_1 + 0x40) != 0)) {
    do {
      if (*pcVar3 == '\0') break;
      if ((pcVar3[0xf0] & 2U) != 0) {
        Ui_DrawWindowContents(param_1,pcVar3);
        Ui_DrawWindowImageAreas(param_1,pcVar3);
      }
      uVar5 = uVar5 + 1;
      pcVar3 = pcVar3 + 0x114;
    } while (uVar5 < *(uint *)(param_1 + 0x40));
  }
  local_4 = 0;
  do {
    pcVar3 = *(char **)(iVar1 + 0xc);
    param_1 = 0;
    if (*(int *)(iVar1 + 0x40) != 0) {
      puVar4 = (uint *)(pcVar3 + 0xf0);
      do {
        if (*pcVar3 == '\0') break;
        if (((*puVar4 & 2) != 0) && (local_4 == puVar4[-0x2c])) {
          Gfx_Lock(1);
          if ((*puVar4 & 4) != 0) {
            *puVar4 = *puVar4 | 0x200;
          }
          if (((*puVar4 & 0x200) != 0) && ((*puVar4 & 0x400) == 0)) {
            if ((code *)puVar4[8] != (code *)0x0) {
              (*(code *)puVar4[8])(pcVar3);
            }
            if (puVar4[-2] != 0) {
              if ((undefined4 *)puVar4[5] != (undefined4 *)0x0) {
                *(undefined4 *)puVar4[5] = DAT_005a67a0;
                copy_str32_to_some_global(puVar4[5]);
              }
              if (DAT_00564ae4 == 0) {
                Mnu_DrawWindowImage(iVar1,pcVar3,puVar4[-2],puVar4[-0x2b],puVar4[-0x2a],puVar4 + 1);
                clear_flags(puVar4,0x200);
                puVar4[1] = 0;
                puVar4[2] = 0;
                puVar4[3] = 0;
                puVar4[4] = 0;
              }
              else {
                Mnu_DrawWindowImage(iVar1,pcVar3,puVar4[-2],puVar4[-0x2b],puVar4[-0x2a],0);
              }
            }
            if ((code *)puVar4[7] != (code *)0x0) {
              (*(code *)puVar4[7])(pcVar3);
            }
          }
          Gfx_Lock(1);
          Ui_DrawWindowButtons(iVar1,pcVar3);
          Ui_DrawWindowImageAreas2(iVar1,pcVar3);
          iVar2 = Ui_CountDirtyLabels(iVar1,pcVar3);
          if (iVar2 != 0) {
            Ui_DrawWindowLabels(iVar1,pcVar3);
          }
        }
        param_1 = param_1 + 1;
        pcVar3 = pcVar3 + 0x114;
        puVar4 = puVar4 + 0x45;
      } while (param_1 < *(uint *)(iVar1 + 0x40));
    }
    local_4 = local_4 + 1;
    if (4 < local_4) {
      if (DAT_005a4b40 != (code *)0x0) {
        (*DAT_005a4b40)(iVar1);
      }
      return;
    }
  } while( true );
}

