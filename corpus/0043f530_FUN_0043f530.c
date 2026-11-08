
int FUN_0043f530(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = find_ui_elem_by_id_(param_1,param_2);
  iVar2 = 0;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xf0) = param_3;
    if (param_3 != 0) {
      set_flag_10c_on_elem_by_id();
      iVar2 = _rand();
      *(int *)(iVar1 + 0xec) = iVar2 % *(int *)(iVar1 + 0xf0);
      return iVar2 / *(int *)(iVar1 + 0xf0);
    }
    iVar2 = FUN_0043f840(param_1,param_2,0x100000);
  }
  return iVar2;
}

