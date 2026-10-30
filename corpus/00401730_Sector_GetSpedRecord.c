
/* index a SPED's instance data (def+0x8c count, def+0x90 records stride 0x14) */

undefined4
Sector_GetSpedRecord
          (undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = Sped_GetDefList(param_2,param_4);
  if (iVar2 == 0) {
    Sector_LogMissingSpedData(*(undefined4 *)(param_2 + 0x20));
    return 0;
  }
  if (*(uint *)(iVar2 + 0x8c) <= param_5) {
    return 0;
  }
  puVar1 = (uint *)(*(int *)(iVar2 + 0x90) + param_5 * 0x14);
  *(uint **)(param_3 + 0x10) = puVar1;
  if (*puVar1 <= param_6) {
    param_6 = 0;
  }
  FUN_004016c0(param_1,param_3,puVar1[1] + param_6 * 0x20);
  return 1;
}

