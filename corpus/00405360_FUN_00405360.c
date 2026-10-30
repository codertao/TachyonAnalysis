
void FUN_00405360(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  *(undefined2 *)(param_1 + 0x312) = 0x400;
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  local_24 = 0;
  local_20 = 0x1f4000;
  local_1c = -0x1388000;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x58);
    if (pcVar2 == (code *)0x0) {
      local_30 = *(int *)(iVar1 + 0x34);
      local_2c = *(int *)(iVar1 + 0x38);
      local_28 = *(int *)(iVar1 + 0x3c);
    }
    else {
      (*pcVar2)(iVar1,2,&local_30);
    }
    FUN_004b1bb0(local_18,iVar1 + 0x4c);
    FUN_004b24d0(&local_24,&local_24);
    local_30 = local_30 + local_24;
    local_2c = local_2c + local_20;
    local_28 = local_28 + local_1c;
    uVar3 = FUN_0048e440(param_1 + 0x34,&local_30);
    if (uVar3 < 0x3e8000) {
      *(undefined1 **)(param_1 + 0x304) = &LAB_00405280;
    }
    FUN_0040f380(param_1 + 0x34,&local_30,param_1 + 0xdc);
  }
  return;
}

