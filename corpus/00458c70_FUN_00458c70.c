
void FUN_00458c70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 local_24;
  char local_20 [32];
  
  iVar4 = Cbin_CountEntries(&DAT_00549074,s_MEMBER_0054907c);
  *param_1 = iVar4;
  if (iVar4 != 0) {
    uVar5 = FUN_0049c0f0(&DAT_00549074,s_MEMBER_0054907c,0x20,1);
    piVar1 = param_1 + 3;
    FUN_0048e3d0(piVar1,uVar5,4,s_SCENE_MEMBER_REFERNECE_NAMES_00549054,0xcccc);
    uVar5 = FUN_0049c0f0(&DAT_00549074,s_MEMBER_0054907c,0x20,2);
    FUN_0048e3d0(param_1 + 2,uVar5,4,s_SCENE_MEMBER_NAMES_00549040,0xcccc);
    piVar2 = param_1 + 1;
    FUN_0048e3d0(piVar2,*param_1 * 100,4,s_SCENE_MEMBERS_00549030,0xcccc);
    Cbin_SelectGroup(&DAT_00549074);
    param_1 = (int *)param_1[2];
    pcVar8 = (char *)*piVar1;
    puVar9 = (undefined4 *)*piVar2;
    while( true ) {
      iVar4 = FUN_0049bdb0(s_MEMBER_0054907c,local_20,0x20,0,4,1);
      if (iVar4 == 0) break;
      uVar6 = 0xffffffff;
      pcVar10 = local_20;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar11 + -uVar6;
      pcVar11 = pcVar8;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar6 = 0xffffffff;
      *puVar9 = pcVar8;
      pcVar10 = local_20;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      pcVar8 = pcVar8 + ~uVar6;
      FUN_0049b930(s_MEMBER_0054907c,local_20,0x20,0,4,2);
      iVar4 = FUN_00458c20(local_20,&local_24);
      if (iVar4 == 0) {
        uVar6 = 0xffffffff;
        puVar9[1] = param_1;
        pcVar10 = local_20;
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar3 != '\0');
        uVar6 = ~uVar6;
        pcVar10 = pcVar11 + -uVar6;
        pcVar11 = (char *)param_1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar10 = local_20;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        param_1 = (int *)((int)param_1 + ~uVar6);
        puVar9 = puVar9 + 0x19;
      }
      else {
        puVar9[0xd] = local_24;
        puVar9 = puVar9 + 0x19;
      }
    }
  }
  return;
}

