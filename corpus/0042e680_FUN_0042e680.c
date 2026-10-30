
void FUN_0042e680(void)

{
  int iVar1;
  
  iVar1 = DcbPool_Alloc(&DAT_005b32b0,0xe,&DAT_005b31c0);
  if (iVar1 != 0) {
    FUN_0042e5c0(iVar1);
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined1 **)(iVar1 + 0x68) = &LAB_0042e650;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x58) = DAT_005b0098;
    *(undefined4 *)(iVar1 + 0x18) = 0x10;
    *(code **)(iVar1 + 0x70) = FUN_00496a90;
    FUN_0041b850(iVar1);
  }
  return;
}

