
/* persistent-object page: list conn+0x128, total +0x124, acked +0x12c, page id +0x130 -> header
   u16[1..2] */

undefined4
Tach_SrvWritePersistentPage(int param_1,undefined4 param_2,undefined4 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00461680(param_1);
  param_4[2] = 0;
  if (*(int *)(param_1 + 0x124) == 0) {
    return param_3;
  }
  param_4[1] = *(short *)(param_1 + 0x130);
  piVar3 = *(int **)(param_1 + 0x128);
  iVar2 = *(int *)(param_1 + 0x124) - *(int *)(param_1 + 300);
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  param_4[2] = (short)iVar2;
  if (iVar2 < 1) {
    return param_3;
  }
  do {
    if (*piVar3 != 0) {
      param_3 = Tach_SrvWriteEntityRecordExt(*piVar3,param_2,param_3);
      *param_4 = *param_4 + 1;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_3;
}

