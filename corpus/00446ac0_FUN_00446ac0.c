
void FUN_00446ac0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_80 [128];
  
  iVar3 = FUN_00469ac0(s_PowerBarMat_00545d38);
  iVar4 = FUN_00469ac0(s_PowerBarHull_00545d28);
  iVar7 = 0;
  str_sprintf(&DAT_005a41e0,s_MAT_d_00545d20,0);
  iVar5 = FUN_00446890(param_1,&DAT_005a41e0);
  while ((iVar5 != 0 && (iVar3 != 0))) {
    *(undefined4 *)(iVar5 + 0x98) = *(undefined4 *)(iVar3 + 0x40);
    iVar7 = iVar7 + 1;
    *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(iVar3 + 0x48);
    str_sprintf(&DAT_005a41e0,s_MAT_d_00545d20,iVar7);
    iVar5 = FUN_00446890(param_1,&DAT_005a41e0);
  }
  iVar7 = FUN_00446890(param_1,&DAT_005334f4);
  if ((iVar7 != 0) && (iVar4 != 0)) {
    *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar4 + 0x48);
  }
  iVar7 = FUN_00446890(param_1,s_SHIELD_00536a18);
  if ((iVar7 != 0) && (iVar4 != 0)) {
    *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar4 + 0x48);
  }
  iVar7 = FUN_00446890(param_1,s_SPEED_0053696c);
  if ((iVar7 != 0) && (iVar4 != 0)) {
    *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar4 + 0x48);
  }
  iVar7 = FUN_00446890(param_1,s_AGILITY_00545c78);
  if ((iVar7 != 0) && (iVar4 != 0)) {
    *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar4 + 0x48);
  }
  iVar7 = FUN_00446890(param_1,s_ENERGY_00545ce0);
  if ((iVar7 != 0) && (iVar4 != 0)) {
    *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar4 + 0x48);
  }
  iVar7 = FUN_00446890(param_1,s_ACCEL_00545c70);
  if ((iVar7 != 0) && (iVar4 != 0)) {
    *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar4 + 0x48);
  }
  iVar7 = FUN_00446890(param_1,&PTR_DAT_00545c6c);
  if ((iVar7 != 0) && (iVar4 != 0)) {
    *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar4 + 0x48);
  }
  iVar7 = FUN_00446890(param_1,s_CARGO_00533fe8);
  if ((iVar7 != 0) && (iVar4 != 0)) {
    *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar4 + 0x48);
  }
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    iVar7 = FUN_00469a30(param_1 + 0x40);
    *(int *)(param_1 + 0xa8) = iVar7;
    if (iVar7 != 0) {
      str_sprintf(local_80,s_IMAGE__s_005444a8,iVar7 + 0x40);
      uVar6 = FUN_0043a7a0(&g_UiManager,local_80);
      *(undefined4 *)(param_1 + 0xa4) = uVar6;
    }
    pcVar1 = param_1 + 0xac;
    param_1 = param_1 + 0xac;
    cVar2 = *pcVar1;
  }
  return;
}

