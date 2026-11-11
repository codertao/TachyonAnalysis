
/* (item, isStore) restart preview model anim, Loadout_ShowItemPrice */

void Loadout_SelectItem(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  Loadout_ClearItemInfo();
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x58), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 0xa4);
    *(undefined4 *)(iVar1 + 0xac) = 0;
    *(int *)(iVar1 + 0xa8) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x124) = *(undefined4 *)(iVar2 + 0x120);
      *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 0xa8) =
           *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 0xa4);
      *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 0xb4) =
           *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 0xb0);
      *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 0xbc) =
           *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 0xb8);
      if (*(int *)(*(int *)(iVar1 + 0xa8) + 0xc4) != 0) {
        FUN_0048b6f0(0);
      }
    }
    Loadout_ShowItemPrice(param_1,param_2);
    if (*(int *)(param_1 + 0x50) == 0) {
      FUN_00471a90(param_1);
      FUN_00471630(1);
    }
  }
  return;
}

