
void FUN_004a3680(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004a14f0(0,2);
  uVar2 = mem_GetMemEx_probably_alloc(iVar1 + -0x380,4,0,s_PcxWork_0055e114);
  FUN_004a14f0(0x80,0);
  FUN_004a1490(uVar2,iVar1 + -0x380);
  FUN_004a3570(uVar2,param_1,DAT_00603108);
  OurFreeMem(uVar2);
  return;
}

