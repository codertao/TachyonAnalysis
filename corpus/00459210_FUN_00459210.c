
void FUN_00459210(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  iVar2 = FUN_0049c190(s_TEXT_ACTION__02d_00549120);
  *(int *)(param_1 + 0x8c) = iVar2;
  if (iVar2 != 0) {
    FUN_0048e3d0((undefined4 *)(param_1 + 0x94),iVar2 << 5,4,
                 s_SCENE_TEXT_ACTION_REFERNECE_NAME_00549148,0xcccc);
    FUN_0048e3d0((undefined4 *)(param_1 + 0x90),*(int *)(param_1 + 0x8c) * 0x30,4,
                 s_SCENE_TEXT_ACTIONS_00549134,0xcccc);
    puVar6 = *(undefined4 **)(param_1 + 0x90);
    pcVar5 = *(char **)(param_1 + 0x94);
    uVar4 = 0;
    if (*(int *)(param_1 + 0x8c) != 0) {
      do {
        FUN_00458e10(param_1,puVar6,uVar4);
        str_sprintf(pcVar5,s_TEXT_ACTION__02d_00549120,uVar4);
        uVar3 = 0xffffffff;
        *puVar6 = pcVar5;
        pcVar7 = pcVar5;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar5 = pcVar5 + ~uVar3;
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 0xc;
      } while (uVar4 < *(uint *)(param_1 + 0x8c));
    }
  }
  return;
}

