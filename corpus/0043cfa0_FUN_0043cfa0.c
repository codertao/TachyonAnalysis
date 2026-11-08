
void FUN_0043cfa0(int param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    do {
      if (((uVar1 != param_2) && (*(int *)(iVar2 + 0xd0) == param_3)) &&
         ((*(int *)(iVar2 + 0x1f8) != 8 || (param_5 == 0)))) {
        set_button_state(param_1,iVar2,param_4);
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x23c;
    } while (uVar1 < *(uint *)(param_1 + 0x4c));
  }
  return;
}

