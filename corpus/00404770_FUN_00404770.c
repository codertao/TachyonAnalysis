
void FUN_00404770(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  FUN_004b1bb0(local_18,param_1 + 0x4c);
  local_24 = 0;
  local_20 = 0x1388000;
  local_1c = 0;
  FUN_004b24d0(&local_24,&local_24);
  piVar1 = (int *)(param_1 + 0x34);
  local_24 = local_24 + *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0) * 0x10;
  local_20 = local_20 + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * 0x10;
  local_1c = local_1c + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8) * 0x10;
  iVar2 = FUN_00419090(piVar1,&local_24,*(int *)(param_1 + 100) + 0x14,param_1,&LAB_00404630);
  if (iVar2 != 0) {
    local_24 = 0;
    local_20 = -0x1388000;
    local_1c = 0;
    FUN_004b24d0(&local_24,&local_24);
    local_24 = local_24 + *piVar1 + *(int *)(param_1 + 0xa0) * 0x10;
    local_20 = local_20 + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * 0x10;
    local_1c = local_1c + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8) * 0x10;
    iVar2 = FUN_00419090(piVar1,&local_24,*(int *)(param_1 + 100) + 0x14,param_1,&LAB_00404630);
    if (iVar2 != 0) {
      local_24 = -0x1388000;
      local_20 = 0;
      local_1c = 0;
      FUN_004b24d0(&local_24,&local_24);
      local_24 = local_24 + *piVar1 + *(int *)(param_1 + 0xa0) * 0x10;
      local_20 = local_20 + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * 0x10;
      local_1c = local_1c + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8) * 0x10;
      iVar2 = FUN_00419090(piVar1,&local_24,*(int *)(param_1 + 100) + 0x14,param_1,&LAB_00404630);
      if (iVar2 != 0) {
        local_24 = 0x1388000;
        local_20 = 0;
        local_1c = 0;
        FUN_004b24d0(&local_24,&local_24);
        local_24 = local_24 + *piVar1 + *(int *)(param_1 + 0xa0) * 0x10;
        local_20 = local_20 + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * 0x10;
        local_1c = local_1c + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8) * 0x10;
        iVar2 = FUN_00419090(piVar1,&local_24,*(int *)(param_1 + 100) + 0x14,param_1,&LAB_00404630);
        if (iVar2 != 0) {
          local_24 = 0;
          local_20 = 0;
          local_1c = -0x7d0000;
          FUN_004b24d0(&local_24,&local_24);
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) * -2;
          *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) * -2;
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) * -2;
          *(int *)(param_1 + 0x344) = local_24 + *piVar1;
          *(int *)(param_1 + 0x348) = local_20 + *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x34c) = local_1c + *(int *)(param_1 + 0x3c);
          return;
        }
      }
    }
  }
  *(int *)(param_1 + 0x344) = local_24;
  *(int *)(param_1 + 0x348) = local_20;
  *(int *)(param_1 + 0x34c) = local_1c;
  return;
}

