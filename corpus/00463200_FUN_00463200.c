
void FUN_00463200(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  iVar1 = param_1;
  local_30 = 0;
  local_2c = 0;
  local_28 = -0x1000;
  uVar2 = FUN_0048e440(param_1 + 0x34,&DAT_005b9600);
  if (uVar2 < 0x1388001) {
    FUN_004b19a0(param_1 + 0x18);
    DAT_00666b04 = 0x10000;
    iVar3 = FUN_004b3bf0(param_1 + 0x18);
    if ((iVar3 != 0) && (*(int *)(param_2 + 0x30) != 0)) {
      iVar3 = DAT_005b216c;
      if ((*(int *)(param_1 + 0x8c) != 0) &&
         ((piVar5 = *(int **)(*(int *)(param_1 + 0x8c) + 0x6c4), piVar5 != (int *)0x0 &&
          (iVar4 = *piVar5, iVar4 != 0)))) {
        iVar3 = iVar4;
      }
      FUN_004b1bb0(local_18,param_1 + 0x4c);
      local_34 = 4;
      do {
        piVar5 = (int *)(param_2 + 0x34);
        param_1 = 0;
        if (*(int *)(param_2 + 0x30) != 0) {
          do {
            uVar2 = FUN_0048e350();
            local_24 = *piVar5 + -50000 + (uVar2 % 50000) * 2;
            uVar2 = FUN_0048e350();
            local_30 = 0;
            local_2c = 0;
            local_20 = piVar5[1] + -50000 + (uVar2 % 50000) * 2;
            local_1c = piVar5[2];
            local_28 = FUN_0048e440(&local_24,piVar5);
            local_28 = local_28 + -0x20000;
            FUN_004b24d0(&local_30,&local_30);
            local_30 = local_30 + *(int *)(iVar1 + 0xa0);
            local_2c = local_2c + *(int *)(iVar1 + 0xa4);
            local_28 = local_28 + *(int *)(iVar1 + 0xa8);
            FUN_004b24d0(&local_24,&local_24);
            local_24 = local_24 + *(int *)(iVar1 + 0x34);
            local_20 = local_20 + *(int *)(iVar1 + 0x38);
            local_1c = local_1c + *(int *)(iVar1 + 0x3c);
            iVar4 = FUN_00421ae0(&local_24,iVar3,0x40000,0xfffff800,&local_30,2,10);
            if (iVar4 != 0) {
              *(uint *)(iVar4 + 0x2c) = (uint)(param_4 * 0xff) / 100;
            }
            param_1 = param_1 + 1;
            piVar5 = piVar5 + 3;
          } while (param_1 < *(uint *)(param_2 + 0x30));
        }
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
  }
  return;
}

