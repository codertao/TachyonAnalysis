
void FUN_00448360(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  int local_c;
  
  iVar8 = DAT_00592fc8;
  if (s_BtnCFGSell1_00545d60[0] != '\0') {
    pcVar9 = s_TxtInvQty1_00545de0;
    do {
      pcVar7 = pcVar9 + -0x80;
      Ui_SetButtonFlag(&g_UiManager,pcVar7,4);
      FUN_0043ce50(&g_UiManager,pcVar7,8);
      Ui_SetButtonFlag(&g_UiManager,pcVar7,0x400000);
      FUN_0043f620(&g_UiManager,pcVar9 + 0x40,0x20000);
      FUN_0043e610(&g_UiManager,pcVar9 + -0x40,0x200);
      FUN_0043e610(&g_UiManager,pcVar9,0x20000);
      FUN_0043e6a0(&g_UiManager,pcVar9,&DAT_00562b14);
      FUN_0043e6a0(&g_UiManager,pcVar9 + -0x40,&DAT_00562b14);
      pcVar9[0x84] = '\0';
      pcVar9[0xc4] = '\0';
      pcVar9[0x80] = '\0';
      pcVar9[0x81] = '\0';
      pcVar9[0x82] = '\0';
      pcVar9[0x83] = '\0';
      iVar2 = Ui_FindButton(&g_UiManager,pcVar7);
      if (iVar2 != 0) {
        *(undefined4 *)(pcVar9 + 0xe4) = *(undefined4 *)(iVar2 + 0xd4);
        *(undefined4 *)(pcVar9 + 0xe8) = *(undefined4 *)(iVar2 + 0xd8);
        *(int *)(pcVar9 + 0xec) = *(int *)(iVar2 + 200) + *(int *)(iVar2 + 0xd4);
        *(int *)(pcVar9 + 0xf0) = *(int *)(iVar2 + 0xcc) + *(int *)(iVar2 + 0xd8);
      }
      pcVar7 = pcVar9 + 0xf4;
      pcVar9 = pcVar9 + 0x174;
    } while (*pcVar7 != '\0');
  }
  uVar3 = FUN_0046e930();
  iVar2 = FUN_0046f080(uVar3);
  if (iVar2 == 0) {
    uVar3 = 7;
  }
  else {
    uVar1 = *(uint *)(iVar2 + 0x44);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) == 0) {
        if ((uVar1 & 1) == 0) goto LAB_004484c0;
        uVar3 = 4;
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  FUN_0046c040(uVar3,1);
LAB_004484c0:
  local_c = DAT_00589744;
  iVar2 = DAT_00589748;
  if (DAT_00589748 != 0) {
    for (; (iVar8 != 0 && (local_c != 0)); local_c = local_c + -1) {
      iVar8 = iVar8 + -1;
      iVar2 = iVar2 + 0x24;
    }
    if (s_BtnCFGSell1_00545d60[0] != '\0') {
      piVar4 = (int *)(iVar2 + 0x20);
      pcVar9 = s_IAItemSell1_00545e20;
      do {
        if (local_c == 0) {
          return;
        }
        iVar8 = *piVar4;
        if (iVar8 == 0) {
          return;
        }
        iVar2 = *(int *)(iVar8 + 0x58);
        if (iVar2 != 0) {
          pcVar7 = pcVar9 + -0xc0;
          *(int *)(pcVar9 + 0x40) = iVar8;
          iVar8 = FUN_0043ca90(&g_UiManager,pcVar7);
          if (iVar8 == 8) {
            FUN_0043ce50(&g_UiManager,pcVar7,1);
          }
          iVar8 = Ui_FindButton(&g_UiManager,pcVar7);
          if (iVar8 != 0) {
            FUN_0046d770(DAT_005879a0,pcVar9,iVar2 + 0xb0,1,*(undefined4 *)(iVar2 + 0xc0),
                         *(undefined4 *)(iVar2 + 0xc4),*(undefined4 *)(iVar8 + 0xd4),
                         *(undefined4 *)(iVar8 + 0xd8),0);
            iVar5 = FUN_0043fa70(&g_UiManager,pcVar9);
            str_sprintf(&DAT_005a41e0,s_IMAGE__s_005444a8,iVar2 + 0xb0);
            iVar6 = FUN_0043a7a0(&g_UiManager,&DAT_005a41e0);
            iVar8 = FUN_0043a7a0(&g_UiManager,iVar8 + 0x80);
            if (((iVar5 != 0) && (iVar6 != 0)) && (iVar8 != 0)) {
              uVar3 = FUN_0046be00(*piVar4 + 0x20,*piVar4);
              str_sprintf(pcVar9 + 0x84,s___SHADOW8r__d_SHADOW8w___005476a8,uVar3);
              FUN_0043e6a0(&g_UiManager,pcVar9 + -0x40,pcVar9 + 0x84);
              if (*(undefined4 **)(iVar2 + 0x60) == (undefined4 *)0x0) {
                pcVar7 = s__ITEM_005476a0;
              }
              else {
                pcVar7 = (char *)**(undefined4 **)(iVar2 + 0x60);
              }
              str_sprintf(pcVar9 + 0x44,&DAT_00536768,pcVar7);
              FUN_00448250(pcVar9 + -0x80,pcVar9 + 0x44,*(undefined4 *)(iVar5 + 0xc4),
                           *(undefined4 *)(iVar5 + 200),*(undefined4 *)(iVar8 + 0x166c),
                           *(int *)(iVar8 + 0x1670) / *(int *)(iVar8 + 0x1680));
              FUN_004482e0(iVar5,iVar6,*(undefined4 *)(iVar5 + 0xc4),*(undefined4 *)(iVar5 + 200),
                           *(undefined4 *)(iVar8 + 0x166c),*(undefined4 *)(iVar8 + 0x1670),
                           *(undefined4 *)(iVar8 + 0x1680),2,4);
            }
          }
        }
        pcVar7 = pcVar9 + 0xb4;
        pcVar9 = pcVar9 + 0x174;
        piVar4 = piVar4 + 9;
        local_c = local_c + -1;
      } while (*pcVar7 != '\0');
    }
  }
  return;
}

