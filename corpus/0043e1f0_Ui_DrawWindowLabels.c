
/* sweep */

void Ui_DrawWindowLabels(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = Ui_FindWindowDef(param_1,param_2);
  pcVar4 = *(char **)(param_1 + 0x24);
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xf0) & 2) != 0)) {
    if (DAT_00564ae4 == 0) {
      Gfx_Lock(0x100);
    }
    param_2 = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      do {
        if (*pcVar4 == '\0') {
          return;
        }
        iVar3 = __stricmp(pcVar4 + 0x40,iVar2);
        if ((((iVar3 == 0) && (*(int *)(iVar2 + 0x44) < 0x281)) && (*(int *)(iVar2 + 0x48) < 0x1e1))
           && (*(int *)(pcVar4 + 0x104) != 0)) {
          puVar1 = (uint *)(pcVar4 + 0x11c);
          if ((*(uint *)(pcVar4 + 0x11c) & 0x10000) == 0) {
            if ((*(byte *)(iVar2 + 0xf0) & 4) != 0) {
              *puVar1 = *(uint *)(pcVar4 + 0x11c) | 4;
            }
            if ((*puVar1 & 4) != 0) {
              iVar3 = *(int *)(pcVar4 + 0x108);
              if (iVar3 != 0) {
                *(uint *)(iVar3 + 0x11c) = *(uint *)(iVar3 + 0x11c) | 4;
                *(undefined4 *)(iVar3 + 0x120) = *(undefined4 *)(pcVar4 + 0x120);
              }
              if (DAT_00564ae4 == 0) {
                Label_DrawFormatted(param_1,*(undefined4 *)(pcVar4 + 0x104),pcVar4 + 0x80,
                                    *(undefined4 *)(iVar2 + 0xec),pcVar4 + 0x10c,
                                    *(undefined4 *)(iVar2 + 0x44),*(undefined4 *)(iVar2 + 0x48),
                                    *puVar1,*(undefined4 *)(pcVar4 + 0x120),pcVar4[0x100],
                                    *(undefined4 *)(pcVar4 + 0x124),pcVar4 + 0x128);
              }
              else {
                Label_MeasureFormatted
                          (param_1,*(undefined4 *)(pcVar4 + 0x104),pcVar4 + 0x80,0,pcVar4 + 0x10c,
                           *(undefined4 *)(iVar2 + 0x44),*(undefined4 *)(iVar2 + 0x48),*puVar1,
                           *(undefined4 *)(pcVar4 + 0x120),pcVar4[0x100],
                           *(undefined4 *)(pcVar4 + 0x124),pcVar4 + 0x128,
                           *(undefined4 *)(pcVar4 + 300));
              }
              if (DAT_00564ae4 == 0) {
                clear_flags(puVar1,4);
              }
              if ((*puVar1 & 0x40000) != 0) {
                sbi_flags(puVar1,4);
              }
            }
          }
        }
        param_2 = param_2 + 1;
        pcVar4 = pcVar4 + 0x134;
      } while (param_2 < *(uint *)(param_1 + 0x58));
    }
  }
  return;
}

