
void FUN_0043e120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = find_ui_elem_by_name(param_1,param_2);
  if (iVar1 != 0) {
    if (DAT_00564ae4 == 0) {
      FUN_0043d560(param_1,*(undefined4 *)(iVar1 + 0x104),iVar1 + 0x80,0,iVar1 + 0x10c,param_3,
                   param_4,*(undefined4 *)(iVar1 + 0x11c),*(undefined4 *)(iVar1 + 0x120),
                   *(undefined1 *)(iVar1 + 0x100),*(undefined4 *)(iVar1 + 0x124),iVar1 + 0x128);
      return;
    }
    FUN_0043dd40(param_1,*(undefined4 *)(iVar1 + 0x104),iVar1 + 0x80,0,iVar1 + 0x10c,param_3,param_4
                 ,*(undefined4 *)(iVar1 + 0x11c),*(undefined4 *)(iVar1 + 0x120),
                 *(undefined1 *)(iVar1 + 0x100),*(undefined4 *)(iVar1 + 0x124),iVar1 + 0x128,
                 *(undefined4 *)(iVar1 + 300));
  }
  return;
}

