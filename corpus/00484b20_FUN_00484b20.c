
void FUN_00484b20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_64 [6];
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char *local_2c;
  char *local_28;
  undefined *local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  piVar1 = (int *)FUN_004699f0(s_SHIPYARD_TEXT_00557a00);
  iVar2 = FUN_0043ba90(&GLBL_UI_ELEM_LIST,s_SHADOW10g_005579f4);
  if (((iVar2 != 0) && (param_1 != 0)) && (piVar1 != (int *)0x0)) {
    FUN_0048b740(0,0xa100);
    piVar4 = local_64;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_3c = *piVar1;
    local_38 = piVar1[1];
    local_34 = piVar1[2];
    local_30 = piVar1[3];
    local_1c = 0;
    local_18 = 2;
    local_4a = *(undefined1 *)(iVar2 + 0xb0);
    local_4b = *(undefined1 *)(iVar2 + 0xb4);
    local_4c = *(undefined1 *)(iVar2 + 0xb8);
    local_47 = *(undefined1 *)(iVar2 + 0xfc);
    local_48 = *(undefined1 *)(iVar2 + 0x100);
    local_49 = *(undefined1 *)(iVar2 + 0x104);
    local_44 = *(undefined1 *)(iVar2 + 0x148);
    local_45 = *(undefined1 *)(iVar2 + 0x14c);
    local_46 = *(undefined1 *)(iVar2 + 0x150);
    local_41 = *(undefined1 *)(iVar2 + 0x194);
    local_42 = *(undefined1 *)(iVar2 + 0x198);
    local_43 = *(undefined1 *)(iVar2 + 0x19c);
    local_20 = 0x14;
    local_2c = s_TT_CLICK_0054b07c;
    local_28 = s_TT_RETURN_0054b070;
    local_24 = &DAT_00583498;
    local_64[0] = param_1;
    local_10 = 0xc;
    local_14 = 1;
    if ((DAT_00564ae4 == 0) || (*(int *)(iVar2 + 0x238) == 0)) {
      local_64[1] = iVar2 + 0x50;
    }
    else {
      local_3c = local_3c + 4;
      local_64[2] = *(int *)(iVar2 + 0x238);
    }
    FUN_0048ca60(0,local_64,0x37ff);
    FUN_0048b800(0,1);
  }
  return;
}

