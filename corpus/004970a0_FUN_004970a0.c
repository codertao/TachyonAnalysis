
int FUN_004970a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  piVar1 = (int *)param_1[2];
  iVar6 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_34 = 0;
  local_24 = *piVar1;
  iVar2 = *(int *)(*param_1 + 0xa0);
  local_20 = piVar1[1];
  local_1c = piVar1[2];
  local_38 = 0;
  FUN_004b1bb0(local_18,param_1[3]);
  local_28 = *(int *)(*param_1 + 0x9c);
  FUN_004b24d0(&local_30,&local_30);
  iVar4 = 0;
  iVar5 = iVar2;
  if (iVar2 < 1) {
    local_38 = 0;
  }
  else {
    while( true ) {
      param_1[2] = (int)&local_24;
      iVar3 = FUN_00496e90(param_1,&local_30,&local_34,iVar6,iVar5);
      if (local_38 == 0) {
        local_38 = iVar3;
      }
      if ((iVar3 == 0) || (local_34 != 0)) break;
      local_24 = local_24 + local_30;
      local_20 = local_20 + local_2c;
      local_1c = local_1c + local_28;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 0x800000;
      if (iVar2 <= iVar4) {
        return local_38;
      }
    }
  }
  return local_38;
}

