
void FUN_00489750(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_90;
  undefined1 local_80 [128];
  
  iVar2 = FUN_00469ac0(s_PowerBarMat_00545d38);
  iVar3 = FUN_00469ac0(s_PowerBarHull_00545d28);
  iVar4 = FUN_00469ac0(s_PowerBarShield_0054762c);
  iVar5 = FUN_00469ac0(s_PowerBarAccel_0055784c);
  iVar6 = FUN_00469ac0(s_PowerBarAgility_0055783c);
  iVar7 = FUN_00469ac0(s_PowerBarSpeed_0055782c);
  iVar8 = FUN_00469ac0(s_PowerBarEnergy_0055781c);
  local_90 = 0;
  str_sprintf(&DAT_005a41e0,s_MAT_d_00545d20,0);
  iVar9 = FUN_00489540(&DAT_005a41e0);
  while (iVar9 != 0) {
    *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar2 + 0x48);
    local_90 = local_90 + 1;
    str_sprintf(&DAT_005a41e0,s_MAT_d_00545d20,local_90);
    iVar9 = FUN_00489540(&DAT_005a41e0);
  }
  iVar9 = FUN_00489540(&DAT_005334f4);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar3 + 0x40);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar3 + 0x44);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar3 + 0x48);
  iVar9 = FUN_00489540(s_SHIELD_00536a18);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar4 + 0x40);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar4 + 0x44);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar4 + 0x48);
  iVar9 = FUN_00489540(s_SPEED_0053696c);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar7 + 0x40);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar7 + 0x44);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar7 + 0x48);
  iVar9 = FUN_00489540(s_AGILITY_00545c78);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar6 + 0x40);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar6 + 0x44);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar6 + 0x48);
  iVar9 = FUN_00489540(s_ENERGY_00545ce0);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar8 + 0x40);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar8 + 0x44);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar8 + 0x48);
  iVar9 = FUN_00489540(s_ACCEL_00545c70);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar5 + 0x40);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar5 + 0x44);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar5 + 0x48);
  if (DAT_00558da8 != '\0') {
    piVar10 = &DAT_00558e50;
    do {
      iVar9 = FUN_00469a30(piVar10 + -0x1a);
      *piVar10 = iVar9;
      if (iVar9 != 0) {
        str_sprintf(local_80,s_IMAGE__s_005444a8,iVar9 + 0x40);
        iVar9 = FUN_0043a7a0(&DAT_00583420,local_80);
        piVar10[-1] = iVar9;
      }
      piVar1 = piVar10 + 1;
      piVar10 = piVar10 + 0x2b;
    } while ((char)*piVar1 != '\0');
  }
  return;
}

