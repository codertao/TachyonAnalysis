
void FUN_00455650(void)

{
  int iVar1;
  
  iVar1 = DAT_005b3300;
  *(undefined1 **)(DAT_005b3300 + 0x68) = &LAB_004555f0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  FUN_004102c0(1);
  FUN_0040f5b0(0x3e8000,0x400000,0x80000,0);
  FUN_0044f3e0(2);
  FUN_0041c3e0(0);
  FUN_00430150(&PTR_DAT_0053e9b8);
  return;
}

