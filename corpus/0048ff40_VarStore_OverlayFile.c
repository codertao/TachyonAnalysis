
/* [tentative] layer a .sav file onto the store */

undefined4 VarStore_OverlayFile(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*param_1 == '\0') {
    return 0;
  }
  iVar1 = File_Exists(param_1);
  if (iVar1 == 0) {
    FUN_0048fe20(s_def_vars_cfg_00559e24,param_2);
    VarStore_Save(param_1,param_2);
  }
  uVar2 = FUN_004a0d40(1);
  iVar1 = FUN_004a0f10(param_1);
  FUN_004a0d40(uVar2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0049c670(iVar1,DAT_0056aa90);
  FUN_0049c840(iVar1,param_1);
  uVar6 = 0;
  iVar5 = param_2 + 8;
  puVar3 = (uint *)(iVar1 + 8);
  if (*(int *)(param_2 + 4) != 0) {
    do {
      puVar7 = puVar3 + 2;
      puVar8 = (uint *)(iVar5 + 8);
      for (uVar4 = *puVar3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(char *)puVar8 = (char)*puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
        puVar8 = (uint *)((int)puVar8 + 1);
      }
      iVar5 = iVar5 + *(int *)(iVar5 + 4);
      puVar3 = (uint *)((int)puVar3 + puVar3[1]);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_2 + 4));
  }
  return 1;
}

