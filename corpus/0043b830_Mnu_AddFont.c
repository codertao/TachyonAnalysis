
/* sweep */

char * Mnu_AddFont(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  pcVar1 = (char *)Mnu_FindFont(param_1,param_2);
  if (param_2 != (undefined4 *)0x0) {
    if (pcVar1 != (char *)0x0) {
      return pcVar1;
    }
    uVar2 = *(uint *)(param_1 + 0x50);
    uVar5 = 0;
    pcVar1 = *(char **)(param_1 + 0x1c);
    if (uVar2 != 0) {
      do {
        if (*pcVar1 == '\0') {
          iVar3 = Mnu_FindFontByFile(param_1,param_2 + 0x10);
          puVar7 = param_2;
          pcVar8 = pcVar1;
          for (iVar6 = 0x99; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pcVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            pcVar8 = pcVar8 + 4;
          }
          if (iVar3 == 0) {
            Font_LoadTagged((char *)(param_2 + 0x10),pcVar1 + 0x50,10,0xa000);
          }
          else {
            puVar7 = (undefined4 *)(iVar3 + 0x50);
            pcVar8 = pcVar1 + 0x50;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined4 *)pcVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              pcVar8 = pcVar8 + 4;
            }
          }
          goto LAB_0043b95f;
        }
        uVar5 = uVar5 + 1;
        pcVar1 = pcVar1 + 0x264;
      } while (uVar5 < uVar2);
    }
    *(uint *)(param_1 + 0x50) = uVar2 + 1;
    pcVar1 = (char *)Mnu_Alloc(*(char **)(param_1 + 0x1c),(uVar2 + 1) * 0x264);
    *(char **)(param_1 + 0x1c) = pcVar1;
    if (pcVar1 != (char *)0x0) {
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x50) != 0) {
        while (*pcVar1 != '\0') {
          uVar2 = uVar2 + 1;
          pcVar1 = pcVar1 + 0x264;
          if (*(uint *)(param_1 + 0x50) <= uVar2) {
            return (char *)0x0;
          }
        }
        iVar3 = Mnu_FindFontByFile(param_1,param_2 + 0x10);
        puVar7 = param_2;
        pcVar8 = pcVar1;
        for (iVar6 = 0x99; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pcVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          pcVar8 = pcVar8 + 4;
        }
        if (iVar3 == 0) {
          Font_LoadTagged((char *)(param_2 + 0x10),pcVar1 + 0x50,10,0xa000);
        }
        else {
          puVar7 = (undefined4 *)(iVar3 + 0x50);
          pcVar8 = pcVar1 + 0x50;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pcVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            pcVar8 = pcVar8 + 4;
          }
        }
LAB_0043b95f:
        uVar4 = Mnu_LoadPolyFont(param_1,param_2 + 0x10);
        *(undefined4 *)(pcVar1 + 0x238) = uVar4;
        pcVar1[0x248] = -1;
        pcVar1[0x249] = -1;
        pcVar1[0x24a] = '\0';
        pcVar1[0x24b] = '\0';
        return pcVar1;
      }
    }
  }
  return (char *)0x0;
}

