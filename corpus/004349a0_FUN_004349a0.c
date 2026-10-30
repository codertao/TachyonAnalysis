
void FUN_004349a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint *param_5
                 ,int param_6)

{
  uint uVar1;
  
  uVar1 = *param_5;
  if (uVar1 == 0xffffffff) {
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x14) = 0;
    return;
  }
  if (*(uint *)(param_6 + 0x8c) <= uVar1) {
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x14) = 0;
    return;
  }
  Sector_GetSpedRecord(param_1,param_2,param_3,param_4,uVar1,param_5[1]);
  return;
}

