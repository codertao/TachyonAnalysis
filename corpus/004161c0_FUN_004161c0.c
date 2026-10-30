
void FUN_004161c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_00415fc0(*(undefined4 *)(param_1 + 0x10));
  iVar1 = Dcb_FindById(*(undefined4 *)(param_1 + 0xc));
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 0x120) < DAT_005b3304)) {
    *(uint *)(iVar1 + 0x120) = DAT_005b3304 + 0xc;
    local_c = (uint)*(ushort *)(param_1 + 0x16) << 0x10;
    local_8 = (uint)*(ushort *)(param_1 + 0x18) << 0x10;
    local_4 = (uint)*(ushort *)(param_1 + 0x1a) << 0x10;
    uVar2 = FUN_0049d620(2);
    FUN_00423270(iVar1,param_1,&local_c,*(undefined2 *)(param_1 + 0x14));
    FUN_0049d620(uVar2);
  }
  return;
}

