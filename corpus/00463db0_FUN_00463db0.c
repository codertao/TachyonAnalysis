
void FUN_00463db0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  uVar1 = FUN_0049c1b0(s_LOAD_MOUNT__d_00547878,1);
  *param_1 = uVar1;
  uVar1 = FUN_0049c1b0(s_CARD_MOUNT__d_00545cbc,1);
  param_1[1] = uVar1;
  uVar1 = 0;
  if (*param_1 != 0) {
    puVar4 = param_1 + 2;
    do {
      uVar1 = uVar1 + 1;
      str_sprintf(local_40,s_LOAD_MOUNT__d_00547878,uVar1);
      iVar2 = Cbin_CountEntries(local_40,s_WEAPON_CLASS_005478cc);
      Cbin_SelectGroup(local_40);
      *puVar4 = 0;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        FUN_0049bdb0(s_WEAPON_CLASS_005478cc,local_20,0x20,0,4,1);
        uVar3 = FUN_00492b00(local_20);
        *puVar4 = *puVar4 | uVar3;
      }
      puVar4 = puVar4 + 1;
    } while (uVar1 < *param_1);
  }
  uVar1 = 0;
  if (param_1[1] != 0) {
    puVar4 = param_1 + 0x12;
    do {
      uVar1 = uVar1 + 1;
      str_sprintf(local_40,s_CARD_MOUNT__d_00545cbc,uVar1);
      iVar2 = Cbin_CountEntries(local_40,s_NOMOUNT_ITEM_005478e8);
      Cbin_SelectGroup(local_40);
      *puVar4 = 0;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        FUN_0049bdb0(s_NOMOUNT_ITEM_005478e8,local_20,0x20,0,4,1);
        uVar3 = FUN_004273d0(local_20);
        *puVar4 = *puVar4 | uVar3;
      }
      *puVar4 = ~*puVar4;
      puVar4 = puVar4 + 1;
    } while (uVar1 < param_1[1]);
  }
  return;
}

