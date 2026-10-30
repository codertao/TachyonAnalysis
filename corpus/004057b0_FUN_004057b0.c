
void FUN_004057b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  int iStack_2c;
  undefined1 auStack_18 [24];
  
  iVar1 = *(int *)(param_1 + 0x90);
  local_3c = *(undefined4 *)(param_1 + 0x4c);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x7d0000;
  local_38 = 0;
  local_34 = 0;
  if (iVar1 == 0) {
    FUN_00401e20(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  *(undefined2 *)(param_1 + 0x312) = 0x400;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    (**(code **)(*(int *)(iVar1 + 0x8c) + 0x58))(iVar1,4,local_30);
    FUN_004b1bb0(auStack_18,&local_3c);
    FUN_004b24d0(&local_48,&local_48);
    local_48 = local_48 + *(int *)(param_1 + 0x34);
    local_40 = local_40 + *(int *)(param_1 + 0x3c);
    local_44 = iStack_2c;
    FUN_0040f380(param_1 + 0x34,&local_48,param_1 + 0xdc);
    uVar2 = *(int *)(param_1 + 0x38) - local_44;
    uVar3 = (int)uVar2 >> 0x1f;
    if ((int)((uVar2 ^ uVar3) - uVar3) < 0x64000) {
      *(undefined1 **)(param_1 + 0x304) = &LAB_004056b0;
    }
  }
  return;
}

