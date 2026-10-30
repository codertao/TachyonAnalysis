
void FUN_0040d9e0(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_004b87d0();
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0x20) = (undefined2)DAT_005b97b8;
    FUN_0040d990(iVar1,&DAT_00533540);
    FUN_0040d990(iVar1 + 0x10,s_GALSPAN_00533548);
    local_18 = 0x800;
    local_14 = 0;
    FUN_004b87f0(iVar1,0x1032,0x24,&local_18);
  }
  return;
}

