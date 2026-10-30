
void FUN_00447070(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_80 [128];
  
  iVar2 = FUN_00469ac0(s_PowerBarMat_00545d38);
  iVar3 = FUN_00469ac0(s_PowerBarHull_00545d28);
  iVar4 = FUN_00469ac0(s_PowerBarShield_0054762c);
  iVar5 = FUN_00469ac0(s_PowerBarSystem_0054761c);
  iVar6 = FUN_00469ac0(s_PowerBarROF_00547610);
  iVar9 = 0;
  str_sprintf(&DAT_005a41e0,s_MAT_d_00545d20,0);
  iVar7 = FUN_00446e70(&DAT_005a41e0);
  while (iVar7 != 0) {
    *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(iVar2 + 0x40);
    iVar9 = iVar9 + 1;
    *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar2 + 0x48);
    str_sprintf(&DAT_005a41e0,s_MAT_d_00545d20,iVar9);
    iVar7 = FUN_00446e70(&DAT_005a41e0);
  }
  iVar9 = FUN_00446e70(s_HULL1_00547608);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar3 + 0x40);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar3 + 0x44);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar3 + 0x48);
  iVar9 = FUN_00446e70(s_SHLD1_00547600);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar4 + 0x40);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar4 + 0x44);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar4 + 0x48);
  iVar9 = FUN_00446e70(&DAT_005475f8);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar5 + 0x40);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar5 + 0x44);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar5 + 0x48);
  iVar9 = FUN_00446e70(&DAT_005475f0);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar6 + 0x40);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar6 + 0x44);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar6 + 0x48);
  if (DAT_00546628 != '\0') {
    piVar8 = &DAT_005466d0;
    do {
      iVar9 = FUN_00469a30(piVar8 + -0x1a);
      *piVar8 = iVar9;
      if (iVar9 != 0) {
        str_sprintf(local_80,s_IMAGE__s_005444a8,iVar9 + 0x40);
        iVar9 = FUN_0043a7a0(&g_UiManager,local_80);
        piVar8[-1] = iVar9;
      }
      piVar1 = piVar8 + 1;
      piVar8 = piVar8 + 0x2b;
    } while ((char)*piVar1 != '\0');
  }
  return;
}

