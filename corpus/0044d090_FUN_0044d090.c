
void FUN_0044d090(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 *local_8;
  int local_4;
  
  puVar6 = DAT_0055e3e8;
  local_8 = DAT_0055e3e8;
  if (DAT_005912e0 != 0) {
    FUN_0044d010();
    piVar2 = &DAT_00591c44;
    local_4 = 0xc;
    do {
      if (puVar6 == (undefined4 *)0x0) {
        *piVar2 = 8;
      }
      else {
        str_sprintf(piVar2 + -0x21,&DAT_0054801c,puVar6[3]);
        FUN_0043e6a0(&g_UiManager,piVar2 + -0x41,piVar2 + -0x21);
        iVar1 = 4;
        bVar7 = true;
        piVar3 = local_8 + 4;
        piVar5 = &DAT_00591630;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar7 = *piVar3 == *piVar5;
          piVar3 = piVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar7);
        if ((bVar7) && (0 < DAT_0055e3f0)) {
          *piVar2 = 0x10;
          puVar6 = (undefined4 *)*local_8;
          local_8 = puVar6;
        }
        else {
          iVar1 = FUN_0043ca90(&g_UiManager,piVar2 + -0x41);
          *piVar2 = iVar1;
          if (iVar1 == 8) {
            *piVar2 = 1;
          }
          if (*piVar2 == 0x10) {
            *piVar2 = 1;
          }
          puVar6 = (undefined4 *)*local_8;
          local_8 = puVar6;
        }
      }
      piVar2 = piVar2 + 0x42;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    iVar1 = FUN_004a6d90(&DAT_00591630);
    if ((iVar1 == 0) && (DAT_0055e3f0 != 0)) {
      FUN_0044cab0(0);
      DAT_00591c44 = 0x10;
    }
    puVar4 = &DAT_00591b40;
    iVar1 = 0xc;
    do {
      set_button_state(&g_UiManager,puVar4,*(undefined4 *)(puVar4 + 0x104));
      puVar4 = puVar4 + 0x108;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

