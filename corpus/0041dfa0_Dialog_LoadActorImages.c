
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Dialog_LoadActorImages(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 local_10;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_10 = DAT_00562b14;
  local_1 = 0;
  iVar1 = Cbin_CountEntries(s_IMAGES_005355cc,s_IMAGE_005355d4);
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 != 0) {
    Mem_AllocZeroTagged((undefined4 *)(param_1 + 0x44),iVar1 * 0x18,4,s_ACTOR_IMAGE_ARRAY_005355b8,
                        0xd000);
    uVar2 = File_SetErrorFlag(0);
    Cbin_GetScalar(s_IMAGES_005355cc,&DAT_005355b4,&local_10,0x10,0);
    Cbin_SelectGroup(s_IMAGES_005355cc);
    iVar1 = Pal_Load(&local_10);
    *(int *)(param_1 + 0x68) = iVar1;
    if (iVar1 != 0) {
      Pal_Remap(iVar1,0x80,0x80,0x80,0x80,0x80);
      Pal_SetLoadRange(*(int *)(param_1 + 0x68) + 0x300,*(int *)(param_1 + 0x68) + 0x600);
      puVar3 = *(undefined4 **)(param_1 + 0x68);
      puVar5 = &DAT_00603180;
      for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    piVar4 = *(int **)(param_1 + 0x44);
    uVar6 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      do {
        Cbin_IterField_Global(s_IMAGE_005355d4,&local_10,0x10,0);
        Image_LoadWithPal(&local_10,8,piVar4,0xcccc);
        if (*piVar4 != 0) {
          Pal_RemapToGamePalette(*piVar4,DAT_00603104 * _DAT_00603100);
        }
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 6;
      } while (uVar6 < *(uint *)(param_1 + 0x40));
    }
    File_SetErrorFlag(uVar2);
  }
  return;
}

