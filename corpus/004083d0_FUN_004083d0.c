
undefined4
FUN_004083d0(int param_1,int param_2,int *param_3,float param_4,int param_5,int *param_6,int param_7
            )

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong local_40;
  undefined4 local_38;
  int local_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_24 = param_3[1];
  local_1c = param_3[3];
  iVar2 = (int)param_4 >> 1;
  local_20 = param_3[2] - iVar2;
  iVar3 = *param_3 - iVar2;
  if (param_7 == 0) {
    iVar4 = 0;
    iVar5 = param_5;
  }
  else {
    iVar4 = param_5;
    iVar5 = 0;
  }
  local_34[0] = 0;
  local_34[1] = 0;
  local_38 = 0;
  local_34[2] = param_2;
  local_40 = (ulonglong)(uint)(param_1 << 0x10);
  FUN_004b1bb0(local_18,&local_40);
  FUN_004b24d0(local_34,local_34);
  fVar1 = (float)local_34[2];
  param_4 = fVar1;
  if (local_34[0] != 0) {
    param_4 = fVar1 / (float)local_34[0];
  }
  *param_6 = local_34[0];
  if (local_34[0] < iVar3) {
    *param_6 = iVar3;
  }
  if (local_20 < *param_6) {
    *param_6 = local_20;
  }
  local_40._0_4_ = (int)(longlong)ROUND((float)(*param_6 - local_34[0]) * param_4 + fVar1);
  param_6[1] = (int)local_40;
  if (param_7 == 0) {
    if (iVar4 <= (int)local_40) {
      if ((int)local_40 <= iVar5) goto LAB_0040854d;
      if (iVar4 < (int)local_40) {
        param_6[1] = iVar4;
      }
    }
    if (param_6[1] < iVar5) {
      param_6[1] = iVar5;
    }
    local_40._0_4_ =
         (int)(longlong)ROUND((float)(param_6[1] - local_34[2]) / param_4 + (float)local_34[0]);
    *param_6 = (int)local_40;
    if ((int)local_40 < iVar3) {
      *param_6 = iVar3;
    }
    if (local_20 < *param_6) {
      *param_6 = local_20;
    }
    goto LAB_0040854d;
  }
  if (iVar4 < (int)local_40) {
    param_6[1] = iVar4;
LAB_004084be:
    if (param_6[1] < iVar5) {
      param_6[1] = iVar5;
    }
    local_40._0_4_ =
         (int)(longlong)ROUND((float)(param_6[1] - local_34[2]) / param_4 + (float)local_34[0]);
    *param_6 = (int)local_40;
    if ((int)local_40 < iVar3) {
      *param_6 = iVar3;
    }
    if (local_20 < *param_6) {
      *param_6 = local_20;
    }
  }
  else if ((int)local_40 < iVar5) goto LAB_004084be;
  param_6[1] = param_5 - param_6[1];
LAB_0040854d:
  param_6[1] = param_6[1] + param_3[1];
  *param_6 = *param_6 + iVar2;
  return 1;
}

