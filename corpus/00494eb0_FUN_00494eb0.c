
void FUN_00494eb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if ((*(int **)(param_2 + 0xb4) != (int *)0x0) && (**(int **)(param_2 + 0xb4) != 0)) {
    uVar1 = FUN_0048e440((int *)(param_1 + 0x34),&DAT_005b9600);
    if (uVar1 < 0x2710001) {
      FUN_004b1bb0(local_18,(undefined4 *)(param_1 + 0x4c));
      FUN_004b24d0(param_2 + 0xc0,&local_30);
      local_2c = local_2c + *(int *)(param_1 + 0x38);
      local_30 = local_30 + *(int *)(param_1 + 0x34);
      local_28 = local_28 + *(int *)(param_1 + 0x3c);
      iVar2 = FUN_00421ae0(&local_30,**(undefined4 **)(param_2 + 0xb4),0x10000,0,&local_24,2,
                           *(undefined4 *)(param_2 + 0xb8));
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x18) = 0x290;
        *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x1c);
      }
    }
  }
  return;
}

