
void FUN_004783a0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
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
  
  piVar1 = (int *)FUN_004699f0(s_INVENTORY_TEXT_00550aa8);
  FUN_0043e6a0(&DAT_00583420,s_TxtInvItemBanner_00550a94,&DAT_00562b14);
  FUN_0048b6f0(0);
  if (((DAT_0056363c != 0) && (param_1 != 0)) && (param_2 != 0)) {
    piVar2 = (int *)FUN_0049e0d0(DAT_0056363c,s_CARGO_00533fe8,param_1);
    piVar3 = (int *)FUN_0049e0d0(DAT_0056363c,s_CARGO_00533fe8,param_2);
    if (piVar2 != (int *)0x0) {
      param_1 = *piVar2;
    }
    FUN_0043e6a0(&DAT_00583420,s_TxtInvItemBanner_00550a94,param_1);
    FUN_0048b740(0,0xa100);
    if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
      piVar2 = local_64;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar2 = 0;
        piVar2 = piVar2 + 1;
      }
      iVar4 = FUN_0043ba90(&DAT_00583420,s_SHADOW10w_00540e34);
      if (iVar4 != 0) {
        local_3c = *piVar1;
        local_38 = piVar1[1];
        local_34 = piVar1[2];
        local_30 = piVar1[3];
        local_1c = 0;
        local_18 = 5;
        local_4a = *(undefined1 *)(iVar4 + 0xb0);
        local_4b = *(undefined1 *)(iVar4 + 0xb4);
        local_4c = *(undefined1 *)(iVar4 + 0xb8);
        local_47 = *(undefined1 *)(iVar4 + 0xfc);
        local_48 = *(undefined1 *)(iVar4 + 0x100);
        local_49 = *(undefined1 *)(iVar4 + 0x104);
        local_44 = *(undefined1 *)(iVar4 + 0x148);
        local_45 = *(undefined1 *)(iVar4 + 0x14c);
        local_46 = *(undefined1 *)(iVar4 + 0x150);
        local_41 = *(undefined1 *)(iVar4 + 0x194);
        local_42 = *(undefined1 *)(iVar4 + 0x198);
        local_43 = *(undefined1 *)(iVar4 + 0x19c);
        local_20 = 0x14;
        local_2c = s_TT_CLICK_0054b07c;
        local_28 = s_TT_RETURN_0054b070;
        local_24 = &DAT_00583498;
        local_64[0] = *piVar3;
        local_10 = 0xc;
        local_14 = 1;
        if ((DAT_00564ae4 == 0) || (*(int *)(iVar4 + 0x238) == 0)) {
          local_64[1] = iVar4 + 0x50;
        }
        else {
          local_3c = local_3c + 4;
          local_64[2] = *(int *)(iVar4 + 0x238);
        }
        FUN_0048ca60(0,local_64,0x37ff);
        FUN_0048b800(0,1);
        Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseInventory_00550a00,piVar1,1);
      }
    }
  }
  return;
}

