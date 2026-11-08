
void FUN_0043fce0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = find_ui_elem_by_id_(param_1,param_2);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0xd4), iVar2 != 0)) {
    *(int *)(iVar1 + 0xd8) = param_3;
    *(int *)(iVar1 + 0xdc) = param_4;
    if (*(int *)(iVar2 + 0x1680) <= param_3) {
      *(undefined4 *)(iVar1 + 0xd8) = 0;
    }
    if (*(int *)(iVar2 + 0x1680) <= param_4) {
      *(undefined4 *)(iVar1 + 0xdc) = 0;
    }
    if (*(int *)(iVar1 + 0xdc) == -1) {
      if (*(int *)(iVar2 + 0x1680) < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x1680) + -1;
      }
      *(int *)(iVar1 + 0xd8) = iVar2;
    }
    *(undefined4 *)(iVar1 + 0xe0) = *(undefined4 *)(iVar1 + 0xd8);
    *(uint *)(iVar1 + 0x10c) = *(uint *)(iVar1 + 0x10c) | 0x400;
  }
  return;
}

