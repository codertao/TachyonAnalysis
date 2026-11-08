
void FUN_0046ad00(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_4;
  
  iVar5 = DAT_00589728;
  FUN_0048e3d0(&local_4,DAT_00589728 * 0x1b8,4,s_JOB_LIST_0054abd8,0xa100);
  puVar4 = local_4;
  if (local_4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)Job_FindActive();
    iVar3 = DAT_00589728;
    puVar7 = DAT_00589730;
    if ((puVar1 != (undefined4 *)0x0) &&
       (iVar2 = DAT_00589728, puVar6 = DAT_00589730, DAT_00589728 != 0)) {
LAB_0046ad5f:
      if (puVar1 != puVar6) goto code_r0x0046ad63;
      puVar7 = puVar4;
      for (iVar3 = 0x6e; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = puVar4 + 0x6e;
      iVar5 = iVar5 + -1;
      iVar3 = DAT_00589728;
      puVar7 = DAT_00589730;
    }
joined_r0x0046ad91:
    while ((iVar2 = DAT_00589728, puVar6 = DAT_00589730, iVar3 != 0 && (iVar5 != 0))) {
      if ((puVar1 != puVar7) && (puVar7[4] != 0)) {
        puVar6 = puVar7;
        puVar8 = puVar4;
        for (iVar2 = 0x6e; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar4 = puVar4 + 0x6e;
        iVar5 = iVar5 + -1;
      }
      iVar3 = iVar3 + -1;
      puVar7 = puVar7 + 0x6e;
    }
    while ((iVar2 != 0 && (iVar5 != 0))) {
      if ((puVar1 != puVar6) && (puVar6[4] == 0)) {
        puVar7 = puVar6;
        puVar8 = puVar4;
        for (iVar3 = 0x6e; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar4 = puVar4 + 0x6e;
        iVar5 = iVar5 + -1;
      }
      iVar2 = iVar2 + -1;
      puVar6 = puVar6 + 0x6e;
    }
    OurFreeMem(DAT_00589730);
    DAT_00589730 = local_4;
  }
  return;
code_r0x0046ad63:
  iVar2 = iVar2 + -1;
  puVar6 = puVar6 + 0x6e;
  if (iVar2 == 0) goto joined_r0x0046ad91;
  goto LAB_0046ad5f;
}

