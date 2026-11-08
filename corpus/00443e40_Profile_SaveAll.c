
/* iterate 10 slots: save .sav blob, or Profile_Delete if name empty */

void Profile_SaveAll(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 local_b8 [8];
  undefined1 local_98 [152];
  
  GLBL_spacesav[0x28] = g_CurrentProfileSlot;
  iVar2 = 0;
  puVar3 = &g_ProfileSlots;
  do {
    puVar4 = local_b8;
    for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar1 = File_Exists(puVar3);
    if (iVar1 != 0) {
      File_ReadAll(puVar3,local_b8);
    }
    if (puVar3[0x10] == '\0') {
      Profile_Delete(iVar2);
    }
    else {
      str_sprintf(local_b8,puVar3 + 0x10);
      str_sprintf(local_98,s_player_02d_sav_005411c8,iVar2);
      File_WriteAll(puVar3,local_b8,0xb8);
    }
    puVar3 = puVar3 + 0x8c;
    iVar2 = iVar2 + 1;
  } while ((int)puVar3 < 0x5a3ef8);
  return;
}

