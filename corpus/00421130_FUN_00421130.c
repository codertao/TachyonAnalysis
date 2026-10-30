
void FUN_00421130(int param_1)

{
  uint uVar1;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  uVar1 = FUN_0048e440((int *)(param_1 + 0x34),&DAT_005b9600);
  if (uVar1 < 0x1388001) {
    uVar1 = FUN_0048e350();
    local_30 = ((uVar1 & 0x3fffff) - 0x200000) + *(int *)(param_1 + 0x4c);
    uVar1 = FUN_0048e350();
    local_2c = ((uVar1 & 0x3fffff) - 0x200000) + *(int *)(param_1 + 0x50);
    local_28 = 0;
    FUN_004b1bb0(local_18,&local_30);
    FUN_004b24d0(param_1 + 0x10c,local_24);
    FUN_004b1bb0(local_18,(int *)(param_1 + 0x4c));
    FUN_004b24d0(param_1 + 0x118,&local_3c);
    local_3c = local_3c + *(int *)(param_1 + 0x34);
    local_34 = local_34 + *(int *)(param_1 + 0x3c);
    local_38 = local_38 + *(int *)(param_1 + 0x38);
    FUN_00421980(&local_3c,*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108),
                 *(undefined4 *)(param_1 + 0x124),local_24,2,0x10,0,1);
  }
  return;
}

