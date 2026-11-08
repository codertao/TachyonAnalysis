
void FUN_00441190(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + 0xcc;
  iVar2 = find_ui_elem_by_id_(param_1,iVar1);
  if (iVar2 != 0) {
    FUN_0046d770(param_1,iVar1,param_2 + 0xec,1,*(undefined4 *)(param_2 + 0x10c),
                 *(undefined4 *)(param_2 + 0x110),*(undefined4 *)(iVar2 + 0xc4),
                 *(undefined4 *)(iVar2 + 200),0);
  }
  set_flag_10c_on_elem_by_id(param_1,iVar1,0x80000);
  return;
}

