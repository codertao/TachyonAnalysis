
void FUN_00441510(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  DAT_005a41c4 = Cbin_CountIndexed_Ctx(s_BLOCK_d_00540018,param_1);
  if (DAT_005a41c4 != 0) {
    FUN_0048e3d0((int *)(param_2 + 0x98),DAT_005a41c4 * 0x128,4,s_CREDIT_BLOCK_00540008,0xa000);
    iVar2 = *(int *)(param_2 + 0x98);
    uVar1 = 0;
    if (DAT_005a41c4 != 0) {
      do {
        str_sprintf(&DAT_005a41e0,s_BLOCK_d_00540018,uVar1);
        FUN_00441260(iVar2,&DAT_005a41e0,DAT_005a41c8,param_1,0,0,0);
        iVar2 = iVar2 + 0x128;
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_005a41c4);
    }
    DAT_005a41bc = DAT_005a41b8;
  }
  return;
}

