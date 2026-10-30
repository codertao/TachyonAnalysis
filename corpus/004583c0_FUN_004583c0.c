
int * FUN_004583c0(int param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return param_2;
  }
  do {
    if ((*(ushort *)(param_1 + 0x74) == param_3) && (*(int *)(param_1 + 0x58) != 0)) {
      pbVar1 = (byte *)(param_1 + 0x18);
      FUN_004b19a0(pbVar1);
      if ((*pbVar1 & 0x10) == 0) {
        DAT_00666b04 = 0x10000;
      }
      else {
        DAT_00666b04 = *(undefined4 *)(param_1 + 0x1c);
      }
      iVar2 = FUN_004b3bf0(pbVar1);
      if (iVar2 != 0) {
        *param_2 = param_1;
        param_2[1] = *(int *)(*(int *)(param_1 + 0x58) + 100);
        param_2 = param_2 + 2;
        DAT_0062c0e8 = DAT_0062c0e8 + 1;
        FUN_0048aa60(param_1);
      }
    }
    param_1 = *(int *)(param_1 + 8);
  } while (param_1 != 0);
  return param_2;
}

