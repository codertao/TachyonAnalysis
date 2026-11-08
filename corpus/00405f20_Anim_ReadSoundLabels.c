
void Anim_ReadSoundLabels(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint local_24;
  char local_20 [32];
  
  iVar6 = 0;
  DAT_005b9ab8 = Cbin_CountEntries(s_SOUND_LABELS_00532768,s_SOUND_00532778);
  if (DAT_005b9ab8 != 0) {
    FUN_0048e3a0(&DAT_005b9abc,DAT_005b9ab8 * 0x24,4,s_SOUND_DEFINE_TMP_BUFFER_00532750,0xcccc);
    iVar2 = Cbin_SelectGroup(s_SOUND_LABELS_00532768);
    if (iVar2 != 0) {
      uVar4 = 0;
      if (DAT_005b9ab8 != 0) {
        do {
          FUN_0049bdb0(s_SOUND_00532778,local_20,0x20,0,4,2);
          uVar3 = 0xffffffff;
          pcVar5 = local_20;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          uVar4 = uVar4 + 1;
          iVar6 = iVar6 + ~uVar3;
        } while (uVar4 < DAT_005b9ab8);
      }
      FUN_0048e3d0((undefined4 *)(param_1 + 0x44),iVar6,4,s_ANIM_SOUND_LABEL_BUFFER_00532738,0xcccc)
      ;
      pcVar5 = *(char **)(param_1 + 0x44);
      iVar6 = Cbin_SelectGroup(s_SOUND_LABELS_00532768);
      if (iVar6 != 0) {
        local_24 = 0;
        iVar6 = DAT_005b9abc;
        if (DAT_005b9ab8 != 0) {
          do {
            FUN_0049bdb0(s_SOUND_00532778,iVar6,0x20,0,4,1);
            FUN_0049b930(s_SOUND_00532778,local_20,0x20,0,4,2);
            uVar4 = 0xffffffff;
            *(char **)(iVar6 + 0x20) = pcVar5;
            pcVar7 = local_20;
            do {
              pcVar8 = pcVar7;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar8 = pcVar7 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar8;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            pcVar7 = pcVar8 + -uVar4;
            pcVar8 = pcVar5;
            for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar8 = pcVar8 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar8 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            }
            uVar4 = 0xffffffff;
            pcVar7 = local_20;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            pcVar5 = pcVar5 + ~uVar4;
            local_24 = local_24 + 1;
            iVar6 = iVar6 + 0x24;
          } while (local_24 < DAT_005b9ab8);
        }
        *(uint *)(param_1 + 0x48) = DAT_005b9ab8;
      }
    }
  }
  return;
}

