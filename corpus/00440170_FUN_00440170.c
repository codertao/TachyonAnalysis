
void FUN_00440170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00440400(param_1,param_2);
  iVar2 = find_ui_elem_by_name(param_1,param_2);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    *(undefined4 *)(iVar1 + 0xa8) = param_4;
    *(undefined4 *)(iVar1 + 0xa4) = param_3;
    *(int *)(iVar1 + 0xa0) = iVar2;
    *(undefined4 *)(iVar1 + 0x90) = param_5;
    *(undefined4 *)(iVar1 + 0x9c) = 1;
    str_sprintf(iVar2 + 0x80,&DAT_00536768,param_6);
    FUN_0043e6a0(param_1,iVar2,param_3);
  }
  return;
}

